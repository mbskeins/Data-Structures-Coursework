

//
//
// File:        logentry.cpp  
//       
// Version:     1.0
// Date:        
// Author:      
//
// Description: Class implementation for a log entry.
//
//

////////////////////////////////////////////////////////////
#include <iostream>
#include <vector>

#include "string.hpp" 
#include "logentry.hpp"

////////////////////////////////////////////////////////// 
// REQUIRES:  
// ENSURES: 
//
LogEntry::LogEntry(String s) {
    // ...

  //  std::cout << s[0] << "[]" << std::endl;
    std::vector<String> vec = s.split(' ');

    // std::cout << "value of s after split: "<< s[0] << std::endl;

    //std::cout <<"this is a test" << vec[0] << std::endl;

    if (vec.size() == 10){
      host = vec[0];
      std::vector<String> date_time = vec[3].split(':');
      

      //std::cout <<"this is a test inside first if" << std::endl;


      std::vector<String> date_string = date_time[0].split('/');
      
      String stringday = date_string[0].substr(1, date_string[0].length());
      
      date.setday(stringday);

      String stringmonth = date_string[1];
      date.setmonth(stringmonth);

      int intyear = date_string[2].convertInt();
      date.setyear(intyear);

      time.sethour(date_time[1].convertInt());
      time.setminute(date_time[2].convertInt());
      time.setsecond(date_time[3].convertInt());
      
      int ending = vec[5].length();
      request = vec[5].substr(1,ending);

      status = vec[8];

      if(vec[9] == '-'){number_of_bytes = 0;}

       number_of_bytes = vec[9].convertInt();
    }else{

      //std::cout << "this is a test inside else" << std::endl;

      host = "";
      date.setday("");
      date.setmonth("");
      date.setyear(0);
      time.sethour(0);
      time.setminute(0);
      time.setsecond(0);
      request = "";
      status = "";
      number_of_bytes = 0;
    }
}

////////////////////////////////////////////////////////// 
// REQUIRES:  
// ENSURES: 
//
std::vector<LogEntry> parse(std::istream& in) {
    std::vector<LogEntry> result;

    //std::cout << "parse is starting" << std::endl;

    do {
      String line = line.getline(in);
      LogEntry log(line);
      result.push_back(log);
    }while(!in.eof());
    
    return result;
}

////////////////////////////////////////////////////////// 
// REQUIRES:  
// ENSURES: 
//
void output_all(std::ostream& out, const std::vector<LogEntry> & vecLogs) {

  for(unsigned int i = 0; i < vecLogs.size() - 1; ++i){
    //std::cout << "value of I in output_all: " << i << std::endl;

    out << vecLogs[i];
  }
}

////////////////////////////////////////////////////////// 
// REQUIRES:  
// ENSURES: 
//
void by_host(std::ostream& out, const std::vector<LogEntry>& logs) {

  for(unsigned int i = 0; i < logs.size(); ++i){
    out << logs[i].gethost() << '\n';
  }

}

////////////////////////////////////////////////////////// 
// REQUIRES:  
// ENSURES: 
//
int byte_count(const std::vector<LogEntry> &logs) {
  
  int sum = 0;
  for(unsigned int i = 0; i < logs.size(); ++i){
    sum += logs[i].getbytes();
  }

  
    return sum;
}

////////////////////////////////////////////////////

std::ostream& operator << (std::ostream& out, const LogEntry& log){

  out << "Host: " << log.host << '\n';
    
  out << "Day: " << log.date.getday() << '\n';
  out << "Month: " << log.date.getmonth() << '\n';
  out << "Year: " << log.date.getyear() << '\n';
    
  out << "Hour: " << log.time.gethour() << '\n';
  out << "Minute: " << log.time.getminute() << '\n';
  out << "Second: " << log.time.getsecond() << '\n';
    
  out << "Request: " << log.request << '\n';
  out << "Status: " << log.status << '\n';
  out << "Bytes: " << log.number_of_bytes << "\n\n";
    
  return out;


}

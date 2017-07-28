
MSG:
	@echo 'options: tests, clean'

tests: test_lessThan
	./test_lessThan

test_lessThan: string.o test_lessThan.cpp
	clang++ -Wall string.o test_lessThan.cpp -o test_lessThan

string.o: string.cpp string.hpp
	clang++ -Wall string.cpp -c

clean:
	rm -f *.o
	rm -f test_lessThan

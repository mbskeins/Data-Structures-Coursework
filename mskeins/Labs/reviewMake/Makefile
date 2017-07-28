tests: test_default_ctor test_int_ctor test_equal
	./test_default_ctor
	./test_int_ctor
	./test_equal

minibigint.o: minibigint.cpp minibigint.hpp
	clang++ -c minibigint.cpp

test_default_ctor: test_default_ctor.cpp minibigint.o
	clang++ test_default_ctor.cpp minibigint.o -o test_default_ctor

test_int_ctor: test_int_ctor.cpp minibigint.o
	clang++ test_int_ctor.cpp minibigint.o -o test_int_ctor

test_equal: test_equal.cpp minibigint.o
	clang++ test_equal.cpp minibigint.o -o test_equal

clean:
	rm minibigint.o
	rm test_equal
	rm test_int_ctor
	rm test_default_ctor

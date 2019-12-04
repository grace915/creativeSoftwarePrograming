hw12-2: list.o list_main.o my_shared_ptr.o
	g++ -std=c++11 -o list list.o list_main.o
	g++ -std=c++11 -o my_shared_ptr my_shared_ptr.o
list.o:list.cc
	g++ -std=c++11 -c list.cc
list_main.o:list_main.cc
	g++ -std=c++11 -c list_main.cc
my_shared_ptr.o:my_shared_ptr.cc
	g++ -std=c++11 -c my_shared_ptr.cc
clean:
	rm list.o list_main.o my_shared_ptr.cc

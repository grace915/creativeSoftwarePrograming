
hw5_1: swaping.o command_argument.o  circle.o circle_main.o  cmdarg.o
	g++ -o swaping swaping.o
	g++ -o command_argument command_argument.o
	g++ -o circle circle.o circle_main.o
	g++ -o cmdarg cmdarg.o
swaping.o : swaping.cpp
	g++ -c swaping.cpp
command_argument.o : command_argument.cpp
	g++ -c command_argument.cpp

circle.o : circle.cpp
	g++ -c circle.cpp

circle_main.o : circle_main.cpp 
	g++ -c circle_main.cpp 

cmdarg.o : cmdarg.cpp
	g++ -c cmdarg.cpp

clean :
	rm swaping.o command_argument.o circle_main.o circle.o cmdarg.o

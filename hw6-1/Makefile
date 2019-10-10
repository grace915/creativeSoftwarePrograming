hw6_1 : simple_shape_main.o simple_shape.o simple_account_main.o simple_account.o
	g++ -o simple_shape simple_shape_main.o simple_shape.o 
	g++ -o simple_account simple_account_main.o simple_account.o
simple_shape_main.o : simple_shape_main.cpp
	g++ -c simple_shape_main.cpp
	g++ -c simple_shape.cpp
simple_account_main.o: simple_account_main.cpp
	g++ -c simple_account_main.cpp
	g++ -c simple_account.cpp
clean:
	rm simple_shape_main.o
	rm simple_shape.o
	rm simple_account_main.o
	rm simple_account.o

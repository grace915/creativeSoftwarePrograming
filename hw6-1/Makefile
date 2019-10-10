hw6_1 : simple_shape_main.o simple_shape.o
	g++ -o simple_shape simple_shape_main.o simple_shape.o
simple_shape_main.o : simple_shape_main.cpp
	g++ -c simple_shape_main.cpp
	g++ -c simple_shape.cpp
clean:
	rm simple_shape_main.o
	rm simple_shape.o

hw8_1: number.o number_main.o rectangle.o rectangle_main.o
	g++ -o number number.o number_main.o
	g++ -o rectangle rectangle.o rectangle_main.o
number.o: number.cpp
	g++ -c number.cpp
number_main.o: number_main.cpp
	g++ -c number_main.cpp
rectangle.o: rectangle.cpp
	g++ -c rectangle.cpp
rectangle_main.o: rectangle_main.cpp
	g++ -c rectangle_main.cpp
clean:
	rm number.o number_main.o rectangle.o rectangle_main.o

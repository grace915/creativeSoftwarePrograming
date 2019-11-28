hw12-1: myswap.o myVector.o myVector_main.o myContainer.o
	g++ -std=c++11 -o myswap myswap.o
	g++ -std=c++11 -o myVector myVector.o myVector_main.o myContainer.o
myswap.o : myswap.cc
	g++ -std=c++11 -c myswap.cc
myVector.o: myVector.cc
	g++ -std=c++11 -c myVector.cc
myVector_main.o: myVector_main.cc
	g++ -std=c++11 -c myVector_main.cc
myContainer.o: myContainer.cc
	g++ -std=c++11 -c myContainer.cc

clean:
	rm myswap.o myVector.o myVector_main.o myContainer.o

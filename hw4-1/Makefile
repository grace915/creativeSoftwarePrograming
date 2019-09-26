
hw4_1 : string.o dynamic_array.o function_overloading.o
	g++ -o string string.o
	g++ -o dynamic_array dynamic_array.o
	g++ -o function_overloading  function_overloading.o
string.o: string.cpp
	g++ -c string.cpp
dynamic_array.o : dynamic_array.cpp
	g++ -c dynamic_array.cpp
function_overloading.o: function_overloading.cpp
	g++ -c function_overloading.cpp
clean: 
	rm string.o dynamic_array.o function_overloading.o

hw7_1: sorted_array.o sorted_array_main.o integer_set.o integer_set_main.o
	g++ -std=c++11 -o sorted_array sorted_array_main.o sorted_array.o
	g++ -std=c++11 -o integer_set integer_set.o integer_set_main.o
sorted_array.o: sorted_array.cpp
	g++ -std=c++11 -c sorted_array.cpp
sorted_array_main.o:sorted_array_main.cpp
	g++ -std=c++11 -c sorted_array_main.cpp

integer_set.o: integer_set.cpp
	g++ -std=c++11 -c integer_set.cpp
integer_Set_main.o: integer_set_main.cpp
	g++ -std=c++11 -c integer_set_main.cpp
clean:
	rm sorted_array.o sorted_array_main.o integer_set.o integer_set_main.o


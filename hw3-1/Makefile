make_struct: struct_person.o array_struct_person.o
	g++ -o struct_person struct_person.o
	g++ -o array_struct_person array_struct_person.o
struct_person.o : struct_person.cpp
	g++ -c  struct_person.cpp
array_struct_person.o : array_struct_person.cpp
	g++ -c array_struct_person.cpp
clean :
	rm struct_person.o array_struct_person.o

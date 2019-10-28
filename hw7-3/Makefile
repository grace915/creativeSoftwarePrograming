hw7_3: message_book.o message_book_main.o
	g++ -o message_book message_book.o message_book_main.o
message_book.o: message_book.cpp
	g++ -c message_book.cpp
message_book_main.o: message_book_main.cpp
	g++ -c message_book_main.cpp
clean:
	rm message_book.o message_book_main.o


hw6_2: reply_admin_main.o reply_admin.o
	g++ -o reply_admin reply_admin.o reply_admin_main.o
reply_admin_main.o: reply_admin_main.cpp
	g++ -c reply_admin_main.cpp
reply_admin.o:reply_admin.cpp
	g++ -c reply_admin.cpp
clean:
	rm reply_admin reply_admin.o reply_admin_main.o


hw11-2: world_clock.o world_clock_main.o calendar.o calendar_main.o
	g++ -std=c++11 -o world_clock world_clock.o world_clock_main.o
	g++ -std=c++11 -o calendar calendar.o calendar_main.o
world_clock.o:world_clock.cc
	g++ -std=c++11 -c world_clock.cc
world_clock_main.o:world_clock_main.cc
	g++ -std=c++11 -c world_clock_main.cc

calendar.o: calendar.cc
	g++ -std=c++11 -c calendar.cc
calendar_main.o: calendar_main.cc
	g++ -std=c++11 -c calendar_main.cc
clean:
	rm world_clock.o world_clock_main.o calendar.o calendar_main.o

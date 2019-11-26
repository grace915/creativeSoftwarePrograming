#include "world_clock.h"


void WorldClock::Tick(int seconds) {

	timezone += seconds;
		
	

	cout << *this;
}

void WorldClock::SetTime(int hour, int minute, int second) {
	
	timezone = (hour * 60 * 60) + (minute * 60) + second;

	if (timezone > 86400) {
		cout << "Invalid time : " << hour << " : " << minute << " : " << second << endl;
	}
	else{
	cout<< *this;
	}
}
	

int WorldClock::hour()const {
	
	int a = timezone;
	if(timezone <0)
		return (((60 * 60 * 24) + a) / 60) / 60;
	else
		return 
		(a / 60) / 60;
}
int WorldClock::minute()const {
	int a= timezone;
	if (timezone < 0)
		return (((60 * 60 * 24) + a) / 60) % 60;
	else
		return  (a / 60) % 60;
}
int WorldClock::second() const{
	int a = timezone;
	if (timezone < 0)
		return  ((60 * 60 * 24) + a) % 60;
	else
		return ((60 * 60 * 24) + a) % 60;
}


ostream & operator<<(ostream & os, const WorldClock& c) {
	
	
	os << c.hour() << ":" << c.minute() << ":" << c.second() << endl;
	return os;

	

}

istream& operator>>(istream & is, WorldClock & c) {

	string line;
	is >> line;
	string s;
	int time[3];
	int n;
	
	n = line.find(":");
	time[0] = atoi(line.substr(0,n).c_str());
	line = line.substr(n+1);
	n = line.find(":");
	time[1] = atoi(line.substr(0, n).c_str());
	line = line.substr(n+1);
	time[2] = atoi(line.c_str());


	c.SetTime(time[0], time[1], time[2]);

	return is;


}


































































































































































































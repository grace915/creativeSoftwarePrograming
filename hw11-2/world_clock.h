
#include <iostream>
#include <cstring>
#include <cstdlib>
using namespace std;

class WorldClock {
public:
	void Tick(int seconds);
	void SetTime(int hour, int minute, int second);
	int hour()const;
	int minute()const;
	int second()const;


private:
	int timezone; // 초 정보만 저장하고 시, 분을 계산 (예: 10000초 = 2 시간 46 분 40 초).

};

ostream& operator<<(ostream& os, const WorldClock& c);

istream& operator>>(istream& is, WorldClock& c);

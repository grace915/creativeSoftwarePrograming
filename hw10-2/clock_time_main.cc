#include "clock_time.h"
#include <vector>
#include <iostream>

using namespace std;

int main(){
	int s;
	vector<Clock*> v;
	v.push_back(new SundialClock(0,0,0));
	v.push_back(new CuckooClock(0, 0, 0));
	v.push_back(new GrandFatherClock(0, 0, 0));
	v.push_back(new WristClock(0, 0, 0));
	v.push_back(new AtomicClock(0, 0, 0));
	cin >> s;

	for (int i = 0; i < v.size(); i++) {
		v[i]->reset();

	}
	cout << "Reported clock times agter resetting" << endl;
	for (int i = 0; i < v.size(); i++) {
		v[i]->displayTime();
	}
	cout << endl;
	cout << "Running the clocks..." << endl;
	for (int i = 0; i < v.size(); i++) {
		for (int j = 0; j < s; j++) {
			v[i]->tick();
		}
	}
	cout << endl;
	cout << "Reported clock times after running" << endl;
	for (int i = 0; i < v.size(); i++) {
		v[i]->displayTime();
	}
}

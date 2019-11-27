#include "calendar.h"



int main(void) {
	string line;
	Date d;

	
	while (1) {
		cin >> line;

		
		if (line.substr(0,3) == "set") {
			cin >> d;

			continue;

		}
		if (line.find("next") != string::npos) {
			
			if (line == "next_day") {
				d.NextDay(1);

				continue;
			}
			else {
				line = line.substr(line.find('_')+1);
				int n = atoi(line.c_str());
				d.NextDay(n);
				continue;
			}
		}

		if (line == "quit")
			break;
	}


}

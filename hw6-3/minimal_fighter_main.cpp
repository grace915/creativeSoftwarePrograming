#include "minimal_fighter.h"

using namespace std;

int main(void) {

	string line;

	MinimalFighter m1;
	MinimalFighter m2;


	
	while (1) {
		char ch;
		cin >> ch;

		if (ch == 'q' || ch == 'Q')
			return 0;

		else {
			/*char _h = line[0];
			int h = atoi(&_h);
			char _p = line[2];
			int p = atoi(&_p);
			char action = line[4];
			char _h2 = line[6];
			int h2 = atoi(&_h2);
			char _p2 = line[8];
			int p2 = atoi(&_p2);
			*/
			int h, p, h2, p2;
			char action;
			cin >> p >> action >> h2 >> p2;
			h = atoi(&ch);

			m1 = MinimalFighter(h, p);
			m2 = MinimalFighter(h2, p2);
		
			
			if (action == 'h' || action == 'H') {
				m1.hit(&m2);
				
				if (m1.status() == 2) {//this dead
					if (m2.status() == 2)//enemy dead
						cout << "Dead" << " / " << "Dead" << endl;
					else//enemy alive
						cout << "Dead" << " / " << "H" << m2.hp() << ", P" << m2.power() << endl;

				}
				else {//this alive
					if (m2.status() == 2) //enemy dead
						cout << "H" << m1.hp() << ", P" << m1.power() << " / " << "Dead" << endl;
					else //enemy alive
						cout << "H" << m1.hp() << ", P" << m1.power() << " / " << "H" << m2.hp() << ", P" << m2.power() << endl;

				}
			}

			else if (action == 'a' || action == 'A') {
				m1.attack(&m2);
				
				if (m1.status() == 2) {//this dead
					if (m2.status() == 2)//enemy dead
						cout << "Dead" << " / " << "Dead" << endl;
					else//enemy alive
						cout << "Dead" << " / " << "H" << m2.hp() << ", P" << m2.power() << endl;

				}
				else {//this alive
					if (m2.status() == 2) //enemy dead
						cout << "H" << m1.hp() << ", P" << m1.power() << " / " << "Dead" << endl;
					else //enemy alive
						cout << "H" << m1.hp() << ", P" << m1.power() << " / " << "H" << m2.hp() << ", P" << m2.power() << endl;

				}

			}
			else if (action == 'f' || action == 'F') {
				m1.fight(&m2);
				
				if (m1.status() == 2) {//this dead
					if (m2.status() == 2)//enemy dead
						cout << "Dead" << " / " << "Dead" << endl;
					else//enemy alive
						cout << "Dead" << " / " << "H" << m2.hp() << ", P" << m2.power() << endl;

				}
				else {//this alive
					if (m2.status() == 2) //enemy dead
						cout << "H" << m1.hp() << ", P" << m1.power() << " / " << "Dead" << endl;
					else //enemy alive
						cout << "H" << m1.hp() << ", P" << m1.power() << " / " << "H" << m2.hp() << ", P" << m2.power() << endl;

				}
			}
			else
				break;


		}
	}
	return 0;
}


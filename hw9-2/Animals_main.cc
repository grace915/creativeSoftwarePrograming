#include "Animals.h"

int main() {
	char ch;
	string name;
	int age;
	vector<Animal*> animals;

	while (1) {
		cin >> ch;
		if (ch == '0') {

			for (int i = 0; i < animals.size(); i++) {
				animals[i]->printInfo();
			}
			break;


		}
		else if (ch == 'z') {
			int numStripes;
			cin >> name >> age >> numStripes;
			animals.push_back(new Zebra(name, age, numStripes));

		}
		else if (ch == 'c') {
			string favoriteToy;
			cin >> name >> age >> favoriteToy;
			animals.push_back(new Cat(name, age, favoriteToy));
		}
	}
\
	for (int i = 0; i < animals.size(); i++) {
		delete animals[i];
	}

}

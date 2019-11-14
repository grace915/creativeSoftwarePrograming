#include "print_shape.h"

int main(void) {
	string list;
	vector<A*> objets;
	while (1) {
		cin >> list;
		if (list == "B")
			objets.push_back(new B);
		else if (list == "C")
			objets.push_back(new C);
		else if (list == "BB")
			objets.push_back(new BB);
		else if (list == "0")
			break;

	}
	for (int i = 0; i < objets.size(); i++) {
		B* b = dynamic_cast<B*>(objets[i]);
		C* c = dynamic_cast<C*>(objets[i]);
		BB* bb = dynamic_cast<BB*>(objets[i]);

		if (b) {
			b->test1();
			b->test2();
			
		}
		else if (c) {
			c->test1();
			c->test2();
		}
		else if (bb) {
			bb->test1();
			bb->test2();
		}

	}
	for (int i = 0; i < objets.size(); i++) {
		delete objets[i];
	}
}

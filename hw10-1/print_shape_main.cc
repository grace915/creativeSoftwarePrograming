#include "print_shape.h"

int main(void) {
	string list;
	vector<A*> objects;
	while (1) {
		cin >> list;
		if (list == "B")
			objects.push_back(new B);
		else if (list == "C")
			objects.push_back(new C);
		else if (list == "BB")
			objects.push_back(new BB);
		else if (list == "0")
			break;

	}
	for (int i = 0; i < objects.size(); i++) {
		B* b = dynamic_cast<B*>(objects[i]);
		C* c = dynamic_cast<C*>(objects[i]);
		BB* bb = dynamic_cast<BB*>(objects[i]);

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
	for (int i = 0; i < objects.size(); i++) {
		delete objects[i];
	}
	objects.clear();
	
}

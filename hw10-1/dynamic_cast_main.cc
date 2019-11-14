#include "dynamic_cast.h"

int main() {
	string line;
	vector<B*> objects;
	while (1) {
		cin >> line;
		if (line == "B")
			objects.push_back(new B);
		else if (line == "C")
			objects.push_back(new C);
		else if (line == "D")
			objects.push_back(new D);
		else if (line == "0")
			break;
	}
	for (int i = 0; i < objects.size(); i++){
		
		if (dynamic_cast<C*>(objects[i])) {
			dynamic_cast<C*>(objects[i])->test_C();
		}
		else if (dynamic_cast<D*>(objects[i])) {
			dynamic_cast<D*>(objects[i])->test_D();
		}
		else {
			continue;
		}
	}
	for (int i = 0; i < objects.size(); i++) {
		delete objects[i];
	}
	objects.clear();


}

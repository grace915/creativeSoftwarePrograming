#include "print_member.h"

int main() {
	vector<A*> v;
	int a;
	double b;
	string c;
	cin >> a;
	cin >> b;
	cin >> c;

	v.push_back(new A(a));
	v.push_back(new B(b));
	v.push_back(new C(c));

	for (int i = 0; i < v.size(); i++) {
		v[i]->print();
	}
	for (int i = 0; i < v.size(); i++) {
		delete v[i];
	}



}

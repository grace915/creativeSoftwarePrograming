#include "print_shape.h"

void A::test1() {
	cout << "A::test1()" << endl;
}

void B::test2() const{
	cout << "B::test2()" << endl;
}

void C::test1() {
	cout << "C::test1()" << endl;
}

void C::test2() const {
	cout << "C::test2()" << endl;
}

void BB::test1() {
	cout << "BB::test1()" << endl;
}

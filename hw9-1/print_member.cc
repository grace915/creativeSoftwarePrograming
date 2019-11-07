#include "print_member.h"


A::A(int a){
	memberA = new int;
	memberA[0] = a;
	cout << "new memberA" << endl;
	
}
B::B(double b) :A(1){
	
	memberB = new double;
	memberB[0] = b;
	cout << "new memberB" << endl;
}
C::C(string c) :B(1.1){
	memberC = new string;
	memberC[0] = c;
	cout << "new memberC" << endl;

}

A::~A() {
	delete memberA;
	cout << "delete memberA" << endl;

}
B::~B() {
	delete memberB;
	cout << "delete memberB" << endl;
}
C::~C() {
	delete memberC;
	cout << "delete memeberC" << endl;
}

void A::print() {
	cout << "*memeberA" << *memberA << endl;

}
void B::print() {
	A::print();
	cout << "*memeberB"<<*memberB << endl;

}
void C::print() {
	B::print();
	cout << "*memeberC"<<*memberC << endl;
}


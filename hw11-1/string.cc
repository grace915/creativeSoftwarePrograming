#include "string.h"
MyString::MyString() {
	
	len = 100;
	a = new char[len];

}
MyString::~MyString(){

	delete a;
}

MyString MyString::operator+(const MyString& a) {
	MyString ms;

	strcat(ms.a, this->a);
	ms.len = strlen(ms.a);
	strcat(ms.a, a.a);
	ms.len = strlen(ms.a);

	return ms;
	

}
MyString MyString::operator*(const int a) {
	MyString ms;

	for (int i = 0; i < a; i++) {
		strcat(ms.a, this->a);
		ms.len = strlen(ms.a);
	}



	return ms;
}
ostream& operator << (ostream& out, const MyString& b) {
	out << b.a ;

	return out;
}
istream& operator >> (istream& in, MyString& b) {
	in >> b.a;
	b.len = strlen(b.a);
	
	return in;
	
}

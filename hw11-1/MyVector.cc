#include "MyVector.h"

 

MyVector::MyVector() {}

 

MyVector::MyVector(int l) {

	this->len = l;

 
	arr = new int[len];

}

 

MyVector::~MyVector() {

	delete[] arr;
 
}

 

MyVector MyVector::operator+(const MyVector& a) {

	MyVector ar(len);

 

 

	for (int i = 0; i < this->len; i++) {


 

		ar.arr[i] = this->arr[i] + a.arr[i];

 

	}

	

	return ar;

 

}

MyVector MyVector::operator-(const MyVector& a) {

 

	MyVector ar(len);

 

 

	for (int i = 0; i < this->len; i++) {

 

 

		ar.arr[i] = this->arr[i] - a.arr[i];

	}

	return ar;

 

}

MyVector MyVector::operator+(const int a) {

	MyVector ar(len);

 

 

	for (int i = 0; i < this->len; i++) {

 

 

		ar.arr[i] = this->arr[i] + a;

	}

	return ar;

 

}

MyVector MyVector::operator-(const int a) {

	MyVector ar(len);

 

 

	for (int i = 0; i < this->len; i++) {

 

 

		ar.arr[i] = this->arr[i] - a;

	}

	return ar;

}

ostream& operator<<(ostream& out, const MyVector& b) {

 

	for (int i = 0; i < b.len; i++) {

		out << b.arr[i] << " ";

	}

	

	return out;

	

 

 

}

istream& operator >>(istream& in, MyVector& b) {

	for (int i = 0; i < b.len; i++) {

		in >> b.arr[i];

	}

	return in;

}

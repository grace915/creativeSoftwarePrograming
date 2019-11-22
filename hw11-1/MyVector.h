
#pragma once

#include <iostream>

#include <cstdlib>

using namespace std;

 

class MyVector {

private:

	int len;

	int* arr;

 

public:

	MyVector();

	MyVector(int l);

	~MyVector();

	MyVector operator+(const MyVector& a);

	MyVector operator-(const MyVector& a);

	MyVector operator+(const int a);

	MyVector operator-(const int a);

	friend ostream& operator <<(ostream& out, const MyVector& b);

	friend istream& operator >>(istream& in, MyVector& b);

};

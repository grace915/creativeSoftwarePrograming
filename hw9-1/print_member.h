#include <iostream>
#include <vector>
#include <string>
using namespace std;

class A {
private:
	int* memberA;
public:
	A(int a);
	virtual ~A();
	virtual void print();
};
class B :public A {
private:
	double* memberB;	
public:
	B(double b);
	virtual ~B();
	virtual void print();
};

class C :public B {
private:
	string* memberC;
public:
	C(string c) ;
	virtual ~C();
	virtual void print();
};

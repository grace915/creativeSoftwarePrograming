#include <iostream>
#include <vector>
using namespace std;

class A {
public:
	virtual void test1();
	virtual void test2() const = 0 ;
};
class B :public A {
public:
	virtual void test2() const;
};
class C : public A {
public:
	virtual void test1();
	virtual void test2() const;
};
class BB : public B {
public:
	virtual void test1();
};

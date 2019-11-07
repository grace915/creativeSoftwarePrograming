#include <iostream>
#include <vector>
using namespace std;

class A {
public:
	virtual string getTypeInfo();
};
class B : public A {
	virtual string getTypeInfo();
};
class C : public B {
	virtual string getTypeInfo();
};


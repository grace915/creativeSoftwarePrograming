
#include <iostream>
#include<cstring>
using namespace std;

class MyString
{
private:
	int len;
	char* a;
public:
	
	MyString();
	~MyString();
	MyString operator+(const MyString& a);
	MyString operator*(const int a);
	friend ostream& operator << (ostream& out, const MyString& b);
	friend istream& operator >> (istream& in, MyString& b);
};

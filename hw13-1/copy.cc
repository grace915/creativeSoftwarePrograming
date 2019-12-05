#include <iostream>
using namespace std;

int data_size = 5;
class A
{
public:
	A(void)
	{
		data = new int[data_size];
		for (int i = 0; i < data_size; ++i)
			data[i] = i;
		cout << "constructed" << endl;
	}
	A(A & a)
	{
		data = new int[data_size];
		for (int i = 0; i < data_size; ++i)
			data[i] = a.data[i];
	}
	~A(void)
	{
		for (int i = 0; i < data_size; ++i)
			data[i] = 0;
		delete[] data;
		data = NULL;
		cout << "destroyed" << endl;
	}

private:
	int* data;

	friend ostream& operator<< (ostream& out, const A& a);
};
ostream& operator<< (ostream & os, const A & a)
{
	for (int i = 0; i < data_size; ++i)
		os << a.data[i] << " ";
	return os;
}
int main(void)
{
	try
	{
		A a;
		cout << a << endl;
		throw a;
	}
	catch (A & a)
	{
		cout << "err.handled" << endl;
		cout << a << endl;
	}
	return 0;
}

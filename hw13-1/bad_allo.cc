#include <iostream>
using namespace std;
class A
{
public:
	A(int n)
	{
		if (n <= 0)
			throw n;
		cout << "ID = " << n << ": constructed" << endl;
		n_ID = n;
		data = new int[n];
	}
	~A(void)
	{
		cout << "ID = " << n_ID << ": destroyed" << endl;
		delete[] data;
	}
private:
	
	int* data = NULL;
	int n_ID;
};
int main()
{
	try
	{
		A a(3);
		A b(2);
		{
			A c(1);
			A d(0);
			A e(-1);
		}
	}
	catch (int n)
	{
		cout << "caught in the main" << endl;
	}
	return 0;
}



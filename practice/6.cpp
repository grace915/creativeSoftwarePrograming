#include <iostream> 
#include <string> 
using namespace std;

class Stock 
{ public:
	string company; 
	long shares; 
	double share_val;
	Stock() {};
	Stock(const string& co, long n, double pr) : company(co), shares(n), share_val(pr) {};
};

int main() 
{
 int* i1 = new int; 
 int* i2 = new int(10);
 Stock* s1 = new Stock; 
 Stock* s2 = new Stock("Apple", 10, 125.0);
 delete i1; 
 delete i2; 
 delete s1; 
 delete s2;
 return 0;
}

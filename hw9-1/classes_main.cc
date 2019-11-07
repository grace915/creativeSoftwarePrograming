#include "classes.h"

int main(void) {

	vector<A*> v;
	v.push_back(new A);
	v.push_back(new B);
	v.push_back(new C);

	v[0]->test();
	v[1]->test();
	v[2]->test();
	
	
	
	for (int i = 0; i < v.size(); i++)
		delete v[i];
	
	return 0;	
}

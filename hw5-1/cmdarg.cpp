
#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

int main(int n, char* c[]) {

	int num = 0;
	string s;
	
	for (int i = 1; i < n; i++) {
		if (atoi(c[i]) != 0)
			num += atoi(c[i]);
		else 
			s += c[i];

	}
	cout << s << endl;
	cout << num << endl;
	
	


}

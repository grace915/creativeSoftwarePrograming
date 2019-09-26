
#include <iostream>
using namespace std;

int add(int a, int b) {
	return a + b;
}

string add(string a, string b) {
	return a + '-' + b;

}


int main(void) {

	int n1, n2;
	string s1, s2;
	int sum;
	string sumS;
	cin >> n1 >> n2 >> s1 >> s2;
	sum = add(n1, n2);
	sumS = add(s1, s2);
	cout << sum << endl;
	cout << sumS << endl;

}

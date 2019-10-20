#include <iostream>

using namespace std;

int main() {
	char str1[] = "string1";
	const char* str2 = "string2";

	cout << str1 << str2 << endl;

	str2 = "string22";
	cout << str1 << str2 << endl;

	str1[0] = 'X';

	cout << str1 << str2 << endl;

}

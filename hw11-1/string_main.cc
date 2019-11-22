#include "string.h"

int main() {

	string s;
	cin >> s;
	if (s == "quit") {
		return 0;
	}
	else if(s == "new") {
		MyString a, b;
		cout << "enter a" << endl;
		cin >> a;
		cout << "enter b" << endl;
		cin >> b;

		while (1) {
			string first;
			cin >> first;
			if (first.compare("quit") == 0) {
				return 0;
			}
			if (first.compare("a") == 0) {
				string oper;
				
				cin >> oper;
				if (oper.compare("+") == 0) {
					string second;
					cin >> second;
					if (second.compare("a") == 0) {
						
						cout << a + a << endl;
					}
					if (second.compare("b") == 0) {
						cout << a + b << endl;
						
					}
				}
				if (oper.compare("*") == 0) {
					int num;
					cin >> num;
					
					cout << a * num << endl;
				}
			}
			if (first.compare("b") == 0) {
				string oper;
				MyString c;
				cin >> oper;
				if (oper.compare("+") == 0) {
					string second;
					cin >> second;
					if (second.compare("a") == 0) {
						cout<< b + a<<endl;
						
					}
					if (second.compare("b") == 0) {
						cout << b + b << endl;
						
					}
				}
				if (oper.compare("*") == 0) {
					int num;
					cin >> num;

					cout << b * num << endl;
					
				}
			}
		}
	}
	return 0;
}

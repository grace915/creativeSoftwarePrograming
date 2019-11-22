
#include "MyVector.h"

 

int main(void) {

	string check;

	cin >> check;

	if (check == "quit") {

		return 0;

	}

	else if(check == "new"){

 
		
		
		int n;

		cin >> n;

		MyVector a(n);

		MyVector b(n);

 

		cout << "enter a " << endl;

		cin >> a;

		cout << "enter b" << endl;

		cin >> b;

 

		while (1) {

			string s;

 
			cin >> s;

 

			if (s == "quit") {

				break;

			}

			else if (s == "a") {

				char c;

				cin >> c;

				if (c == '+') {

					char cc;

					cin >> cc;

					if (cc == 'b') {

					

						cout << a + b<< endl;

						continue;

					}

					else {

						int n = atoi(&cc);

						

						cout << a + n<< endl;

						continue;

					}

				}

				else if (c == '-') {

					char cc;

					cin >> cc;

					if (cc == 'b') {

						

						cout << a-b << endl;

						continue;

					}

					else {

						int n = atoi(&cc);

						

						cout << a - n << endl;

						continue;

						

					}

				}

			}

			else if (s == "b") {

				char c;

				cin >> c;

				if (c == '+') {

					char cc;

					cin >> cc;

					if (cc == 'a') {

						

						cout << b + a << endl;

						continue;

					}

					else {

						int n = atoi(&cc);

						

						cout << b + n << endl;

						continue;

					}

				}

				else if (c == '-') {

					char cc;

					cin >> cc;

					if (cc == 'a') {

						

						cout << b - a << endl;

						continue;

					}

					else {

						int n = atoi(&cc);

						cout << b - n << endl;

						continue;

					}

				}

			}

		}

	}
return 0;

}

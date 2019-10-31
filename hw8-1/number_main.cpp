
#include "number.h"

int main() {


	Number nm;
	Square sq;
	Cube cb;

	while (1){

	
		int n;
		string s;

		cin >> s;
	
		if (s == "quit")
			return 0;
		else if (s == "number") {
			cin >> n;
			nm.setNumber(n);
			cout << "getNumber() : " << nm.getNumber() << endl;
		}
		else if (s == "square") {
			cin >> n;
			sq.setNumber(n);
			cout << "getNumber() : " << sq.getNumber() << endl;
			cout << "getSquare() : " << sq.getSquare() << endl;
		}
		else if (s == "cube") {
			cin >> n;
			cb.setNumber(n);
			cout << "getNumber() : " << cb.getNumber() << endl;
			cout << "getSquare() : " << cb.getSquare() << endl;
			cout << "getCube() : " << cb.getCube() << endl;

		}

	}
}

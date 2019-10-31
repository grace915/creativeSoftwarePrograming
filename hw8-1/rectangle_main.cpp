#include "rectangle.h"
int main() {
	while (1) {
		string s;
		int h;
		int w;
		
		

		cin >> s;
		if (s == "nonsquare") {
			cin >> w >> h;
			NonSquare nsq(w, h);
			nsq.print();
		}
		else if (s == "square") {
			cin >> w;
			Square sq(w);
			sq.print();
		}
		else if (s == "quit")
			return 0;

	}
}

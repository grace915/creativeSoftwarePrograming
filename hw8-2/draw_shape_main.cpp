#include "draw_shape.h"
int main() {

	int ch, cw;
	string shape;
	int x, y;
	int width, height,length;
	char c;

	cin >> ch >> cw;

	while (1) {
		cin >> shape;

		if (shape == "quit")
			return 0;
		else if (shape == "rect") {
			
			cin >> x >> y >> height >> width >> c;
			Rectangle rec(x, y, height, width, c);
			rec.Draw(cw,ch);

		}
		else if (shape == "diamond") {
			cin >> x >> y >> length >> c;
			Diamond dia(x, y, length, c);
			dia.Draw(cw, ch);


		}
		else if (shape == "square") {
			cin >> x >> y >> length >> c;
			Square squ(x, y, length, c);
			squ.Draw(cw, ch);
		}
	}
}


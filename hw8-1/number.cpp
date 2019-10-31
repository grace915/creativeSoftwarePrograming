
#include "number.h"


int Square::getSquare() {
	int a = getNumber();
	a *= a;
	return a;
}

int Cube::getCube() {
	int b = getNumber();
	b = b * b * b;
	return b;
}

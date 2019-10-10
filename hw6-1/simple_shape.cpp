
#include <iostream>
#define Pi 3.14
#include "simple_shape.h"
using namespace std;

void Circle::circle_area(float r) {
	cout << r * r * Pi ;

}
void Circle::circle_size(float r) {
	cout << 2 * r * Pi ;
}

void Rectangle::rec_area(float x1, float y1, float x2, float y2) {
	cout << (y1 - y2) * (x2 - x1);
}
void Rectangle::rec_size(float x1, float y1, float x2, float y2) {
	cout << 2 * ((y1 - y2) + (x2 - x1));
}
	

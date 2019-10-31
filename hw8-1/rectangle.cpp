
#include "rectangle.h"
Rectangle::Rectangle(int width, int height) {
	this->width = width;
	this->height = height;
}


int Rectangle::getArea() {
	return width * height;
	

}
int Rectangle::getPerimeter() {
	return 2 * (width + height);

}




void Square::print() {
	cout << width << "x" << width << " Square" << endl;
	cout << "Area : " << getArea() << endl;
	cout << "Perimeter : " << getPerimeter()<<endl;
}
void NonSquare::print()
{

	cout << width << "x" << height << " NonSquare" << endl;
	cout << "Area : " << getArea() << endl;
	cout << "Perimeter : " << getPerimeter() << endl;

}

#include "shapes.h"

Shape::Shape(double width, double height) {
	this-> width = width;
	this->height = height;

}

double Triangle::getArea() const{
	return 0.5* width* height;
}

double Rectangle::getArea() const{
	return width * height;
}

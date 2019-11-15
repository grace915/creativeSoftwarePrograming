#include "print_shape.h"

Circle::Circle(double radius) {
	this->radius = radius;
}
Rectangle::Rectangle(double width, double height) {
	this->width = width;
	this->height = height;
}

double Circle::getArea() const {
	return PI * radius* radius;
}
double Circle::getPerimeter() const {
	return 2 * PI* radius;
}
string Circle::getTypeString() const {
	return "Circle";
}
double Rectangle::getArea() const {
	return width * height;
}
double Rectangle::getPerimeter() const {
	return 2 * (width + height);
}
string Rectangle::getTypeString() const {
	return "Rctangle";
}

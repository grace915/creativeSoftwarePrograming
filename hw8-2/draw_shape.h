#pragma once

#include <iostream>
#include <cmath>
#include <string>
using namespace std;


class Shape {
public:
	Shape();
	Shape(int x, int y, int height, int width, char brush);

	double GetArea();
	int GetPerimeter();
	void Draw(int canvas_width, int canvas_height);

protected:
	int x;
	int y;
	int height;
	int width;
	char brush;
};

class Square : public Shape {
public:
	Square(int x, int y, int length, char brush) :Shape(x, y, length, length, brush) {}
	void Draw(int canvas_width, int canvas_hegith);
};
class Rectangle : public Shape {
public:
	Rectangle(int x, int y, int height, int width, char brush) : Shape(x, y, height, width, brush) {}
	void Draw(int canvas_width, int canvas_hegith);

};
class Diamond : public Shape {
public:
	Diamond(int x, int y, int length, char brush) : Shape(x, y, length, length, brush) {}
	double GetArea();
	double GetPerimeter();
	void Draw(int canvas_width, int canvas_hegith);
};


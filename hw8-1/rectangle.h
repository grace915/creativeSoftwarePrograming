#pragma once

#include <iostream>
#include <string>
using namespace std;

class Rectangle {
public:
	Rectangle(int width, int height);	
	int getArea();
	int getPerimeter();	
protected:
	int width;
	int height;
	
};

class Square : public Rectangle {
public:
	Square(int width):Rectangle(width,width){}
	void print();	
};

class NonSquare : public Rectangle {
public:
	NonSquare(int width, int height):Rectangle(width, height){}
	void print();	
};

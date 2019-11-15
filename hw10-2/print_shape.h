#include <iostream>
#include <vector>
#define PI 3.141592
using namespace std;

class Shape {
public:
	virtual double getArea() const = 0;
	virtual double getPerimeter() const = 0;
	virtual string getTypeString() const = 0;
};
class Circle :public Shape {
public:
	Circle(double radius);
	virtual double getArea()const;
	virtual double getPerimeter()const;
	virtual string getTypeString()const;
private:
	double radius;
};
class Rectangle:public Shape {
public:
	Rectangle(double width, double height);
	virtual double getArea()const;
	virtual double getPerimeter()const;
	virtual string getTypeString()const;
private:
	double width;
	double height;

};

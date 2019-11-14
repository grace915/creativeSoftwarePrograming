#include <iostream>
#include <vector>
using namespace std;

class Shape {
protected:
	double width;
	double height;
public:
	Shape(double width, double height);
	virtual double getArea() const= 0 ;
};
class Triangle :public Shape {
public :
	Triangle(double width, double height) :Shape(width, height) {};
	virtual double getArea()const;
};
class Rectangle :public Shape {
public:
	Rectangle(double width, double height) :Shape(width, height) {};
	virtual double getArea() const;
};


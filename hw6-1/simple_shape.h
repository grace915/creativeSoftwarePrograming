
#pragma once
class Circle {
private:
	
	float r;
	float x, y;

public:
	Circle();
	Circle( float x, float y, float r)
	{
		 this->x = x, this->y = y, this->r = r;
	};
	void circle_area(float r);
	void circle_size(float r);

};

class Rectangle {
private:
	
	float x1, x2, y1, y2;
public:
	Rectangle();
	Rectangle( float x1, float y1, float x2, float y2) {
		
		this->x1 = x1;
		this->y1 = y1;
		this->x2  = x2;
		this->y2 = y2;
	}
	void rec_area(float x1, float y1, float x2, float y2);
	void rec_size(float x1, float y1, float x2, float y2);
};

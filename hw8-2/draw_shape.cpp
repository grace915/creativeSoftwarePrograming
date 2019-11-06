#include "draw_shape.h"
Shape::Shape() {
	x = 0;
	y = 0;
	height = 0;
	width = 0;
	
}
Shape::Shape(int x, int y, int height, int width, char brush) {
	this->x = x;
	this->y = y;
	this->height = height;
	this->width = width;
	this->brush = brush;
}

double Shape::GetArea() {
	return height * width;
}
int Shape::GetPerimeter() {
	return 2 * (height + width);
}

double Diamond::GetArea() {
	return 2 * height* width;
}
double Diamond::GetPerimeter() {
	int a;
	a = pow(height, 2) + pow(width, 2);
	
	return 4*sqrt(a);

}

void Rectangle::Draw(int canvas_width, int canvas_height) {
	cout << "Area: " << GetArea() << endl;
	cout << "perimeter: " << GetPerimeter() << endl;
	cout << " 0123456789" << endl;
	for (int i = 0; i < canvas_height; i++) {
		cout << i;
		for (int j = 0; j < canvas_width; j++) {
			if ((i >= y && i < y + height) && (j >= x && j < x + width))
				cout << brush;
			else
				cout << ".";
		}
		cout << endl;
	}
}

void Square::Draw(int canvas_width, int canvas_height) {
	cout << "Area: " << GetArea() << endl;
	cout << "perimeter: " << GetPerimeter() << endl;
	cout << " 0123445678" << endl;
	for (int i = 0; i < canvas_height; i++) {
		cout << i;
		for (int j = 0; j < canvas_width; j++) {
			if ((i >= y && i < y + height) && (j >= x && j < x + width))
				cout << brush;
			else
				cout << ".";
		}
		cout << endl;
	}
}
void Diamond::Draw(int canvas_width, int canvas_height) {

	cout << "Area: " << GetArea() << endl;
	cout << "perimeter: " << GetPerimeter() << endl;
	cout << " 0123445678" << endl;
	for (int i = 0; i < y; i++) {
		cout << i;
		for (int j = 0; j < canvas_width; j++) {
			cout << ".";
		}
		cout << endl;
	}

	for (int i = 0; i <= height; i++) {
	
		if (i + y < canvas_height) {
			cout << y + i;
			
			
			for (int j = 0; j < x - i; j++) {

				cout << ".";
			}
			for (int j = 0; j < i + 1; j++) {
				
				cout << brush;
			}
			for (int j = 0; j < i; j++) {
				
				cout << brush;
			}
			for (int j = 1; j < canvas_width - (x + i) ; j++) {
				
				cout << ".";
			}
		}
		cout << endl;
	
	}
	int k = width;
	for (int i = 1; i <= height ; i++) {
		
		if (y + i + height  < canvas_height) {
			
			cout << y + height + i ;

			for (int j = 0; j < x - width + i ; j++)
				cout << ".";
			for (int j = 0; j <= width - i; j++)
				cout << brush;
			for (int j = 0; j <= width - i - 1; j++)
				cout << brush;
			for (int j = 0; j < canvas_width - x - k; j++) {
				cout << ".";
			
			}
			
		}
		--k;
		cout << endl;
	}
	for (int i = 0; i < canvas_height - (y + (2 * height) + 1); i++) {
		cout << y + 2 * height + 1;
		for (int j = 0; j < canvas_width; j++)
			cout << ".";
		cout << endl;

	}

	



}

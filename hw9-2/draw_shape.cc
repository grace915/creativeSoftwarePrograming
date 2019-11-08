#include "draw_shape.h"

Canvas::Canvas(int row, int col) {
	this->row = row;
	this->col = col;
	cv  = new char* [row];

	for (int i = 0; i < row; ++i) {
		cv[i] = new char[col];
	}
	for (int i = 0; i < row; ++i) {
		for (int j = 0; j < col; ++j) {
			cv[i][j] = '.';
		}
	}

}

Canvas::~Canvas() {
	for (int i = 0; i < row; i++) {
		delete[] cv[i];
	}
	delete[] cv;



}
void Canvas::Resize(int w, int h) {
	this->col = w;
	this->row = h;

	cv = new char* [row];

	for (int i = 0; i < row; ++i) {
		cv[i] = new char[col];
	}

}
bool Canvas::DrawPixel(int x, int y, char brush) {
	if (x <= col && y <= row) {
		cv[y][x] = brush;
		
		return true;
	}
	else {
		return true;
	}
}
void Canvas::Print() {
	cout << " ";
	for (int i = 0; i < col; i++) {
		if (i < 10)
			cout << i;
		else
			cout << i % 10;
	}
	cout << endl;

	for (int i = 0; i < row; i++) {
		if (i < 10)
			cout << i;
		else
			cout << i % 10;
		for (int j = 0; j < col; j++) {
			cout <<cv[i][j];
		
		}
		cout << endl;

	}


}
void Canvas::Clear() {
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			cv[i][j] = '.';
		}
	}
}

void Shape::Draw(Canvas* canvas) {
	canvas->DrawPixel(x, y,brush);

	
}
Rectangle::Rectangle(int x, int y, int width, int height, char brush) {
	this->x = x;
	this->y = y;
	this->height = height;
	this->width = width;
	this->brush = brush;

}
UpTriangle::UpTriangle(int x, int y, int height, char brush) {
	this->x = x;
	this->y = y;
	this->height = height;
	this->width = height;
	this->brush = brush;
}
DownTriangle::DownTriangle(int x, int y, int height, char brush) {
	this->x = x;
	this->y = y;
	this->height = height;
	this->width = height;
	this->brush = brush;
}
Diamond::Diamond(int x, int y, int r, char brush) {
	this->x = x;
	this->y = y;
	this->height = r;
	this->width = r;
	this->brush = brush;
}


void Rectangle::Draw(Canvas* canvas) {
	for (int i = 0; i < height; i++) {
		for (int j = 0; j < width; j++) {
			canvas->DrawPixel(j + x, i+y,brush);
		}
	}
}
void UpTriangle::Draw(Canvas* canvas) {
	for (int i = 0; i < height; i++) {
		for (int j = x - i ; j <= x +i ; j++) {
			
			canvas->DrawPixel(j, i+y, brush);
		}
	}
	
	
}

void DownTriangle::Draw(Canvas* canvas) {

	for (int i = height-1; i >= 0; i--) {
		for (int j = x - i; j <= x + i; j++) { 

			canvas->DrawPixel(j, y-i, brush);
		}
	}

}

void Diamond::Draw(Canvas* canvas) {
	for (int i = 0; i < height; i++) {
		for (int j = x - i; j <= x + i; j++) {

			canvas->DrawPixel(j, i + y, brush);
		}
	}
	for (int i = height ; i >= 0; i--) {
		for (int j = x - i; j <= x + i; j++) {

			canvas->DrawPixel(j, y + 2*height - i, brush);
		}
	}


	
}
void Rectangle::print() {
	cout << "rect " << x << " " << y << " " << width << " " << height << " "<< brush << endl;

}
void UpTriangle::print() {
	cout << "tri_up " << x << " " << y <<  " " << height << " " << brush << endl;

}
void DownTriangle::print() {
	cout << "tri_up " << x << " " << y << " " << height << " " << brush << endl;
}
void Diamond::print() {
	cout << "diamond " << x << " " << y  << " " << height << " " << brush << endl;
}

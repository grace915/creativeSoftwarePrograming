#include <iostream>
#include <vector>

using namespace std;

class Canvas {
public:
	Canvas(int row, int col);
	~Canvas();

	void Resize(int w, int h);

	bool DrawPixel(int x, int y, char brush);

	void Print();

	void Clear();
private:
	int row, col;
	char** cv;
};


class Shape {
public:
	virtual ~Shape() {}
	virtual void Draw(Canvas* canvas);
	virtual void print() {}
protected:
	
	int height;
	int width;
	int x, y;
	char brush;

};

class Rectangle : public Shape { 
public:
	Rectangle(int x, int y, int width, int height, char brush);
	virtual void Draw(Canvas* canvas);
	virtual void print();
};
class UpTriangle : public Shape {
public:
	UpTriangle(int x, int y, int height, char brush);
	virtual void Draw(Canvas* canvas);
	virtual void print();
};
class DownTriangle : public Shape {
public:
	DownTriangle(int x, int y, int height, char brush);
	virtual void Draw(Canvas* canvas);
	virtual void print();
};
class Diamond : public Shape { 
public:
	Diamond(int x, int y, int r, char brush);
	virtual void Draw(Canvas* canvas);
	virtual void print();
};

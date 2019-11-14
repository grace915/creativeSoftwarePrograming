#include "shapes.h"

int main() {
	double width, height;
	double width2, height2;

	vector<Shape*> shapes;

	cin >> width >> height;
	cin >> width2 >> height2;

	shapes.push_back(new Triangle(width, height));
	shapes.push_back(new Rectangle(width2, height2));

	for (int i = 0; i < shapes.size(); i++) {
		cout<<shapes[i]->getArea()<<endl;
		

	}
	for (int i = 0; i < shapes.size(); i++) {
		delete shapes[i];
	}
	shapes.clear();
	return 0;
}

#include "print_shape.h"

int main() {
	char check;
	vector<Shape*> shapes;
	while (1) {
		cin >> check;
		if (check == 'c') {
			double r;
			cin >> r;
			shapes.push_back(new Circle(r));
		}
		else if (check == 'r') {
			double w, h;
			cin >> w >> h;
			shapes.push_back(new Rectangle(w, h));
		}
		else if (check == '0') {
			break;

		}

	}

	for (int i = 0; i < shapes.size(); i++) {
		cout << shapes[i]->getTypeString() << ", "
			<< shapes[i]->getArea() << ", "
			<< shapes[i]->getPerimeter() << endl;
	}
	for (int i = 0; i < shapes.size(); i++)
		delete shapes[i];
	shapes.clear();
}


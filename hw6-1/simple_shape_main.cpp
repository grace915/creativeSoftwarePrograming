#include <iostream>
#include "simple_shape.h"
#define Pi 3.14
using namespace std;




int main(void) {
	char c;
	float x, y, r;
	float x1, y1, x2, y2;

	float area;
	float size;

	while(1){
	cout<<"shape?"<<endl;
	cin >> c;

	if (c == 'C'|| c == 'c') {
		
		cin >> x >> y >> r;

		Circle c( x, y, r);
		cout << "area : ";
		c.circle_area(r);
		cout << ", perimeter: ";
		c.circle_size(r);
		cout<<endl;
		cout<<endl;
	

	}

	else if(c == 'R'||c == 'r'){
		cin >>x1 >> y1 >> x2 >> y2;

		Rectangle rectangle( x1, y1, x2, y2);
		cout << "area : ";
		rectangle.rec_area(x1, y1, x2, y2);
		cout << ", perimeter: ";
		rectangle.rec_size(x1, y1, x2, y2);
		cout<<endl;
		cout<<endl;

	}
	else
		break;
	}
	return 0;

	}

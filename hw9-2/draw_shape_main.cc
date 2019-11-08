#include "draw_shape.h"

int main() {
	vector<Shape*> shapes;

	int row, col;
	cin >> row >> col;
	Canvas canvas(row, col);
	
	canvas.Print();



	while (true) {
		string tok;
		cin >> tok;
		if (tok == "add") {
			string type;
			cin >> type;
			if (type == "rect") {
				int x, y;
				int width, height;
				char brush;

				cin >> x >> y >> width >> height >> brush;
				shapes.push_back(new Rectangle(x, y, width, height, brush));


			}
			else if (type == "tri_up") {
				int x, y;
				int height;
				char brush;

				cin >> x >> y >> height >> brush;
				shapes.push_back(new UpTriangle(x, y, height, brush));


				
			}
			else if (type == "tri_down") {
				int x, y;
				int height;
				char brush;

				cin >> x >> y >> height >> brush;
				shapes.push_back(new DownTriangle(x, y, height, brush));

				
			}
			else if (type == "diamond") {
				int x, y;
				int r;
				char brush;

				cin >> x >> y >> r >> brush;
				shapes.push_back(new Diamond(x,y,r,brush));

			}
			else continue;
		}
		else if (tok == "draw") {
			canvas.Clear();
			for (int i = 0; i < shapes.size(); ++i) shapes[i]->Draw(&canvas);
			canvas.Print();
		}
		else if (tok == "delete") {
			int d;
			vector<Shape*>::iterator it = shapes.begin();
			cin >> d;
			it += d;
			if(d<shapes.size())
				shapes.erase(it);
		}
		else if (tok == "dump") {
			for (int i = 0; i < shapes.size(); i++) {
				cout << i << " ";
				shapes[i]->print();
			}

		}
		else if (tok == "resize") {
			
			int row, col;
			cin >> row >> col;
			canvas.Resize(row, col);
		}
		else {
			break;
		}
	}

	for (int i = 0; i < shapes.size(); ++i) delete shapes[i];
	shapes.clear();
	return 0;
	
}

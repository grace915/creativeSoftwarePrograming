#include <iostream>
using namespace std;

class Point{
private:
	int x, y;
	static int count;
public:
	Point(int a = 0, int b = 0):x(a),y(b){count++;}
	~Point(){cout<<x<<" " <<y<<endl;}
	static int GetCount(){return count;}
};

int Point::count = 0;

int main(){

cout<< Point::GetCount()<<endl;
Point P1(1,2);
cout<<Point::GetCount()<<endl;
Point P2 = Point(3,4);
cout<<P2.GetCount()<<endl;
return 0;

}


#include <iostream>
using namespace std;

class Point{
private:
int x, y;

public:
Point(int a, int b) : x(a) , y(b){}
Point operator++(){Point temp = (*this);++x;++y; return temp;}
void Print(){cout<<x<<" " <<y<<endl;}

};
int main(){
Point p1(2,2);
p1.Print();
Point p2 = ++p1;
p1.Print();
p2.Print();

return 0;
}

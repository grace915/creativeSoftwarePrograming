#include <stdio.h>
#include <iostream>
using namespace std;

typedef struct
{
	int xpos;
	int ypos;
}Point;
Point getScale2xPoint(const Point* p){
	Point temp;
	int x;
	int y;
	x = p->xpos * 2;
	y = p->ypos * 2;
	temp.xpos = x;
	temp.ypos = y;

	return temp;	

}

void swapPoint(Point& p1, Point& p2){
	Point temp;
	temp.xpos = p1.xpos;
	temp.ypos = p1.ypos;
	p1.xpos = p2.xpos;
	p1.ypos = p2.ypos;
	p2.xpos = temp.xpos;
	p2.ypos = temp.ypos;


}

int main(void){
	Point p1;
	Point p2;

	scanf("%d",&p1.xpos);
	scanf("%d",&p1.ypos);
	p2 = getScale2xPoint(&p1);
	
	cout<< "Calling getScale 2xPoint()"<<endl;
	cout<<p1.xpos<<" " <<p1.ypos<<endl;
	cout<<p2.xpos<<" " <<p2.ypos<<endl;
	
	swapPoint(p1,p2);
	cout<<"Calling swapPoint()"<<endl;
	cout<<p1.xpos<<" " <<p1.ypos<<endl;
	cout<<p2.xpos<<" " <<p2.ypos<<endl;

}

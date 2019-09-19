#include <iostream>
#include<stdio.h>
using namespace std;

typedef struct
{
	int xpos;
	int ypos;
}Point;

void scale2x(Point* pp){
	pp->xpos *=2;
	pp->ypos *=2;
}

int main(void){
	Point point[3];
	for(int i = 0; i<3; i++){
		cin>>point[i].xpos;
		cin>>point[i].ypos;
	}
	for(int i = 0 ; i<3; i++){
		scale2x(point+i);
	}
	for(int i = 0; i<3; i++){
		cout<<"["<<i<<"]"<<point[i].xpos<<" "<<point[i].ypos<<endl;
	}
}

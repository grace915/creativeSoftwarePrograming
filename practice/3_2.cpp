#include <stdio.h>

typedef struct
{
	int x;
	int y;
}Point;

Point get(const Point* p)
{
	Point pn;
	pn.x = p->x;
	pn.y = p->y;
	pn.x *= 2;
	pn.y *= 2;
	return pn;
}
int main(){

	Point p1 = {1,2};
	Point p2 = get(&p1);
	
	printf("%d %d\n",p1.x,p1.y);
	printf("%d %d\n", p2.x,p2.y);
}


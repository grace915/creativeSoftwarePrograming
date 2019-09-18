
#include <iostream>
#include <stdio.h>
using namespace std;

void rotateLeft(int* pa, int* pb, int* pc){
	int num = 0;
	num = *pa;
	*pa = *pb;
	*pb = *pc;
	*pc = num;


}

void rotateRight(int* pa, int* pb, int*pc){
	int num = 0;
	num = *pc;
	*pc = *pb;
	*pb = *pa;
	*pa = num;

}

int main(void){
	int a= 10;
	int b = 20;
	int c = 30;
	int num= 0;

	

	
	while(1){
	cout<<a<<":"<<b<<":"<<c<<endl;
	scanf("%d",&num);
	if(num == 1)
		rotateLeft(&a, &b, &c);
		
	else if(num == 2)
		rotateRight(&a, &b, &c);
		
	else
		return 0;
	}



}

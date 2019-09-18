#include<iostream>
#include<stdio.h>

void getSumDiff(int a, int b, int *pSum, int *pDiff){
	*pSum = a + b;
	*pDiff = a - b;

}
int main(void){

	int pSum;
	int pDiff;
	int num1;
	int num2;
	
	scanf("%d",&num1);
	scanf("%d",&num2);
	
	getSumDiff(num1, num2, &pSum, &pDiff);
	
	std::cout<<"Sum: "<<pSum<<std::endl;
	std::cout<<"Diff: "<<pDiff<<std::endl;


}

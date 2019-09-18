#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <iostream>

void square(double *ptr){
	*ptr *= *ptr;
	std::cout<<*ptr<<std::endl;
}

int main(void){
	double dvar;
	scanf("%lf",&dvar);
	square(&dvar);
}

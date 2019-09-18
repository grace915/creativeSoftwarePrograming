
#define _CRT_SECURE_NO_WAWRNINGS
#include<iostream>
#include <stdio.h>
using namespace std;

void square(double* ptr){
	*ptr *= *ptr;
	cout << *ptr << endl;
}

int main(void){

	double dvr;
	scanf("%lf", &dvr);
	square(&dvr);

}


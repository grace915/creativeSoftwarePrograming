#include <iostream>
#include <stdio.h>
using namespace std;

int main(void){

	int arr[3][2];
	int i,j;
	int sum1 = 0;
	int sum2 = 0;

	for(i = 0; i <3; i++){
		for(j = 0; j <2; j++){
			scanf("%d",&arr[i][j]);
		}
	}
	for(i = 0; i<3; i++){
		for(j = 0; j<2; j++){
			printf("%d",arr[i][j]);
		}
		printf("\n");
	}
	for(i =0; i<3; i++){
		sum1 += arr[i][0];
		sum2 += arr[i][1];
	}
	
	cout<<"1번째 열의 숫자의 합: "<<sum1<<endl;
	cout<<"2번째 열의 숫자의 합: "<<sum2<<endl;	
}

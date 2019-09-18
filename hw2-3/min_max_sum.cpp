#include <iostream>
#include <stdio.h>
#include <algorithm>
using namespace std;

int main(void){
	int arr[5];
	int max;
	int min;
	int sum= 0;	
	for(int i= 0;i<5; i++){
		scanf("%d",arr+ i);
	}
	sort(arr,arr+5);
	min = arr[0];
	max = arr[4];
	sum = min + max;
	cout<<"min: "<<min<<endl;
	cout<<"max: "<<max<<endl;
	cout<<"sum: "<<sum<<endl;
	return 0;
}



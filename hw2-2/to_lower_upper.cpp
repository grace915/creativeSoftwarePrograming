#include<iostream>
#include <stdio.h>
#include <cstring>

int main(void){
	char str[20];
	int i;

	scanf("%s",str);
	for(i = 0; i<strlen(str);i++){
		if(str[i]>=65 &&str[i]<=90)
			str[i] +=32;
		else
			str[i] -=32;
	}
	std::cout<<str<<std::endl;

}


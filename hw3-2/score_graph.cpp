#include <iostream>
#include <stdio.h>
using namespace std;

typedef struct
{
	char name[7];
	int score;
}Person;

void printScoreStars(Person* persons, int len){
	
	for(int i = 0; i<len; i++){
		cout<<persons[i].name;
		for(int j = 0; j <person[i].score/5; j++)
			cout<<"*";
		
		cout<<endl;
	}

}

int main(void){
	person list[3];
	for(int i=0;i<3;i++){
		scanf("%s %d",&list[i].name,&list[i].score);
	}
	printScoreStars(list,3); 

}

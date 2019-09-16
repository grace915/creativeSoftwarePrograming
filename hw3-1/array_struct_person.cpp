#include <iostream>
using namespace std;

typedef struct{
	char name[10];
	int age;
}Person;

int main(void){
	Person person[3];
	for(int i = 0; i <3; i++){
		cin>>person[i].name;
		cin>>person[i].age;
	}
	for(int i = 0; i<3; i++){
		cout<<"name : "<<person[i].name<<", age : "<< person[i].age<<endl;
		
	}

}

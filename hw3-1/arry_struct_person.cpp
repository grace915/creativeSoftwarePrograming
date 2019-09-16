#include <iostream>
using namespace std;

typedef struct
{
	char[10] name;
	int age;
}Person;

int main(){
	Person person[3];
	for(int i = 0; i <3 ; i++){
		cin>>person[i].name;
		cin>>person[i].age;
	}

	for(int i= 0; i <3 ; i++){
		cout<<"Name: "<<person[i].name<<", Age: "<<person[i].age<<endl;
}

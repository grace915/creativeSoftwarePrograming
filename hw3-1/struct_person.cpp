#include <iostream>
using namespace std;

typedef struct
{
	char name[10];
	int age;
} Person;

int main(void){
	Person person1;
	cin>>person1.name;
	cin>>person1.age;
	cout<<"name: "<<person1.name<<endl;
	cout<<"age: "<<person1.age<<endl; 
}

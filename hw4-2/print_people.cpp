
#include <iostream>
#include <string>
using namespace std;

struct Person{
	string name;
	int age;

};

int main(void) {
	int size;
	cin >> size;
	Person *person = new Person[size];

	for (int i = 0; i < size; i++) {
		cin >> person[i].name;
		cin >> person[i].age;
	}
	for (int i = 0; i < size; i++) {
		cout << "Name: " << person[i].name << ", Age: " << person[i].age << endl;

	
	}
	delete []person;


}

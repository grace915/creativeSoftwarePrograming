#include "print_info.h"

void printObjectTypeInfo1(A* object);
void printObjectTypeInfo2(A& object);

void printObjectTypeInfo1(A* object) {
	cout << object->getTypeInfo()<<endl;
}
void printObjectTypeInfo2(A& object) {
	cout << object.getTypeInfo()<<endl;
}

int main(void) {
	vector<A*> v;
	v.push_back(new A);
	v.push_back(new B);
	v.push_back(new C);

	for (int i = 0; i < v.size(); i++) {
		printObjectTypeInfo1(v[i]);
		printObjectTypeInfo2(*v[i]);
	}

	for(int i = 0; i<v.size();i++){
		delete v[i];
	}

}


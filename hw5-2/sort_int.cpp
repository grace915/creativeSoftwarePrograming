#include <iostream>
#include "sort.h"

using namespace std;

int main(void) {
	int num;

	cin >> num;
	int *list = new int[num];

	for (int i = 0; i < num; i++) {
		cin >> list[i];
	}
	sort(list, num);
	for (int i = 0; i < num; i++) {
		cout << list[i]<<" ";
	}
	cout<<endl;


}

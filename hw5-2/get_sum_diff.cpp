#include <iostream>
#include<stdio.h>
using namespace std;

void getSumDiff(int a, int b, int& sum, int& diff) {
	sum = a + b;
	diff = a - b;
}

int main(void) {
	int sum = 0;
	int diff = 0;

	int n1;
	int n2;

	cin >> n1 >> n2;

	getSumDiff(n1, n2, sum, diff);

	cout << "Sum : " << sum << endl;
	cout << "Diff : " << diff << endl;


}

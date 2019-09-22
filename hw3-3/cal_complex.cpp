#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstdio>

using namespace std;

struct Complex {

	double comp[2];
};

void printComplex(Complex com) {
	printf("%f + %fi\n", com.comp[0], com.comp[1]);

}
void printAddComp(Complex com1, Complex com2) {
	Complex com;
	com.comp[0] = com1.comp[0] + com2.comp[0];
	com.comp[1] = com1.comp[1] + com2.comp[1];
	printComplex(com);
}
void printMulComp(Complex com1, Complex com2) {
	Complex com;

	com.comp[0] = com1.comp[0] * com2.comp[0] - com1.comp[1] * com2.comp[1];
	com.comp[1] = com1.comp[0] * com2.comp[1] + com1.comp[1] * com2.comp[0];
	printComplex(com);
}

int main(void) {
	Complex c[2];
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 2; j++) {
			cin >> c[i].comp[j];
		}
	}
	printf("복소수 1: \n");
	printComplex(c[0]);
	printf("복소수 2:\n");
	printComplex(c[1]);
	printf("복소수 3:\n");
	printAddComp(c[0], c[1]);
	printf("복소수 4:\n");
	printMulComp(c[0], c[1]);


}

#include <iostream>
#include <cstdlib>
#include "magic_square.h"

using namespace std;

int main(int argc, char* argv[]) {


	int size = atoi( argv[1]);

	if (size < 3|| size % 2 ==0)
		return 0;
	
	int** square = new int* [size] ;
	
	for (int i = 0; i < size; i++)
		square[i] = new int[size];


	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++)
			square[i][j] = 1;
	}
	
	magic_square(square, size);


	
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			cout << square[i][j] << " ";
		}
		cout << endl;
	}

	
	delete[] square;
}



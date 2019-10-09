
#include <iostream>
using namespace std;

void magic_square(int** square, int size) {
	

	///1을 중간에, 오른쪽 위로 올리기, size의 배수만큼에서 문제 -> 바로전꺼 밑으로 내리기
	for (int i = 0,  j = size / 2, num = 1; num<=size*size; num++) {
		square[i][j] = num;
		if (num % size == 0)
			i = i + 1;
		else {
			i = i - 1;
			j = j + 1;}
		
		if (i < 0)
			i = size - 1;
		if (j > size - 1)
			j = 0;
		

	}
}

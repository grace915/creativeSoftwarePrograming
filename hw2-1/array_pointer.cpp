
#include <iostream>
using namespace std;

int main(void){
	double ar[5] = {1.1, 2.2, 3.3, 4.4, 5.5};
	double* parr = ar;
	
	for(int i = 0; i<5; i++){
	*(parr + i) *=2;
	}
	for(int i = 0; i<5; i++){
	cout<<*(parr + i)<<endl;
	}
}

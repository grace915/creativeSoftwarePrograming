#include <iostream>
using namespace std;

int power(int x){
return (x*x);
}
int power(int x, int y=2){
int i;
int result = 1;
for(i = 0; i<y;i++)
	result *=x;
return result;

}


int main(void){

cout<< power(2)<<endl;
cout<<power(2,3)<<endl;
return 0;

}


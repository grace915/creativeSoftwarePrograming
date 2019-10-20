#include <iostream>
#include <cstdlib>
using namespace std;

double square(double a){

	return a*a;
}
float square(float a){

	return a+ a;
}


int main(){
	int a = 123;
	int b = 0123;
	cout<<a<<endl;
	cout<<b<<endl;

	int c;
	cin>>c;
	if(c == 1? true:false)
		cout<<c<<endl;

	
	cout<<square(5)<<endl;
		

}

#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;



int main(){
	int a = 123;
	int b = 0123;
	cout<<a<<endl;
	cout<<b<<endl;

	
	

	string line;
	cout<<"write a line"<<endl;
	while(cin>>line && line!="q"){
		cout<<line[0]<<endl;
		cout<<line<<"---"<<endl;
	}

	char c[20];
	cin.getline(c,20,':');
	cout<<c<<endl;
	cout<< (char)cin.get()<<endl;
	cout<< (char)cin.get()<<endl;
	
	
}

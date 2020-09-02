#include <cstring>
#include <iostream>
using namespace std;

class MyString{
private:
	int len;
	char *str;
public:
	MyString(const char *s = ""){
	len = strlen(s);
	str = new char[len + 1];
	strcpy(str, s);
	}
	MyString(const MyString &s){
	len  = s.len;
	str = new char[len + 1];
	strcpy(str, s.str);
	}

	~MyString(){ delete[] str;}
	void Print(){
	cout<<str<<endl;
	}
};

MyString GetString(void){
MyString str("HY");
return str;
}

int main(){
	MyString s2 = GetString();
	s2.Print();
	MyString m1 = "Hanyang";
	MyString m2 = m1;
	m1.Print();
	m2.Print();
	
	return 0;
}

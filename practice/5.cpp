
#include<iostream>
using namespace std;

int main(){


        int a = 1, b = 2;
        int & r = a;
        r = b;
        cout<<a<<" " << b << " " <<r << endl;
        r = 100;
        cout << a << " " << b << " " << r << endl;
}
                                                                       
                                                                          
                                                                          
                                                                                  

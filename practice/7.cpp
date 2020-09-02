#include <iostream>
#include <vector>
using namespace std;

class Student;
int main(){
vector<Student*> vp(10, NULL);
for(int i = 0; i<vp.size();++i){
vp[i] = new Student;
}

for(int i = 0 ; i<vp.size(); ++i)
delete vp[i];

vp.clear();
}

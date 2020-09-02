#include <iostream>
using namespace std;
class Person { 
public: 
 virtual void talk() { 
 cout << "I'm a person" << endl; }
 };

class Student : public Person { 
public:
 virtual void talk() {
 cout << "I'm a student" << endl;
 }
 void study() {
 cout << "study" << endl; }
 };

class CSStudent : public Student { 
public:
 virtual void talk() {
 cout << "I'm a CS student" << endl;
 }
 void writeCode() {
 cout << "writeCode" << endl; }
 };


int main() {
 CSStudent csst;
 csst.talk(); //"I'm a CS student"
 Person& asPerson = csst; asPerson.talk(); //"I'm a CS student"
 return 0;
}

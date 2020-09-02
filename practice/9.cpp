#include <iostream>
 using namespace std;
class Person {
 public: void talk() { cout << "talk" << endl; }
 };

class Student : public Person {
 public: void study() { cout << "study" << endl; }
 };

class CSStudent : public Student {
 public: void writeCode() { cout << "writeCode" << endl; }
 };

int main() {
 Person* p1 = new Person;
 Person* p2 = new Student;
 Person* p3 = new CSStudent;
// Student* s1 = new Person; // error
 Student* s2 = new Student;
 Student* s3 = new CSStudent;
 delete p1;
 delete p2;
 delete p3;
// delete s1;
 delete s2;
 delete s3;
 return 0;
}

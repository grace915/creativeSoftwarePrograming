#include <iostream>

class A {
 public: void APublic() {}
 protected: void AProtected() {}
 private: void APrivate() {} };
 // Protected inheritance.


 class BA : protected A {
 public: void BAPublic() {
 APublic(); // OK.
 AProtected(); // OK.
 APrivate(); // Error.
 }
 void BAPublic2() {}
 protected:
 void BAProtected() { }
 private:
 void BAPrivate() { }
 };

class Client : public BA {
 void Function() {
 APublic(); // OK.
 AProtected(); // OK.
 APrivate(); // Error.
 BAPublic(); // Error.
 BAPublic2(); // OK.
 BAProtected(); // OK.
 BAPrivate(); // Error.
} };
// Main routine.
int main() {
 BA ba;
 ba.APublic(); // Error.
 ba.BAPublic(); // Error.
 ba.BAPublic2(); // OK.
}

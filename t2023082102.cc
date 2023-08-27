//
// Created by ASUS on 2023/8/21.
//
// C++ program to demonstrate
// static_cast in case of
// private inheritance
#include <iostream>

using namespace std;

class Cat {

};

class Base {
};

class Derived : public Base {
// Inherited private/protected
// not public
};

// Driver code
int main() {
    Derived d1;
    Base x = d1;

// Implicit type cast allowed
    Base *b1 = (Base *) (&d1);

// static_cast not allowed
    Base *b2 = static_cast<Base *>(&d1);
    Derived *d2 = static_cast<Derived *>(&x);
    void *vv = &x;
    Cat *b = static_cast<Cat *>(vv);
    return 0;
}

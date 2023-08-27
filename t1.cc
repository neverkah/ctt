//
// Created by ASUS on 2023/6/24.
//
#include <cstdio>
#include "iostream"

using namespace std;

int main() {
    int x = 222222;
    char c = 'x';


//    cout << &x << endl;
    cout << &c << endl;

    printf("the %c address is %p\n", c, &c);

//    char *cp = &c;


//    cout << static_cast<void *>( &cp) << endl;
    cout << "变量c的地址: " << static_cast<void *>(&c) << endl;
    cout << "fuck this world" << endl;
    cout << static_cast<void *>(&c) << endl;
    cout << hex << x << endl;
    return 0;
}

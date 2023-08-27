//
// Created by ASUS on 2023/8/19.
//
// C++ Program to demonstrate
// static_cast char* to int*
#include <iostream>

using namespace std;

// Driver code
int main() {
    int a = 10;
    char c = 'a';

    size_t t = sizeof(int);
    cout << t << endl;
// Pass at compile time,
// may fail at run time
    int *q = (int *) &c;
    char xxx = 1292111;
    cout << q << endl;
    cout << *q << endl;
    return 0;
}
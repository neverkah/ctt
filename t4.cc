//
// Created by ASUS on 2023/6/24.
//
#include "iostream"

using namespace std;

int main() {
    char c_arr[3];
    c_arr[0] = 'x';
    c_arr[1] = 'x';
    c_arr[2] = 'm';
    printf("%p\n", c_arr);
    printf("%p\n", &c_arr);


    cout << sizeof(c_arr) << endl;

    int x = 3;
    int *xp = &x;
    cout << sizeof(xp) << endl;
    printf("%p\n", xp);
    printf("%p\n", &xp);
}
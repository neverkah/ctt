//
// Created by ASUS on 2023/6/24.
//

#include "iostream"

using namespace std;

int main() {
    char c = 'd';

    char c_arr[3];
    c_arr[0] = c;
    c_arr[1] = 'x';
    c_arr[2] = 'm';
    string_view sv = string_view(c_arr);
    cout << c_arr << endl;
    cout << sv << endl;
    cout << &sv << endl;
    cout << &c_arr << endl;
    printf("c_arr %p \n", c_arr);
    printf("ddd   %p \n", &c_arr);
    char *xp = c_arr;
    printf("xp %p \n", xp);
    cout << c_arr[1] << endl;
    printf("%p\n", c_arr);
    printf("%p\n", c_arr + 3);
    cout << c << endl;
}
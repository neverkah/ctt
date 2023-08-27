//
// Created by ASUS on 2023/6/24.
//
#include "iostream"

using namespace std;

int main() {
    string s = "abcdef";
    int x = 333;
    cout << &x << endl;
    cout << &s << endl;
    for (int i = 0; i < s.length(); ++i) {
        cout << s[i] << endl;
    }


}
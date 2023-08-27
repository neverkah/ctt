//
// Created by ASUS on 2023/6/24.
//
#include "iostream"

using namespace std;

int main() {
//    const string s = "abc";
//    const char *sp = s.c_str();
//    cout << sp << endl;

    string s = "abcdefgh";

    string_view sv = string_view(&s[0], 4);

    cout << &sv << endl;
    cout << &s << endl;
}
//
// Created by ASUS on 2023/6/25.
//
#include <iostream>

using namespace std;

int main() {
    std::string s = "abc";
    printf("%p\n", &s);
    printf("%p\n", s.c_str());
    const char *cp = s.c_str();
    printf("%p\n", cp);
    printf("%p\n", &cp);
    cout << &s << endl;

}
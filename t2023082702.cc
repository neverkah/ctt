//
// Created by ASUS on 2023/8/27.
//
#include "iostream"

void zzz(const std::string &basicString);

int main() {
    std::string s = "abc";
    zzz(s);
    s.append("xyz");
    zzz(s);
    const std::string &x = s;
    s.append("xyz");
    std::cout << x << std::endl;
    std::cout << &x << std::endl;
    std::cout << &s << std::endl;

    char c = 'x';
    const char *cp = &c;
    c = 'z';
    std::cout << *cp << std::endl;
}

void zzz(const std::string &ss) {
    std::cout << "zzz-- " << ss << std::endl;
}

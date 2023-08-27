//
// Created by ASUS on 2023/8/19.
//
#include "stdio.h"
#include "iostream"

typedef unsigned short int sa_family_t;

void zzz(std::string &basicString);

#define    __SOCKADDR_COMMON(sa_prefix) \
  sa_family_t sa_prefix##family
#define PSQR(X) printf("The square of " #X " is %d.\n",((X)*(X)))

int main() {
    __SOCKADDR_COMMON(xxx) = 13;
    std::cout << xxxfamily << std::endl;
    PSQR(8);
    int y = 5;
    PSQR(y);
    PSQR(2 + 4);
    char __ss_padding[3];
    __ss_padding[0] = 'a';
    __ss_padding[1] = 'x';
    __ss_padding[2] = 'y';
    for (const auto &item: __ss_padding) {
        const char *mm = &item;
        std::cout << mm << std::endl;
        std::cout << &item << std::endl;
    }
    std::string s = "abcdef";
    zzz(s);
    std::cout << s << std::endl;
}


void zzz(std::string &f) {

    f.append("xxxx");
}
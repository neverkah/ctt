//
// Created by ASUS on 2023/7/5.
//
#include "iostream"
#include "limits"

using namespace std;

int main() {
    u_int64_t t = 3 * (1UL << 32);

    cout << ((t & 0x00000000FFFFFFFF)) << endl;

    bool x = false;
    char y = x;
    int z = y;
    cout << z << endl;
}

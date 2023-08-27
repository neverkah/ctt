//
// Created by ASUS on 2023/6/24.
//
#include "iostream"

using namespace std;

int main() {

    int x = 6;
    int *xp = &x;
    int **xpp = &xp;
    int ***xppp = &xpp;
    int ****xpppp = &xppp;

    printf("%d\n", *xp);
    printf("%p\n", &x);
    cout << xp << endl;
    cout << *xpp << endl;
    cout << xpp << endl;
    cout << xppp << endl;
    cout << xppp << endl;
    cout << *xpppp << endl;
}
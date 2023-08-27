//
// Created by ASUS on 2023/7/4.
//
#include "iostream"

using namespace std;

void tests(string xxx);


int main() {
    string s = "xdfgd";
    s[3] = '\0';

    cout << s << endl;

    string xf = {&s[2], 3};
    cout << xf << endl;

    string xt = "abc";
    tests(xt);
    cout << "xt  " << xt << endl;
    cout << "&xt " << &xt;

}

void tests(string xxx) {
    xxx.append("xxxx");
    cout << xxx << endl;
    cout << "&xxx " << &xxx << endl;
}


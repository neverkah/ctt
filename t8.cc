//
// Created by ASUS on 2023/7/2.
//

#include "iostream"
#include "set"

using namespace std;

int main() {
    string s = "abcdef";

    set<int> set1 = {12, 4, 6, 3};

    cout << *set1.lower_bound(6) << endl;

    cout << *set1.upper_bound(6) << endl;


}
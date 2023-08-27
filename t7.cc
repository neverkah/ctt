//
// Created by ASUS on 2023/7/1.
//

#include "iostream"
#include "StreamReassembler.hh"

using namespace std;


int main() {
    StreamReassembler reassembler =StreamReassembler();
//    StreamReassembler *r = &reassembler;
    reassembler.dq.push_back("abc");

    string s1 = reassembler.dq.front();
    string s2 = reassembler.dq.back();
    cout << s1 << endl;
    cout << s2 << endl;
    reassembler.test();


}

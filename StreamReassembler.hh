//
// Created by ASUS on 2023/7/2.
//
#pragma once


#include <set>
#include <deque>
#include "iostream"

using namespace std;

class StreamReassembler {
public:

    struct block_node {
        size_t begin;
        std::string data;

        block_node() {}

        block_node(size_t begin, const string &data) : begin(begin), data(data) {}

        bool operator<(const block_node t) const { return this->begin < t.begin; }
    };

    set<block_node> blocks_ = {};

    deque<string> dq{};
    void test();

};

//int main() {
//    StreamReassembler sr = {};
////    StreamReassembler::block_node block1 = {4, "aabc"};
////    StreamReassembler::block_node block2 = {7, "def"};
//    StreamReassembler::block_node block3 = {9, "def"};
////    sr.blocks_.insert(block1);
////    sr.blocks_.insert(block2);
//    sr.blocks_.insert(block3);
//    auto bk = sr.blocks_.lower_bound({10, "xxx"});
//    if (bk != sr.blocks_.end()) {
//        cout << bk->begin << endl;
//    }
//
//    StreamReassembler::block_node block4;
//    cout << &block4 << "xxx" << endl;
////    sr.blocks_.insert
//}




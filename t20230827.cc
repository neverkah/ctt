//
// Created by ASUS on 2023/8/27.
//
#include <utility>

#include "iostream"

class Family {
private:

    char count{0};
public:
    std::string family_no_;

    void setFamilyNo(const std::string &family_no) {
        Family::family_no_ = family_no;
    }


    explicit Family(std::string family_no) : family_no_(std::move(family_no)) {}
};

class Cat {
private:
    std::string name_;

//    int age;
public:
    const Family &family_;

    const std::string &getName() const {
        return name_;
    }

    explicit Cat(const Family &family) : family_(family) {
    }

    Cat(std::string name, const Family &family) : name_(std::move(name)), family_(family) {}
};

void testRef(Cat s);

int main() {

    Family fff{"abc"};
    Cat cat{"a", fff};
    Cat *catp = &cat;
    std::cout << sizeof(Cat) << std::endl;
    std::cout << sizeof(Cat *) << std::endl;
    std::cout << cat.getName() << std::endl;
    cat.getName();
    testRef(cat);
    std::string familyNo = "fabc";
    Family f{familyNo};
    Cat catf = Cat{f};
    std::string newNo = "newf";
    f = Family{newNo};
    std::cout << catf.family_.family_no_ << std::endl;

    std::cout << cat.getName() << std::endl;
}

void testRef(Cat s) {


}

//
// Created by ASUS on 2023/8/27.
//
#include <utility>

#include "iostream"

class Family {
private:

    char count{0};
public:
    void setFamilyNo(const std::string &familyNo) {
        Family::familyNo = familyNo;
    }

public:
    std::string familyNo;

    explicit Family(std::string familyNo) : familyNo(std::move(familyNo)) {}
};

class Cat {
private:
    std::string name;
    char xx{};

//    int age;
public:
    const Family &family;

    const std::string &getName() const {
        return name;
    }

    explicit Cat(const Family &family) : family(family)  {
    }

    Cat(std::string name, char xx, const Family &family) : name(std::move(name)), xx(xx), family(family) {}
};

void testRef(Cat s);

int main() {

    Family fff{"abc"};
    Cat cat{"a", 2, fff};
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
    std::cout << catf.family.familyNo << std::endl;

    std::cout << cat.getName() << std::endl;
}

void testRef(Cat s) {


}

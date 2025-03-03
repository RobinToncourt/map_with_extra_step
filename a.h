#pragma once

#include <string>

class A {
public:
    A() = default;
    A(std::string a, std::string b, std::string c) :
    myNumber(a), myString(b), myBool(c)
    {}

    std::string myNumber;
    std::string myString;
    std::string myBool;
};

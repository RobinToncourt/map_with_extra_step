#include <iostream>
#include <map>

#include "decoder.h"
#include "a.h"
#include "result.h"

int main() {
    std::map<std::string, std::string> map{
        {"MyNumber", "42"},
        {"MyString", "abc"},
        {"MyBool", "true"}
    };

    A a;
    Result result = Decoder::DecodeA(map, a);

    std::cout << static_cast<int>(result) << std::endl;
    std::cout << a.myNumber << "/" << a.myString << "/" << a.myBool << std::endl;
}

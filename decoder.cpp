#include "decoder.h"

#include "get_and_check.h"

Result Decoder::DecodeA(
    const std::map<std::string, std::string> &m,
    A &a
) {
    Result result = Result::AttributeValid;

    std::string myNumber;
    Result tmp = GetterChecker::GetAndCheckMyNumber(m, "MyNumber", myNumber);
    result = getWorst(result, tmp);

    std::string myString;
    tmp = GetterChecker::GetAndCheckMyString(m, "MyString", myString);
    result = getWorst(result, tmp);

    std::string myBool;
    tmp = GetterChecker::GetAndCheckMyBool(m, "MyBool", myBool);
    result = getWorst(result, tmp);

    a = A(myNumber, myString, myBool);
    return result;
}

#include <stdexcept>

#include "get_and_check.h"

Result GetterChecker::GetAndCheckMyNumber(
    const std::map<std::string, std::string> &m,
    const std::string &key,
    std::string &value
) {
    try {
        value = m.at(key);
        if (value == "42") {
            return Result::AttributeValid;
        } else {
            return Result::AttributeInvalid;
        }
    } catch (const std::out_of_range &ex) {
        return Result::AttributeNotSet;
    }
}

Result GetterChecker::GetAndCheckMyString(
    const std::map<std::string, std::string> &m,
    const std::string &key,
    std::string &str
) {
    try {
        str = m.at(key);
        if (str == "abc" || str == "xyz") {
            return Result::AttributeValid;
        } else {
            return Result::AttributeInvalid;
        }
    } catch (const std::out_of_range &ex) {
        return Result::AttributeNotSet;
    }
}

Result GetterChecker::GetAndCheckMyBool(
    const std::map<std::string, std::string> &m,
    const std::string &key,
    std::string &b) {
    try {
        b = m.at(key);
        if (b == "true") {
            return Result::AttributeValid;
        } else {
            return Result::AttributeInvalid;
        }
    } catch (const std::out_of_range &ex) {
        return Result::AttributeNotSet;
    }
}

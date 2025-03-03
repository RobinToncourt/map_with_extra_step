#ifndef get_and_check
#define get_and_check

#include <map>
#include <string>

#include "result.h"

class GetterChecker {
public:
    static Result GetAndCheckMyNumber(
        const std::map<std::string, std::string> &m,
        const std::string &key,
        std::string &value
    );

    static Result GetAndCheckMyString(
        const std::map<std::string, std::string> &m,
        const std::string &key,
        std::string &str
    );

    static Result GetAndCheckMyBool(
        const std::map<std::string, std::string> &m,
        const std::string &key,
        std::string &b
    );
};

#endif

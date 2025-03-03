#ifndef decode
#define decode

#include <map>
#include <string>

#include "result.h"
#include "a.h"

class Decoder {
public:
    static Result DecodeA(
        const std::map<std::string, std::string> &m,
        A &a
    );
};

#endif

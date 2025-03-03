#pragma once

enum class Result {
    AttributeNotSet = -2,
    AttributeInvalid = -1,
    AttributeValid = 0,
};

Result getWorst(const Result &first, const Result &second) {
    if (first < second) {
        return first;
    } else {
        return second;
    }
}

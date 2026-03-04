#ifndef A6_7_RALUCAPASCUTA7_EXCEPTIONS_H
#define A6_7_RALUCAPASCUTA7_EXCEPTIONS_H

#pragma once
#include <exception>
#include <string>
using namespace std;

class Exceptions : public exception {
protected:
    string message;

public:
    explicit Exceptions(string MessageException);
    const char* what() const noexcept override;
};

class ExceptionsValidator : public Exceptions {
public:
    explicit ExceptionsValidator(string MessageException);
};

class ExceptionsRepository : public Exceptions {
public:
    explicit ExceptionsRepository(string MessageException);
};

#endif //A6_7_RALUCAPASCUTA7_EXCEPTIONS_H

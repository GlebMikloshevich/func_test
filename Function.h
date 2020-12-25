#ifndef FUNC_TEST_FUNCTION_H
#define FUNC_TEST_FUNCTION_H
#include "iostream"

class FunctionException{};
class Function {
    virtual double minimum(double from, double to) = 0;
    virtual double maximum(double from, double to) = 0;
    virtual void printType() = 0;
    virtual double value(double x) = 0;
};


#endif //FUNC_TEST_FUNCTION_H

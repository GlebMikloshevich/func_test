#include "Function.h"
#include <math.h>
#ifndef FUNC_TEST_EXPONENTA_H
#define FUNC_TEST_EXPONENTA_H


class Exponenta : public Function{
public:
    double a, b; // y = a^x + b

    Exponenta();

    Exponenta(double argument, double bias);

    void init(double argument, double bias);

    double value(double x);

    double minimum(double from, double to);

    double maximum(double from, double to);

    void printType();


};


#endif //FUNC_TEST_EXPONENTA_H

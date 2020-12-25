#include "Function.h"
#ifndef FUNC_TEST_HYPERBOLA_H
#define FUNC_TEST_HYPERBOLA_H


class Hyperbola : public Function{
public:
    double k, b; // y = k/x + b

    Hyperbola();

    Hyperbola(double argument, double bias);

    void init(double argument, double bias);

    double value(double x);

    double minimum(double from, double to);

    double maximum(double from, double to);

    void printType();
};


#endif //FUNC_TEST_HYPERBOLA_H

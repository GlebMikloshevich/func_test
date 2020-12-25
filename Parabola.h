#include "Function.h"
#ifndef FUNC_TEST_PARABOLA_H
#define FUNC_TEST_PARABOLA_H


class Parabola : public Function{
public:
    double a, b, c;


    Parabola();
    Parabola(double a, double b, double c);

    void init(double a, double b, double c);

    double value(double x);

    double minimum(double from, double to);

    double maximum(double from, double to);

    void printType();
};


#endif //FUNC_TEST_PARABOLA_H

#include "Function.h"
#include <math.h>
#ifndef FUNC_TEST_POLYNOM_H
#define FUNC_TEST_POLYNOM_H


class Polynom:public Function {
public:
    int size;
    double* k;


    Polynom();
    Polynom(int size, double* array);

    ~Polynom();
    void init(int size, double* array);

    double value(double x);

    double minimum(double from, double to);

    double maximum(double from, double to);

    void printType();

    static double fast_pow(double x, int p);
};


#endif //FUNC_TEST_POLYNOM_H

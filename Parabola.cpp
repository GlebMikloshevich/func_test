#include "Parabola.h"
Parabola::Parabola() {}

Parabola::Parabola(double a, double b, double c) {
    this->init(a, b, c);
}

void Parabola::init(double a, double b, double c) {
    this-> a = a;
    this-> b = b;
    this-> c = c;
}

double Parabola::value(double x) {
    return this->a * x * x + this->b * x + this->c;
}

double Parabola::minimum(double from, double to) {
    if (from > to){
        throw FunctionException();
        return 0;
    }
    double xstart = -this->b/(2 * this->a);

    if (from < xstart && xstart < to && this-> a > 0){
        return this->value(xstart);
    } else {
        double left = this->value(from);
        double right = this->value(to);

        return left < right ? left : right;
    }

}

double Parabola::maximum(double from, double to) {
    if (from > to ){
        throw FunctionException();
        return 0;
    }

    double xstart = -this->b/(2 * this->a);

    if (from < xstart && xstart < to && this-> a < 0){
        return this->value(xstart);
    } else {
        double left = this->value(from);
        double right = this->value(to);

        return left > right ? left : right;
    }

}

void Parabola::printType() {
    std::cout<<"Parabola "<< this->a<<"*x^2 + "<< this->b<<"*x + "<< this->c;
}
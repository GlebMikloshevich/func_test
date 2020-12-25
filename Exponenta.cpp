#include "Exponenta.h"

Exponenta::Exponenta() {
    this->a = M_E;
    this->b = 0;
}

Exponenta::Exponenta(double argument, double bias) {
    this->init(argument, bias);
}

void Exponenta::init(double argument, double bias) {
    if (argument != 0 && argument != 1){
        this->a = argument;
        this->b = bias;
    }
}

double Exponenta::value(double x) {
    return pow(this->a, x) + this->b;
}

double Exponenta::minimum(double from, double to) {
    if (from > to){
        throw FunctionException();
        return 0;
    }
    double start = this->value(from);
    double end = this->value(to);

    return  start < end? start : end;
}

double Exponenta::maximum(double from, double to) {
    if (from > to){
        throw FunctionException();
        return 0;
    }
    double start = this->value(from);
    double end = this->value(to);

    return  start > end? start : end;
}

void Exponenta::printType() {
    std::cout<<"exponenta y = ";
    std::cout<<this->a<<"^x + "<<this->b<<'\n';
}
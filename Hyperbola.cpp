#include "Hyperbola.h"

Hyperbola::Hyperbola() {
    this->k = 1;
    this->b = 0;
}

Hyperbola::Hyperbola(double argument, double bias) {
    this->init(argument, bias);
}

void Hyperbola::init(double argument, double bias) {
    if (argument == 0){
        throw FunctionException();
    }
    this->k = argument;
    this->b = bias;
}

double Hyperbola::value(double x) {
    if (x == 0){
        throw FunctionException();
        return 0;
    }
    return this->k /x + this->b;
}

double Hyperbola::minimum(double from, double to) {
    if (from > to){
        throw FunctionException();
        return 0;
    }
    //TODO 0 + delta, delta -> 0
    double left = this->value(from);
    double right = this->value(to);

    if (left < 0 && right > 0)
        return -10000;
    else
        return  left < right? left : right;
}

double Hyperbola::maximum(double from, double to) {
    if (from > to){
        throw FunctionException();
        return 0;
    }
    double left = this->value(from);
    double right = this->value(to);
    //TODO 0 + delta, delta -> 0

    if (left < 0 && right > 0)
        return 10000;
    else
        return  left > right ? left : right;

}

void Hyperbola::printType() {
    std::cout<<"hyperbola y = ";
    std::cout<<this->k<<" / x ";
    if (this-> b >= 0)
        std::cout<<"+ ";
    std::cout<<this->b<<'\n';
}
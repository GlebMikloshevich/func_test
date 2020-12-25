#include "Polynom.h"

Polynom::Polynom() {}

Polynom::Polynom(int size, double *array) {
    this->init(size, array);
}
Polynom::~Polynom() {
    delete[] this->k;
}
void Polynom::init(int size, double *array) {
    this->size = size;
    this->k = new double[size];

    for(int i = 0; i < size; i++){
        this->k[i] = array[i];
    }
}

double Polynom::value(double x) {
    double ans = 0;
    double power = 0;
    for (int i = 0; i < this->size; i++){
        ans += std::pow(this->k[size-i-1], i);
        //ans += this->fast_pow(this->k[size-i-1], i);
    }
    return ans;
}

double Polynom::minimum(double from, double to) {
    double delta = 0.05;
    double cur_min = this->value(from);
    double cur_value;
    double i = from;
    while (i < to){
        cur_value = this->value(i);
        cur_min = cur_min < cur_value ? cur_min : cur_value;
        i += delta;
    }
}

double Polynom::maximum(double from, double to) {
    double delta = 0.05;
    double cur_max = this->value(from);
    double cur_value;
    double i = from;
    while (i < to){
        cur_value = this->value(i);
        //std::cout<<i<<' '<<cur_value<<'\n';
        cur_max = cur_max > cur_value ? cur_max : cur_value;
        i += delta;
    }
}

void Polynom::printType() {
    std::cout<<"Polynom: ";
    for (int i = 0; i < this->size; i++){
        std::cout<<k[i]<<'^'<<size-i-1;
        if (i != this->size-1 && k[i]>=0)
            std::cout<<" + ";
    }

}

double Polynom::fast_pow(double x, int p) {
    if (p == 0)
        return 1;
    if (p == 1)
        return x;
    if (p % 2 == 0){
        return fast_pow(x, p/2) * fast_pow(x, p/2);
    } else {
        return x * fast_pow(x, p-1);
    }
}
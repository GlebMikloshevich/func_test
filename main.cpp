#include <iostream>
#include "Parabola.h"
#include "Hyperbola.h"
#include "Exponenta.h"
#include "Polynom.h"

int main() {
    Parabola p(2, 1, 1);
    p.printType();
    std::cout<<'\n'<<p.value(2);
    std::cout<<'\n'<<p.maximum(0, 12);
    std::cout<<'\n'<<p.minimum(0, 12);
    std::cout<<"\n----\n";

    Hyperbola h(1, 1);
    h.printType();
    std::cout<<'\n'<<h.value(2);
    std::cout<<'\n'<<h.maximum(1, 12);
    std::cout<<'\n'<<h.minimum(1, 12);
    std::cout<<"\n----\n";

    Exponenta e(2, 1);
    e.printType();
    std::cout<<'\n'<<e.value(2);
    std::cout<<'\n'<<e.maximum(1, 12);
    std::cout<<'\n'<<e.minimum(0, 12);
    std::cout<<"\n----\n";


    double* arr = new double[3];
    arr[0] = 2;
    arr[1] = 2;
    arr[2] = 2;
    Polynom pol(3, arr);
    pol.printType();
    std::cout<<'\n'<<pol.value(2);
    //doesn't work
    //std::cout<<'\n'<<pol.maximum(1, 3);
    //std::cout<<'\n'<<pol.minimum(1, 3);
}

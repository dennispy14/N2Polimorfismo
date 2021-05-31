

#include <iostream>
#include "Circulo.h"
#include "Retangulo.h"
#include "Triangulo.h"
int main()
{
    Circulo c;
    Retangulo r;
    Triangulo t;
    cout << "Circulo \n";
    c.calcularArea();
    cout << "Retangulo \n";
    r.calcularArea();
    cout << "\nTriangulo \n";
    t.calcularArea();
}


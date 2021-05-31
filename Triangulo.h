#pragma once
#include "formageometrica.h"
class Triangulo: public formageometrica
{
public:
	void calcularArea();
private:
	float base;
	float altura;
	float area;
};


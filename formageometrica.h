#pragma once
#include <iostream>
using namespace std;
#ifndef formageometrica_hpp
#define formageometrica_hpp


class formageometrica
{
public:
	virtual void calcularArea() = 0;
protected:
	float area;
};
#endif // !formageometrica_hpp;

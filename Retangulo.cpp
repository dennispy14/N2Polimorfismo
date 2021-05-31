#include "Retangulo.h"

void Retangulo::calcularArea()
{
	cout << "\nDigite o valor da base: ";
	cin >> base;
	cout << "\nDigite o valor da altura: ";
	cin >> altura;
	area = base * altura;
	cout << "\nValor da Area do Retangulo:" << area;
}
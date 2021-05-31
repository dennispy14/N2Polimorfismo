#include "Triangulo.h"
void Triangulo::calcularArea()
{
	cout << "\nDigite o valor da base: ";
	cin >> base;
	cout << "\nDigite o valor da altura: ";
	cin >> altura;
	area = (base * altura) / 2;
	cout << "\nValor da area do triangulo: " << area;
}
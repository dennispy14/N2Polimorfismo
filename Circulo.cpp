#include "Circulo.h"
void Circulo::calcularArea()
{
	cout << "\nDigite o valor do Raio: ";
	cin >> raio;
	area = 3.14 * (raio * raio);
	cout << "\nO valor da area do circulo: " << area << endl;

}
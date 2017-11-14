#include <iostream>
#include "Punto.h"
using namespace std;

class Circulo
{
private:
	static int instancias;
	Punto *centro;
	double radio;
public:
	Circulo()
	{
		instancias++;
		centro = new Punto();
		radio = 1.0;
	}

	Circulo(double cx, double cy)
	{
		instancias++;
		centro = new Punto(cx, cy);
		radio = 7.0;
	}

	Circulo(double cx, double cy, double radio)
	{
		instancias++;
		centro = new Punto(cx, cy);
		this->radio = radio;
	}

	Circulo(Circulo &Objeto)
	{
		instancias++;
		centro = new Punto(Objeto.centro->DarX(), Objeto.centro->DarY);
		radio = 7.0;
	}

	void Ver()
	{
		cout << "\nObjetos " << instancias; 
		centro->Ver();
		cout << "y radio " << radio;
	}

	double Perimetro()
	{
		return 2 * 3.1415 * radio * radio;
	}

	double Area()
	{
		return 3.1415 * radio * radio;
	}

	~Circulo()
	{
		cout << "\n\nDestruyendo Objeto "; Ver();
		instancias--;
	}
};
#include <iostream>

using namespace std;

class Esfera
{
public:
	
	Esfera(double radio)
	{
		r = 0;
		volumen = 0;
		r = radio;
	}

	Esfera()
	{
		r = 0;
		volumen = 0;
	}

	void Asignar()
	{
		cout << "Dame el radio ";
		cin >> r;
	}

	double DarRadio()
	{
		return r;
	}
	double Volumen()
	{
		volumen = (double)4 / 3 * 3.1415 * (r*r*r);
		return volumen;
	}
private:
	double volumen;
	double r;

};
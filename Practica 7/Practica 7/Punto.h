#include <iostream>

using namespace std;

class Punto
{
private:
	double x, y;

public:
	
	Punto()
	{
		x = y = 1.0;
	}

	Punto(double x, double cy)
	{
		this->x = x;
		y = cy;
	}

	Punto(Punto &Objeto)
	{
		x = Objeto.x;
		y = Objeto.y; 
	}

	void Ver()
	{
		cout << "Circulo con origen en (" << x << ", " << y << ")";
	}

	double DarX()
	{
		return x;
	}

	double DarY()
	{
		return y;
	}
};
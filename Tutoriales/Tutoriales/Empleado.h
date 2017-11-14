#pragma once
#include <iostream>
#include <fstream>
using namespace std;
class Empleado
{
private:
	char nombre[20];
	char actividad[15];
	char tipo;
	float bono;
	float sueldo;

public:
	static const int ANCHO = 12;
	Empleado(char);
	virtual void pedirDatos(ifstream &);		// funci�n polimorfa
	char verTipo() const;
	virtual void ver(ofstream &);
	virtual float calcularBono() const = 0;	// funci�n virtual pura
	virtual float calcularSueldo() const = 0;

};


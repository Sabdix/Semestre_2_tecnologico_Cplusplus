#pragma once
#include "Empleado.h"
#include "EmpleadoEventual.h"
#include "EmpleadoBase.h"
class Constructora
{
private:
	int noEmpleados;
	Empleado **empleados; //Composicion
	void verBase(ofstream &) const;
	void verEventual(ofstream &) const;
	void verTotal(ofstream &) const;

public:
	static const int ANCHO = 12;
	Constructora(ifstream &);
	~Constructora(void);
	void ver(ofstream &);
	void percepcionMayor(ofstream &);
};


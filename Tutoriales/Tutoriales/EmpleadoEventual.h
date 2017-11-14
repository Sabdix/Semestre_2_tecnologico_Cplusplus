#pragma once
#include "Empleado.h"
class EmpleadoEventual : public Empleado
{
private:
	int horas;
	float pagoHora; //Especializacion

public:
	EmpleadoEventual(char);
	void pedirDatos(ifstream &);
	~EmpleadoEventual(void);
	void ver(ofstream &);
	float calcularBono() const;
	float calcularSueldo() const;
};


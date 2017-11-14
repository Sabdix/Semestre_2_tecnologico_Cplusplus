#pragma once
#include "Empleado.h"
class EmpleadoBase : public Empleado
{
private:
	int faltas; //Especializacion
	float sueldoBase;

public:
	EmpleadoBase(char);
	void pedirDatos(ifstream &flujo);
	~EmpleadoBase(void);
	void ver(ofstream &);
	float calcularSueldo() const;
	float calcularBono() const;
};


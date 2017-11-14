#include "EmpleadoBase.h"
#include <iomanip>

EmpleadoBase::EmpleadoBase(char tipo) : Empleado(tipo){}

EmpleadoBase::~EmpleadoBase(void){}

void EmpleadoBase::pedirDatos(ifstream &flujo)
{
	Empleado::pedirDatos(flujo);
	flujo >> faltas;
	flujo >> sueldoBase;
}

void EmpleadoBase::ver(ofstream &flujo)
{
	Empleado::ver(flujo);
	flujo << setw(ANCHO) << faltas << setw(ANCHO) << sueldoBase << setw(ANCHO)
		<< calcularBono() << setw(ANCHO) << this->calcularSueldo() << "\n";
}

float EmpleadoBase::calcularBono() const
{
	if (faltas == 0)
		return 200.0;
	else
		return 0.0;
}

float EmpleadoBase::calcularSueldo() const
{
	return sueldoBase - (sueldoBase / 6) * faltas + calcularBono();
}
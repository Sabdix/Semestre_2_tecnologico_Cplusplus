#include "EmpleadoEventual.h"
#include <iomanip>
EmpleadoEventual::EmpleadoEventual(char tipo) : Empleado(tipo){}

EmpleadoEventual::~EmpleadoEventual(void){}

void EmpleadoEventual::pedirDatos(ifstream &flujo)
{
	Empleado::pedirDatos(flujo);
	flujo >> horas;
	flujo >> pagoHora;
}

void EmpleadoEventual::ver(ofstream &flujo)
{
	Empleado::ver(flujo);
	flujo << setw(ANCHO) << horas << setw(ANCHO) << pagoHora
		<< setw(ANCHO) << calcularBono() << setw(ANCHO) << this->calcularSueldo() << "\n";
}

float EmpleadoEventual::calcularBono() const
{
	if (horas > 35)
		return (horas - 35) * pagoHora;
	else
		return 0.0;
}

float EmpleadoEventual::calcularSueldo() const
{
	return horas * pagoHora + calcularBono();
}

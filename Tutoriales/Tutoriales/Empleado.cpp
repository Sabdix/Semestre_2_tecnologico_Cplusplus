#include "Empleado.h"
#include <iomanip>


Empleado::Empleado(char tipo)
{
	this->tipo = tipo;
}

void Empleado::pedirDatos(ifstream &flujo)
{
	flujo >> nombre >> actividad;
}

void Empleado::ver(ofstream &flujo)
{
	flujo << nombre << "\t" << setw(ANCHO) << actividad;
}

char Empleado::verTipo() const
{
	return tipo;
}



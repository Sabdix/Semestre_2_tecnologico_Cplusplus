#include "Constructora.h"
#include <iomanip>

Constructora::Constructora(ifstream &flujo)
{
	char tipo;
	flujo >> noEmpleados;
	empleados = new Empleado*[noEmpleados];
	for (int i = 0; i < noEmpleados; i++)
	{
		flujo >> tipo;
		if (tipo == 'E')
			empleados[i] = new EmpleadoEventual(tipo);
		else
			empleados[i] = new EmpleadoBase(tipo);
		empleados[i]->pedirDatos(flujo);
	}
}


Constructora::~Constructora(void)
{
	delete[]empleados;
}

void Constructora::ver(ofstream &flujo)
{
	flujo << "\nNómina semanal de la Constructora Siglo XXI\n";
	this->verBase(flujo);
	verEventual(flujo);
	verTotal(flujo);
	percepcionMayor(flujo);
}

void Constructora::verBase(ofstream &flujo) const
{
	flujo << "\nTrabajadores de Base\n";
	flujo << "Nombre" << setw(ANCHO) << "Puesto" << setw(ANCHO) <<"Faltas"
		<< setw(ANCHO) << "Sueldo Base" << setw(ANCHO) << "Bono" << setw(ANCHO) << "Sueldo\n";
	float sumaBonos = 0, sumaSueldos = 0.0;
	for (int i = 0; i < noEmpleados; i++)
	{
		if (empleados[i]->verTipo() == 'B')
		{
			empleados[i]->ver(flujo);
			sumaBonos += empleados[i]->calcularBono();
			sumaSueldos += empleados[i]->calcularSueldo();
		}
	}
	flujo << "                 Totales:     " << sumaBonos << "     " <<
		sumaSueldos << "\n";
}

void Constructora::verEventual(ofstream &flujo) const
{
	flujo << "\nTrabajadores Eventuales\n";
	flujo << "Nombre" << setw(ANCHO) << "Oficio" << setw(ANCHO) << "Horas Trab"
		<< setw(ANCHO) << "$ / Hora" << setw(ANCHO) << "Bono" << setw(ANCHO) << "Sueldo\n";
	float sumaBonos = 0, sumaSueldos = 0.0;
	for (int i = 0; i < noEmpleados; i++)
	{
		if (empleados[i]->verTipo() == 'E')
		{
			empleados[i]->ver(flujo);
			sumaBonos += empleados[i]->calcularBono();
			sumaSueldos += empleados[i]->calcularSueldo();
		}
	}
	flujo << "                 Totales:     " << sumaBonos << "     " <<
		sumaSueldos << "\n";
}

void Constructora::percepcionMayor(ofstream &flujo)
{
	float sueldoMayor = 0.0;
	for (int i = 0; i < noEmpleados; i++)
		if (empleados[i]->calcularSueldo() > sueldoMayor)
			sueldoMayor = empleados[i]->calcularSueldo();
	flujo << "\nLa percepcion mas alta la tienen los empleados: \n";
	for (int I = 0; I < noEmpleados; I++)
		if (empleados[I]->calcularSueldo() == sueldoMayor)
			empleados[I]->ver(flujo);
}

void Constructora::verTotal(ofstream &flujo) const
{
	float sumaBonos = 0, sumaSueldos = 0.0;
	for (int i = 0; i < noEmpleados; i++)
	{
		sumaBonos += empleados[i]->calcularBono();
		sumaSueldos += empleados[i]->calcularSueldo();
	}
	flujo << "\n                                Gran Total :         " 
		<< sumaBonos << "        " << sumaSueldos << "\n";

}
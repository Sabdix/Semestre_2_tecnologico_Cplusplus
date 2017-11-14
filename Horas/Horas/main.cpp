#include <iostream>
#include "Hora.h"

using namespace std;

int main()
{
	Hora h;

	cout << "La hora militar inicial es: ";
	h.imprimeMilitar();

	cout << "\nLa hora estandar inicial es ";
	h.imprimeEstandar();

	h.estableceHora(13, 27, 6);
	
	cout << "\nLa hora Militar despues de establecer hora es ";
	h.imprimeMilitar();

	cout << "\nLa hora Estandar despues de establecer hora es ";
	h.imprimeEstandar();

	h.estableceHora(99, 99, 99);
	cout << "\nHora de valores invalidos\nHora Militar: ";
	h.imprimeMilitar();

	cout << "\nHora Estandar: ";
	h.imprimeEstandar();

	cout << endl;

	system("PAUSE");
	return 0;
		
}
#include <iostream>
#include "Constructora.h"
using namespace std;

int main()
{
	cout << "Lectura de datos desde archivo: datos.txt\n";
	cout << "     Informe en archivo : Informe.txt\n";
	ifstream entrada("datos.txt");
	ofstream salida("Informe.txt");
	Constructora objeto(entrada);
	objeto.ver(salida);
	
	system("PAUSE");
	return 0;
}
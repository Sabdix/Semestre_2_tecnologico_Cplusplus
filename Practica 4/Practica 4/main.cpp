#include <iostream>
#include "Esfera.h"
using namespace std;

int main()
{
	Esfera *Objetos[3];

	for (int contador = 0; contador < 2; contador++)
	{
		Objetos[contador] = new Esfera();
		Objetos[contador]->Asignar();
	}
	Objetos[2] = new Esfera(Objetos[0]->DarRadio() + Objetos[1]->DarRadio());

	cout << "Esfera \t Radio \t Volumen" << endl;
	for (int print = 0; print < 3; print++)
	{
		cout << print + 1 << " \t " << Objetos[print]->DarRadio() << " \t " << Objetos[print]->Volumen() << endl;
		delete Objetos[print];
	}
	system("PAUSE");
	return 0;
}
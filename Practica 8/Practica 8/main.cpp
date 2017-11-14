#include <iostream>
#include <time.h>
#include "Set.h"
#include <stdlib.h>

using namespace std;

int main()
{
	srand(time(NULL));

	cout << "\nOperaciones Básicos de Conjuntos\n" << endl;
	Set::Inicializar();
	Set::Mostrar();
	

	Set set1(true), set2(true);
	set1.Mostrar("Set A     :");
	set2.Mostrar("Set B     :");

	Set setR;
	setR.Union(set2);
	setR.Mostrar("Set A U B :");
	setR = set1.Interseccion(set2);
	setR.Mostrar("Set A | B :");
	setR = set1.Diferencia(set2);;
	setR.Mostrar("Set A - B :");
	setR = set2.Diferencia(set1);
	setR.Mostrar("Set B - A :");
	string Elemento;
	cout << "Que elemento quieres ver si esta en conjunto A ";
	cin >> Elemento;
	bool existe = set1.Pertenencia(Elemento);
	cout << "\nEl elemento " << Elemento;
	cout << (existe) ? " Si " : " No ";
	cout << "pertenece al conjunto A" << endl;

	system("PAUSE");
	return 0;
}
#include <iostream>
#include "Conjunto.h"
#include <time.h>

using namespace std;

int main()
{
	srand(time(NULL));
	string sub = "\n\nEl conjunto B no es Subconjunto de A\n el conjunto A no es identidad con B";
	cout << "\nOperaciones basicos de Conjuntos \n" << endl;
	Conjunto set1, set2;

	set1.Generar(true);
	set1.Mostrar("Conjunto A   : ");
	set2.Generar(true);
	set2.Mostrar("Conjunto B   : ");

	Conjunto setU;
	setU = set1.Union(set2);
	setU.Mostrar("Union A U B : ");

	Conjunto setI;
	setI = set1.Interseccion(set2);
	setI.Mostrar("Interseccion A | U : ");

	Conjunto setD;
	setD = set1.Diferencia(set2);
	setD.Mostrar("Diferencia A - B : ");

	if (set1.SubConjunto(set2)) sub = "\n\nEl conjunto B es subconjunto de A\n A es identidad con B";
		cout << sub << endl;
	if (set2.SubConjunto(set1)) sub = "\n\nEl conjunto A es subconjunto de B\n B es identidad con A";
		cout << sub << endl;

	system("PAUSE");
	return 0;

}
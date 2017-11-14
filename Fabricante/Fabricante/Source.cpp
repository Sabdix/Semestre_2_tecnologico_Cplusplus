#include <iostream>
#include "Fabricante.h"
#include "Producto.h"
using namespace std;

int main()
{
	Fabricante fabricante;
	cin >> fabricante;
	cout << "Fabricante: " << fabricante;

	Producto <int> producto1(7);
	Producto <Fabricante> producto2(fabricante);
	Producto <char*> producto3("Apple");
	producto1.Imprime();
	producto2.Imprime();
	producto3.Imprime();


	
	system("PAUSE");
	return 0;
}
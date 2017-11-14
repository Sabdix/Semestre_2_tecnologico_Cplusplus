#define MAX 64
#include <istream>
#include <ostream>
#include <iostream>

using namespace std;

class Fabricante {

private:
	char Nombre[MAX], Domicilio[MAX], Telefono[MAX];
	friend istream &operator >> (istream &, Fabricante &);
	friend ostream &operator << (ostream &, Fabricante &);
};

istream &operator >> (istream &Lee, Fabricante &ObjFab)
{
	cout << "\n\nIngrese nombre del fabricante:  ";	
	Lee>>ObjFab.Nombre;
	cout << "\n\nIngrese domicilio del fabricante:  ";	
	Lee>>ObjFab.Domicilio;
	cout << "\n\nIngrese telefono del fabricante:  ";	
	Lee>>ObjFab.Telefono;
	return Lee;
}

ostream &operator <<(ostream &Escribe, Fabricante &ObjFab)
{
	cout << "\n\nDatos del fabricante\n";
	Escribe << "Nombre   :  " << ObjFab.Nombre << endl;
	Escribe << "Domicilio :  " << ObjFab.Domicilio << endl;
	Escribe << "Telefono :  " << ObjFab.Telefono << endl;
	return Escribe;

}
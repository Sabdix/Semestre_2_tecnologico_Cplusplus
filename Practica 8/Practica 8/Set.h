#include <iostream>
#include <string>

using namespace std;

class Set
{
private:
	int bits;
	static string Universo[8];

	void Bits()
	{
		cout << "\n01234567\n";
		for (short i = 0; i < 8; i++)
			if ((bits & (0x80000000 >> i)) != 0)
				cout << "1";
			else
				cout << "0";
	}

	void Elementos()
	{
		cout << "[";
		for (short i = 0; i < 8; i++)
			cout << ((bits & (0x80000000 >> i)) != 0) ? Universo[i] + ", " : "";
		cout << "]";
	}

public:

	Set()
	{
		bits = 0; //Conjunto Vacio
	}

	Set(bool genera)
	{
		bits = 0;
		if (!genera) return;
		short ne;
		ne = (short)(1 + rand()% (8 + 1));
		short elemento;
		for (short i = 0; i < ne; i++)
		{
			elemento = (short)(1 + rand() % (8 + 1));
			bits = (bits | (0x80000000 >> elemento));
		}
	}

	static void Mostrar()
	{
		cout << "\n01234567\n";
		cout << " Universo [";
		for (short i = 0; i < 8; i++)
			cout << Universo[i] << ", ";
		cout << "]";
		cout << endl;
	}

	void Mostrar(string msg)
	{
		Bits(); 
		cout << "    " << msg;
		Elementos();
		cout << endl;
	}

	Set Union(Set b)
	{
		Set Resultante(false);
		Resultante.bits = bits | b.bits;
		return Resultante;
	}

	Set Interseccion(Set b)
	{
		Set Resultante(false);
		Resultante.bits = bits & b.bits;
		return Resultante;
	}

	Set Diferencia(Set b)
	{
		Set Resultante(false);
		Resultante.bits = bits &~ b.bits;
		return Resultante;
	}

	bool Pertenencia(string Elemento)
	{
		bool existe = false;
		int pos = 0;
		for (int i = 0; i < 8 && !existe; i++)
			if (Universo[i] == Elemento)
			{
				existe = true;
				pos = i;
			}
		if (existe)
		{
			int elem = 0x80000000 >> pos;
			existe = (bits & elem) != 0 ? true : false;
		}
		return existe;
	}

	static void Inicializar()
	{
		Universo[0] = "Uva"; 
		Universo[1] = "Melon";
		Universo[2] = "Sandia";
		Universo[3] = "Manzana";
		Universo[4] = "Pera";
		Universo[5] = "Limon";
		Universo[6] = "Fresa";
		Universo[7] = "Piña";
	}
};
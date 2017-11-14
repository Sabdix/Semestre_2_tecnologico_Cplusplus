#include <string>
using namespace std;
class Conjunto
{
public:
	void Generar(bool genera)
	{
		bits = 0;
		if (genera != true) 
			return;
		short ne;
		ne = (short) rand() % (31 + 1);
		short elemento;

		for (short i = 0; i < ne; i++)
		{
			elemento = (short) rand() % (31+1);
			bits = (bits | (0x80000000 >> elemento));
		}
	}

	void Mostrar(string msg)
	{
		cout << "\n01234567890123456789012345678901\n";
		for (short i = 0; i < 32; i++)
			if ((bits & (0x80000000 >> i)) != 0)
				cout << "1";
			else
				cout << "0";
		cout << "---->" << msg << "[";

		for (short i = 0; i < 32; i++)
		{
			if ((bits & (0x80000000 >> i)) != 0)
				cout << i << ", ";
			else
				cout << "";
		}
		cout << "]\n";
	}

	Conjunto Union(Conjunto b)
	{
		Conjunto resultante;
		resultante.bits = bits | b.bits;
		return resultante;
	}

	Conjunto Diferencia(Conjunto b)
	{
		Conjunto resultante;
		resultante.bits = bits &~ b.bits;
		return resultante;
	}

	Conjunto Interseccion(Conjunto b)
	{
		Conjunto resultante;
		resultante.bits = bits & b.bits;
		return resultante;
	}

	bool SubConjunto(Conjunto b)
	{
		bool sub = false;
		int aux = bits | b.bits;
		aux = aux | bits;
		if (bits == aux)sub = true;
		return sub;
	}
private:
	int bits;
};
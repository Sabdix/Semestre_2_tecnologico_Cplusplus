#include "Dado.h"
class Experimento
{
public:
	
	Experimento()
	{
		cout << "De la cantidad de tiros ";
		cin >> lanzamientos;

		for (int I = 0; I < 12; I++)
			frecuencias[I] = 0;

		for (int lanza = 0; lanza < lanzamientos; lanza++)
		{
			int tirada = uno.Lanzar() + dos.Lanzar();
			frecuencias[tirada - 1] += 1;
		}
	}

	void Mostrar()
	{
		int repeticiones = 0;
		cout << "\nValor \tFrecuencia" << endl;
		for (int i = 0; i < 12; i++)
			cout << i + 1 << "\t" << frecuencias[i] << endl;
		for (int contador = 0; contador < 12; contador++)
			if (frecuencias[contador] > repeticiones)
			{
				mayor = contador + 1;
				repeticiones = frecuencias[contador];
			}
		cout << "\n\nLa tirada con mayor ocurrencia es " << mayor << endl;
	}
private:
	int lanzamientos;
	Dado uno, dos;
	int frecuencias[12];
	int mayor;
	
};
#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;

class Dado
{
public:
	Dado()
	{
		valor = 1;
	}

	int Lanzar()
	{
		valor = 1 + rand() % (7 - 1);
		return valor;
	}
private:
	int valor;
};
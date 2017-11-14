#include <iostream>
#include <time.h>
#include "Experimento.h"
using namespace std;

int main()
{
	srand(time(NULL));
	Experimento Objeto;
	Objeto.Mostrar();
	

	system("PAUSE");
	return 0;
}
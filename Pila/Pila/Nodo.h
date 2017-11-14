#include <iostream>

using namespace std;

class Nodo
{
public:
	int info;
	Nodo *sig;

	Nodo(const int v)
	{
		info = v;
		sig = 0;
	}
};
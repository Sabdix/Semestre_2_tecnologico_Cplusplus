#include <iostream>
#include "Nodo.h"
using namespace std;

class Lista
{
private:
	Nodo *le, *temp;
	void Test(const Nodo *const ele)
	{
		if (!ele)
		{
			cout << "\nFallo de Memoria";
			exit(1);
		}
	}
public:
	Lista()
	{
		le = 0;
	}
	
	~Lista()
	{
		cout << "\nLiberando memoria de los elementos:\n";
		int valor;
		while (le)
		{
			valor = Del();
			cout << " " << valor;
		}
	}

	void Ins(const int v)
	{
		Nodo *nvo = new Nodo(v);
		Test(nvo);
		temp = le;
		if (le == 0)
		{
			le = nvo;
		}
		else
		{
			while (temp->sig != 0)
			{
				temp = temp->sig;
			}
			temp->sig = nvo;
		}
		//nvo->sig = le;
		//le = nvo;
	}

	int Del()
	{
		int valor = le->info;
		Nodo *sale = le;
		le = le->sig;
		sale->sig = 0;
		delete sale;
		return valor;
	}

	void Ver()
	{
		cout << "\nLa lista es : ";
		Nodo *tmp = le;
		while (tmp) 
		{
			cout << "    " << tmp->info;
			tmp = tmp->sig;
		}
	}

};
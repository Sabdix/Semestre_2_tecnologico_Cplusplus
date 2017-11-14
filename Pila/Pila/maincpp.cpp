#include <iostream>
#include "Lista.h"
using namespace std;

int main()
{
	Lista le;
	le.Ins(3);
	le.Ins(5);
	le.Ins(7);
	le.Ver();
	int sale = le.Del();
	cout << "\nSale " << sale;
	cout << "\n";
	le.Ver();
	system("PAUSE");
	return (EXIT_SUCCESS);


}
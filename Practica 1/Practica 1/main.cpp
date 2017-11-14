#include <iostream>


using namespace std;

static long Octal(int n)
{
	long p = 1l , nb = 0l;
	int d = 0;
	do
	{
		d = n % 8;
		n >>= 3;
		nb += d * p;
		p *= 10l;
	} while (n > 0);
	return nb;
}

int main()
{
	int nd, ndF; //Crea variables: nd = numero decimal, ndF = numero decimal final
	long no; // Crea variable nb = numero binario

	cout << "Introduce el numero límite ";
	cin >> ndF;
	cout << "Introduce el numero con el que quieres iniciar ";
	cout << "\nDecimal \tOctal ";
	for (cin >> nd; nd <= ndF; nd++)
	{
		no = Octal(nd);
		cout << "\n" << nd << "\t\t" << no << endl;
	}
	
	system("PAUSE");
	return 0;
}
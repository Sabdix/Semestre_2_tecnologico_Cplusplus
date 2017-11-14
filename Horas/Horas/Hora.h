#include <iostream>

using namespace std;

class Hora
{
public:
	
	Hora()
	{
		hora = minuto = segundo = 0;
	}

	void estableceHora(int h, int m, int s)
	{
		hora = (h >= 0 && h < 24) ? h : 0;
		minuto = (m >= 0 && m < 60) ? m : 0;
		segundo = (s >= 0 && s < 60) ? s : 0;
	}

	void imprimeMilitar()
	{
		cout << (hora < 10 ? "0" : "") << hora << ":" << (minuto < 10 ? "0" : "") << minuto;
	}

	void imprimeEstandar()
	{
		cout << ((hora == 0 || hora == 12) ? 12 : hora % 12) << ":"
			<< (minuto < 10 ? "0" : "") << minuto << ":" << (segundo < 10 ? "0" : "") << segundo
			<< (hora < 12 ? " AM" : " PM");
	}
private:
	int hora;
	int minuto;
	int segundo;
};
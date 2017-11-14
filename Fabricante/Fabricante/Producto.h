#define MAX 64

template <class T>
class Producto {

private:
	int Clave;		char Nombre[MAX];
	float Precio;	T seCompraA;

public:
	Producto(T Provee)
	{
		cout << "\n\nDatos del producto\n\n";
		cout << "\nNombre: "; 
		cin >> Nombre;
		cout << "\nClave : "; 
		cin >> Clave;
		cout << "\nPrecio: "; 
		cin >> Precio;
		seCompraA = Provee;
	}
	void Imprime()
	{
		cout << "\n\nDatos del producto\n\n";		
		cout << "\nClave: "<<Clave;
		cout << "\nNombre: " << Nombre;		
		cout << "\nPrecio: " << Precio;
		cout << "\nProvisto por: " << seCompraA << endl;

	}
};
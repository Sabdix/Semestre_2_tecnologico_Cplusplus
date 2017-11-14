#include <cstdlib>
#include <iostream>
#include <fstream>
#include <math.h>
using namespace std;

int main(int argc, char** argv) {
    
    long double x, contador = 1;
    long double e=1, aprox, Factorial = 1;
    
    cout << "Introduce el valor de x  ";
    cin >> x;
    
    cout << "introduce el valor de aproximacion (Ejemplo: 0.00001)  ";
    cin >> aprox;
    
    do
    {
        Factorial *= contador;
        e+= (pow(x,contador))/Factorial;
        contador++;
    } while ( pow(x,contador)/Factorial > aprox);
    
    cout <<e;
    
    return 0;
}


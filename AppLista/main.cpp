

#include <cstdlib>

using namespace std;

class Lista{
public:
    Lista (bool pedir){
        if (!pedir) return;
        cout << "\nCuántos elementos son ";
        cin >> ne;
        ar = new int[ne];
        cout << "\nProporcopna los elementos ";
        for (int i=0; i < ne; i++)
            cin >> ar[i];
        
    }
    
    void invertir (Lista dos){
        ne = dos.ne;
        ar = new int[dos.ne];
        for (int i=0; i < ne; i++)
            ar[i]= dos.ar[ne-i+1];
    }
    
    void ver (string msg){
        cout << "\n" << msg << "\n";
        for (int i=0; i < ne; i++)
            cout << ar[i] << " ";
        cout << "\n";
    }
    
private:
    int *ar;
    short ne;
    
};

int main(int argc, char** argv) {
    
    Lista A(true), B(false);
    A.ver("Lista A");
    B.invertir(A);
    B.ver("Lista invertida");

    return 0;
}


#include <cstdlib>
#include <iostream>
#include <fstream>
#include <math.h>
using namespace std;

static int Primo (int n)
{
    int con, band=1;
        
        for(con = 2; con <= sqrt(n); con++)
        {
            if (n % con == 0)
            {
                band=0;
                break;
            }
        }
        if (band == 0)
        {
            return 0;
        } else
        {
            return 1;
        }
}

int main(int argc, char** argv) {
        for (int n=2; n <= 500; n++)
        {
            if (Primo(n)==1 && Primo(n+2)==1)
            {
                cout << n << "\t" << n+2 << "\n";
            }
        }
    return 0;
}


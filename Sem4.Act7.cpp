

#include <iostream>
using namespace std;
int main()
{
    int N;
    int n1, n2, n3;
    cout << "Ingrese un numero de tres cifras: "; cin >>N;

    n1 = N % 10;
    n2 = (N / 10) % 10;
    n3 = ((N / 10) / 10) % 10;

    if (N >= 100 && N <= 999)
    {
        if ( n1 == n3)
        {
            cout << "Es capicua.";
        }
        else
        {
            cout << "No es capicua.";
        }
    }
    else
    {
        cout << "Numero incorrecto.";
    }
    system("pause>0");
    return 0;
}

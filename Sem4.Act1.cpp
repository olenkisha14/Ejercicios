
#include <iostream>
using namespace std;
int main()
{
    int N;

    cout << "Ingrese el numero entero: "; cin >> N;

    if (N >= 100 && N <= 999)
    {
        if (N % 2 == 0)
        {
            cout << "Es par.";
        }
        else {
            cout << "Es impar";
        }
    }

    else {
        cout << "Error. Vuelva a ingresar el numero.";
    }

    system("pause>0");
    return 0;

}

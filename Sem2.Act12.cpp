
#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
    int Tipo, preciounitario, P1, P2, P3;
    double x1, x2, x3;

    cout << "[1] Por la compra de un pizza grande se descuenta el 10% (escriba x1)" << endl;
    cout << "[2] Por la compra de una pizza familiar se descuenta el 15% (escriba x2)" << endl;
    cout << "[3] Por la compra de una pizza fiesta descuentan el 20% (escriba x3)";
    cout << "----------------------------------------------------------" << endl;

    cout << "Tipo de pizza [1,2,3]: "; cin >> Tipo;

    preciounitario = 25;

    P1 = 10;
    x1 = preciounitario * (((float)P1 / ((float)100)));

    P2 = 15;
    x2 = preciounitario * (((float)P2 / ((float)100)));

    P3 = 20;
    x3 = preciounitario * (((float)P3 / ((float)100)));

    if (Tipo = x1)
    {
        cout << "Total es: " << x1;
    }
    else if (Tipo = x2)
    {
        cout << "Total es: " << x2;
    }
    else if (Tipo = x3)
    {
        cout << "Total es: " << x3;
    }


    return 0;

   
}

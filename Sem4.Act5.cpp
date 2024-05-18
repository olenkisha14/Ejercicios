
#include <iostream>
using namespace std;
int main()
{
    int n1, n2, n3;
    double p1, m1;
    double t1, t2, t3;

    cout << "Ingrese la cantidad de caramelos que va a comprar Tipo 1: ";
    cin >> n1;
    cout << "Ingrese la cantidad de caramelos que va a comprar Tipo 2: ";
    cin >> n2;
    cout << "Ingrese la cantidad de caramelos que va a comprar Tipo 3: ";
    cin >> n3;

    t1 = (n1 * 0.75);
    t2 = (n2 * 1.15);
    t3 = (n3 * 0.65); 

    cout << endl << "Ingrese Monto de la Propina: "; cin >> p1;

    m1 = t1 + t2 + t3;

    cout << endl << "El monto total de compra: " << m1;

    if (p1 < m1)
    {
        cout << endl << "La propina no es suficiente para pagar los caramelos.";
    }
    else if (p1 >= m1)
    {
        cout << endl << "La propina es suficiente para pagar los caramelos.";
    }
   

    system("pause>0");
    return 0;
}

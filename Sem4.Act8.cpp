
#include <iostream>
using namespace std;
int main()
{
    int zona, consumo;
    float monto;

    cout << "Ingrese zona (1-Comercial, 2-Residencial): ";
    cin >> zona;
    cout << "Ingrese consumo: ";
    cin >> consumo;

    if (zona == 1)
    { //zona comercial
        monto = 50.0 + 0.75 * min(100, consumo) + 0.9 * max(0, consumo - 100);
    }
    else if (zona == 2)
    {//zona residencial
        monto = 25.0 + 0.30 * min(100, consumo) + 0.7 * max(0, consumo - 100);
    }
    else
    {
        cout << "Zona ingresada incorrecta." << endl;
    }
    cout << "El monto a pagar es: " << monto <<" soles" << endl;
    system("pause>0");
    return 0;
}

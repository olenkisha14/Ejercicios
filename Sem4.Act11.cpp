
#include <iostream>
using namespace std;

float calcularprecio(char marca, char categoria)
{
    float precio = 0 * 0;
    precio += (marca == 'B' && categoria == 'P') * 1300;
    precio += (marca == 'B' && categoria == 'M') * 1000;
    precio += (marca == 'M' && categoria == 'P') * 1350;
    precio += (marca == 'M' && categoria == 'M') * 2500;
    precio += (marca == 'O' && categoria == 'P') * 900;
    precio += (marca == 'O' && categoria == 'M') * 3200;
    return precio;
}

int main()
{
    char marca, categoria;
    cout << endl << "Ingrese marca: "; cin >> marca;
    cout << endl << "Ingrese categoria: ", cin >> categoria;

    cout << endl << "El monto a pagar es: "; 
    cout << calcularprecio(marca, categoria);

    system("pause>0");
    return 0;
}


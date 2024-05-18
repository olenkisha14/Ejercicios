

#include <iostream>
using namespace std;

int main()
{
    double NumEntra, precio = 1;
    char zona, socio;
    cout << "Ingrese la zona elegida (V: Vip; P:Platea; E: Popular" << endl; cin >> zona;
    cout << endl << "Ingrese el numero de entradas: "; cin >> NumEntra;
    cout << endl << "Es socio de la U (S: Si; N: No): "; cin >> socio;

    if ((zona == 'V') || (zona == 'v')) {
        precio = 350.00;
    }
    if ((zona == 'P') || (zona == 'p')) {
        precio = 130.00;
    }
    if ((zona == 'E') || (zona == 'e')){
        precio = 50.00;
    }
    if ((3 <= NumEntra) && (NumEntra <= 6)) {
        precio = precio * NumEntra * 95 / 100.00;
    }
    if ((7 <= NumEntra) && (NumEntra <= 9)) {
        precio = precio * NumEntra * 92.5 / 100.00;
    }
    if (NumEntra > 9) {
        precio = precio * NumEntra * 90 / 100.00;
    }
    if ((zona == 'S') || (zona == 's')) {
        precio = precio * 92 / 100.00;
    }
    if ((zona == 'N') || (zona == 'n')) {
        precio = precio + 0.00;
    }
    cout << "El monto a pagar es: " << precio << endl;

    system("pause");

}


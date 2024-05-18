

#include <iostream>
using namespace std;

char obtenerPrimeraLetraDeTexto(char texto[])
{
    return texto[0];
}

int main()
{
    const int maximoTamanio = 30;
    char cadena[maximoTamanio];

    cout << "Ingrese cadena de texto: "; 
    cin.getline(cadena, maximoTamanio);

    cout << "La cadena es: " << cadena << endl;

    cout << obtenerPrimeraLetraDeTexto(cadena);
    system("pause>0");
    return 0;
}

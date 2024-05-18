

#include <iostream>
using namespace std;

int main()
{
    int const SUELDOFIJO = 2500;
    int edad, sueldofinal = SUELDOFIJO;
    char nacionalidad;

    //validamos la edad
    cout << "Ingrese su edad: ";
    try {
        cin >> edad;
    } catch (const exception& e) {
        cout << "Solo números, ni letras ni simbolos. Vuelvalo a intentar";
    }

    //Validamos la nacionalidad
    try {
        cout << "Nacio usted en este pais (teclee 'n')  o es extranjero (teclee ' e')?:"; cin >> nacionalidad;
    } catch (const exception& e) {
        cout << "La  opción es incorrecta, por favor hagalo en minusculas. Intentelo de nuevo."; 
    }

    //nacionalidad
    if (nacionalidad == 'e'){
        cout << "Eres extranjero y tienes un bono de 500 soles \n"; sueldofinal += 500;
    }

    //dar bono según edad 
    if (15 <= edad && edad <= 20) {
        cout << "Tienes entre 15 y 20 anios, obtienes un bono de 1400.\n"; sueldofinal += 1400;
    }
    else if (21 <= edad && edad <= 25) {
        cout << "Tienes entre 21 y 25 anios, obtienes un bono de 1500.\n"; sueldofinal += 1500;
    }
    else if (26 <= edad && edad <= 30) {
        cout << "Tines entre 26 y 30 anios, obtienes un bono de 1200.\n"; sueldofinal += 1200;
    }
    else {
        cout << "Obtienes un bono de 800 por tu edad. \n"; sueldofinal += 800;
    }

    cout << "Actualmente tienes un bono de: " << sueldofinal;

    return 0;

}
#include "pch.h"
#include "iostream"

using namespace System;
using namespace std;

//estructura para definir un punto en el espacio
struct Puntesp
{
    double x, y, z;//coordenadas de los puntos
};

//declaración de la función distancia entre dos puntos
double distancia(Puntesp Pi, Puntesp Pj)
{
    return sqrt(
        pow(Pi.x - Pj.x, 2) +
        pow(Pi.y - Pj.y, 2) +
        pow(Pi.z - Pj.z, 2)
    );
}

int main()
{
    Puntesp p1, p2;
    cout << "Ingrese datos del punto 1" << endl;
    cout << "x: "; cin >> p1.x;
    cout << "y: "; cin >> p2.y;
    cout << "z: "; cin >> p1.z;

    cout << "Ingrese datos del punto 2" << endl;
    cout << "x: "; cin >> p2.x;
    cout << "y: "; cin >> p2.y;
    cout << "z: "; cin >> p2.z;

    cout << "La distancia entre los puntos es: ";
    cout << distancia(p1, p2) << endl;
    system("pause>0");
    return 0;
}

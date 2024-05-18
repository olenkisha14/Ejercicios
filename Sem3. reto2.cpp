#include "pch.h"
#include "iostream"
using namespace System;
using namespace std;

int main()
{
    char nom, apellido;
    int edad, anio;
    int n1, n2, n3, n4, n5, n6, n7;
    int a1, a2, a3, a4;
    int e1, e2, e3, e4, e5;
    int an1, an2, an3, an4, an5, an6;


    cout << "Ingrese primera letra del nombre: "; cin >> nom;
    cout << "Ingrese primera letra del apellido: ", cin >> apellido;
    cout << "Ingrese la edad: "; cin >> edad;
    cout << "Ingrese el anio de nacimiento: "; cin >> anio;

    //Calculo nombre
    n1 = nom % 2;
        n2 = (nom / 2) % 2;
    n3 = ((nom / 2) / 2) % 2;
    n4 = (((nom / 2) / 2) / 2) % 2;
    n5 = ((((nom / 2) / 2) / 2) / 2) % 2;
    n6 = (((((nom / 2) / 2) / 2) / 2) / 2) % 2;
    n7 = ((((((nom / 2) / 2) / 2) / 2) / 2) / 2) % 2;

    //Calculo apellido
    a1 = apellido % 3;
    a2 = (apellido / 3) % 3;
    a3 = ((apellido / 3) / 3) % 3;
    a4 = (((apellido / 3) / 3) / 3) % 3;

    //calculo edad
    e1 = edad % 2;
    e2 = (edad / 2) % 2;
    e3 = ((edad / 2) / 2) % 2;
    e4 = (((edad / 2) / 2) / 2) % 2;
    e5 = ((((edad / 2) / 2) / 2) / 2) % 2;

    //calculo anio
    an1 = anio % 4;
    an2 = (anio / 4) % 4;
    an3 = ((anio / 4) / 4) % 4;
    an4 = (((anio / 4) / 4) / 4) % 4;
    an5 = ((((anio / 4) / 4) / 4) / 4) % 4;
    an6 = (((((anio / 4) / 4) / 4) / 4) / 4) % 4;


    //salida
    cout << endl << "DATOS ENCRIPTADOS";
    cout << endl << nom << "=" << n7 << n6 << n5 << n4 << n3 << n2 << n1;
    cout << endl << apellido << "=" << a4 << a3 << a2 << a1;
    cout << endl << edad << "=" << e5 << e4 << e3 << e2 << e1;
    cout << endl << anio << "=" << an6 << an5 << an4 << an3 << an2 << an1;

    system("pause");
    return 0;
}

#include "pch.h"
#include "iostream"
using namespace std;
using namespace System;

//funciones
void titulo()
{
    cout << endl << "PROGRAMA CON FUNCIONES";
    cout << endl << "**********************";
}

void ingredientes()
{
    cout << endl << "INGREDIENTES:";
    cout << endl << "-Platano";
    cout << endl << "-Harina";
    cout << endl << "-Leche";
}

void Preparación()
{
    cout << endl << "PREPARACION:";
    cout << endl << "Mezcla todo los ingredientes";
    
}
void conclusion()
{
    cout << endl << "             Ya tendrias tu pastel!";

}

int anio_actual()
{
    return 2024;
}

int mes_actual()
{
    return 06;
}

int dia_actual()
{
    return 04;
}

//MAIN

int main()
{
    
    titulo(); //llamada a la funcion
    ingredientes();
    Preparación();
    conclusion();

    cout << endl << "El anio actual es:" << anio_actual();
    cout << endl << "El mes actual es:" << mes_actual(); 
    cout << endl << "El  actual es:" << dia_actual();

    system("pause>0");
    return 0;
}

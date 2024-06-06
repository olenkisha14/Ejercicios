#include "pch.h"
#include "iostream"
using namespace System;
using namespace std;

void ejercicio_1()
{
    int* notas = new int[6];
    int suma_notas = 0;
    cout << "Ingrese las notas: ";
    for (int i = 0; i < 6; i++)
    {
        cin >> notas[i];
        suma_notas += notas[i];
    }
    int min_nota;
    min_nota = notas[0];
    for (int i = 0; i < 6; i++)
    {
        min_nota = min(min_nota, notas[i]);
        //"min" sirve para hallar el minimo valor del arreglo
        //"max" sirve para hallar el max valor del arreglo
    }

    suma_notas-= min_nota;//para exceptuar la minima nota

    cout << "La nota que no se considera en el promedio es:" << min_nota << endl;
    cout << "El promedio es: " << suma_notas / 5.0 << endl;
}



int main()
{
    ejercicio_1();

    return 0;
}

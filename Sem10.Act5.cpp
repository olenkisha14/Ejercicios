#include "pch.h"
#include "iostream"
using namespace System;
using namespace std;

void intercambiar(int& n1, int& n2)
{
    int aux;
    aux = n1;
    n1 = n2;
    n2 = aux;
}

void ejercicio_5()
{
    int N;
    cout << "Ingrese numero de personas: "; cin >> N;
    while (N > 50)
    {
        cout << "Ingrese numero de personas: "; cin >> N;
    }
    int* numeros = new int[N];
    for (int i = 0; i < N; i++)
    {
        numeros[i] = 1 + rand() % 100;
    }

    cout << "Vector generado: " << endl;
 
    //Imprimir
    for (int i = 0; i < N; i++)
    {
        cout << numeros[i] << " " << endl;
    }
    cout << endl;

    cout << "Secuencias ascendentes:" << endl;
    for (int i = 0; i < N; ++i) {
        cout << numeros[i];
        //Verifica que el siguiente índice i + 1 esté dentro del rango válido del vector.
        while (i + 1 < N && numeros[i] < numeros[i + 1])// Comparar el elemento actual con el siguiente
        {
            cout << " " << numeros[i + 1];
            ++i;
        }
        cout << endl;
    }

    delete[] numeros;
}

int main()
{
    srand(time(nullptr));
    ejercicio_5();
    return 0;
}

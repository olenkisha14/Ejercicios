#include "pch.h"
#include "iostream"
using namespace System;
using namespace std;

void ejercicio_3()
{
    int N;
    cout << "Ingrese numero de personas: "; cin >> N;
    int* personas = new int[N];
    int personas_entre_30_y_50 = 0;
    int indice_menor = 0;
    for (int i = 0; i < N; i++)
    {
        personas[i] = 1 + rand() % 101;
    }

    //Imprimir
    for (int i = 0; i < N; i++)
    {
        cout << personas[i] << " ";
    }
    cout << endl;

    //Menor
    for (int i = 1; i < N; i++)
    {
        if (personas[i] < personas[indice_menor])
        {
            indice_menor = i;
        }
    } 
    cout << "El menor valor es: " << personas[indice_menor] << endl;
    cout << "Su posición es: " << indice_menor + 1<< endl;

    //Personas entre 30 y 50
    for (int i = 0; i < N; i++)
    {
        if (personas[i] >= 30 && personas[i] <= 60)
        {
            personas_entre_30_y_50++;
        }
    }
    cout << "Las personas entre 30 y 50 son: " << personas_entre_30_y_50 << endl;

    //Buscar edad
    int edad_buscar;
    cout << "Ingrese edad a buscar: ";
    cin >> edad_buscar;
    for (int i = 0; i < N; i++)
    {
        if (edad_buscar == personas[i])
        {
            cout << "Se encontro a la persona en esta posicion: " << i + 1 << endl;
            break;
        }

    }
}


int main()
{
    srand(time(nullptr));
    ejercicio_3();
    return 0;
}

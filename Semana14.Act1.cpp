#include "pch.h"
#include "iostream"
using namespace System;
using namespace std;

void generar_mensaje(int* mensaje, int tam)
{
    for (int i = 0; i < tam; i++)
    {
        mensaje[i] = rand() % 10;
    }
}

void imprimir_mensaje(int* mensaje, int tam)
{
    for (int i = 0; i < tam; i++)
    {
        cout << mensaje[i] << " ";
    }
    cout << endl;
}

bool existe_capicua4(int* mensaje, int tam)
{
    return(mensaje[tam - 1] == mensaje[tam - 4] && 
        mensaje[tam - 3] == mensaje[tam - 2]);
}

bool existe_capicua3(int* mensaje, int tam)
{
    return(mensaje[tam - 1] == mensaje[tam - 3]);
}


void contacto()
{
    int contador = 0;

    while (1)
    {
        system("cls");
        int tam = rand() % (15 - 10 + 1) + 10;
        int* arr = new int[tam];
        generar_mensaje(arr, tam);
        imprimir_mensaje(arr, tam);
        if (existe_capicua3(arr, tam) || existe_capicua4(arr, tam))
        {
            cout << "Se encontro capicua...\n\n";
            contador++;
        }
        if (contador == 5)
        {
            cout << "CONTACTO!!!!";
            break;
        }
        delete arr;
        system("pause>0");

    }
}

int main()
{
    srand(time(nullptr));
    contacto();
   

    system("pause>0");
    return 0;
}

#include "pch.h"
#include "iostream"
#define byte_tam 8
using namespace System;
using namespace std;

void generar_vector(int arr[])
{
    for (int i = 0; i < byte_tam; i++)
    {
        arr[i] = rand() % 2;
    }
}

void imprimir_byte(int arr[])
{
    for (int i = 0; i < byte_tam; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void prender_apagar_bites(int arr[])
{
    for (int i = 0; i < byte_tam; i++)
    {
        arr[i] = abs(arr[i] - 1);
    }
}

void intercambiar(int arr[])
{
    for (int i = 0; i < byte_tam; i++)
    {
        swap(arr[i], arr[i + 1]);
    }
}

int convertir_a_decimal(int arr[])
{
    int resultado = 0;
    for (int i = 0; i < byte_tam; i++)
    {
        resultado += arr[i] * pow(2, 7 - i);
    }
    return resultado;
}

int main()
{
    srand(time(nullptr));
    int arr[byte_tam];
    generar_vector(arr);
    imprimir_byte(arr);
    cout << endl;

    prender_apagar_bites(arr);
    imprimir_byte(arr);
    cout << endl;

    intercambiar(arr);
    imprimir_byte(arr);
    cout << endl;

    cout << "El numero es " << convertir_a_decimal(arr) << endl;

    system("pause>0");
    return 0;
}

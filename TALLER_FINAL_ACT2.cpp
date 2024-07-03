#include "pch.h"
#include "iostream"
using namespace System;
using namespace std;

int* generar_arreglo_horas(int tam)
{
    int* horas = new int[tam];
    for (int i = 0; i < tam; i++)
    {
        horas[i] = i + 5;
    }
    return horas;
}

void imprimir(int* arr, int tam)
{
    for (int i = 0; i < tam; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}


int* generar_arreglo_cantidad(int tam)
{
    int* cantidad = new int[tam];
    for (int i = 0; i < tam; i++)
    {
        cantidad[i] = rand() % 35 + 5;
    }
    return cantidad;
}

int encontrar_mayor(int* arr, int tam)
{
    int mayor = arr[0];
    for (int i = 1; i < tam; i++)
    {
        if (arr[i] > mayor) mayor = arr[i];
    }
    return mayor;
}

void mostrar_mayor_cantidad_buses(int* cantidad, int tam)
{
    int mayor = encontrar_mayor(cantidad, tam);
    for (int i = 0; i < tam; i++)
    {
        if (cantidad[i] == mayor)
        {
            cout << "Mayor cantidad es: " << i + 5 << " ";
        }

    }
}

void promedio_de_salida(int* arr, int tam)
{
    float suma = 0;
    for (int i = 0; i < 8; i++)
    {
        suma += arr[i];
    }
    cout << endl;
    cout << "Promedio: " << suma / 7 << endl;
}

void ordenar_buses_por_cantidad_horas(int* cantidad, int* horas, int tam)
{
    for (int i = 0; i < tam; i++)
    {
        for (int j = 0; j < tam - 1; j++)
        {
            if(cantidad[j] < cantidad[j-1])
            {
                int aux = cantidad[j];
                cantidad[j] = cantidad[j + 1];
                cantidad[j + 1] = aux;

                int aux2 = horas[j];
                horas[j] = horas[j + 1];
                horas[j + 1] = aux2;
            }

        }
    }
    cout << "Cantidades: ";
    imprimir(cantidad, tam);
    cout << "Horas: ";
    imprimir(horas, tam);
}

int main()
{
    srand(time(nullptr));
    int tam = rand() % 19 + 10;
    int* horas = generar_arreglo_horas(tam);
    int* cantidad = generar_arreglo_cantidad(tam);

    cout << "Horas: ";
    imprimir(horas, tam);
    cout << "Cantidades: ";
    imprimir(cantidad, tam);
    cout << endl;
    mostrar_mayor_cantidad_buses(cantidad, tam);
    promedio_de_salida(cantidad, tam);
    ordenar_buses_por_cantidad_horas(cantidad, horas, tam);

    delete[] horas;
    delete[] cantidad;
    system("pause>0");
    return 0;
}

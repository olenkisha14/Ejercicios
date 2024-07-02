#include "pch.h"
#include "iostream"
using namespace System;
using namespace std;

const int meses = 12;
const int agencias = 5;

void leer_ventas_agencia(int M[][agencias])
{
    for (int i = 0; i < meses; i++)
    {
        for (int j = 0; j < agencias; j++)
        {
            cout << "Ingrese datos de la agencia " << j + 1 << " ";
            cout << "en el mes "<< i + 1 << ": ";
            cin >> M[i][j];
        }
    }
}

void generar_ventas_aleatoria(int M[][agencias])
{
    for (int i = 0; i < meses; i++)
    {
        for (int j = 0; j < agencias; j++)
        {
            M[i][j] = rand() % 10;
        }
    }
}
void mostrar_matriz_ventas(int M[][agencias])
{
    for (int i = 0; i < meses; i++)
    {
        for (int j = 0; j < agencias; j++)
        {
            cout << M[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
}

void mostrar_resumen_de_ventas_por_agencia(int M[][agencias])
{
    int tmp = 0;
    for (int i = 0; i < agencias; i++)
    {
        for (int j = 0; j < meses; j++)
        {
            tmp += M[i][j];
        }
        cout << "Las ventas totales para la agencia " << i + 1;
        cout << " fueron: " << tmp << endl;
        tmp = 0;
    }
    cout << endl;
}

void mostrar_total_venta_agencia3(int M[][agencias])
{
    //Agencia 3 esta en la columna 2
    int agencia3 = 2;
    int suma = 0;

    for (int i = 0; i < meses; i++)
    {
        suma += M[i][agencia3];
    }
    cout << "Las ventas totales de la agencia 3 fueron: ";
    cout << suma << endl << endl;
}

void mostrar_promedio_ventas_diciembre(int M[][agencias])
{
    // El mes de diciembre esta en la fila 12
    int diciembre = 11;
    int suma = 0;
    for (int i = 0; i < agencias; i++)
    {
        suma += M[diciembre][i];
    }
    cout << "El promedio de ventas para el mes de diciembre fue: ";
    cout << float(suma) / agencias << endl << endl;
}

void mostrar_mayores_ventas_mayo(int M[][agencias])
{
    // El mes de mayo esta fila 5
    int mayo = 4;
    int mayor_venta = M[mayo][0];
    for (int i = 1; i < agencias; i++)
    {
        mayor_venta = max(mayor_venta, M[mayo][i]);
    }
    for (int i = 1; i < agencias; i++)
    {
        if (mayor_venta == M[mayo][i])
        {
            cout << "La agencias " << i + 1 << " tuvo la mayor venta " << endl;
            break;
        }
    }
    cout << endl;
}

void mostrar_menores_ventas(int M[][agencias])
{
    int tmp = 0;
    int menor_venta = 900000000;

    for (int i = 0; i < meses; i++)
    {
        tmp = 0;
        for (int j = 0; j < agencias; j++)
        {
            tmp += M[i][j];
        }
        menor_venta = min(menor_venta, tmp);
    }

    for (int i = 0; i < meses; i++)
    {
        tmp = 0;
        for (int j = 0; j < agencias; j++)
        {
            tmp += M[i][j];
        }

        if (tmp== menor_venta)
        {
            cout << "El mes con menos ventas es: " << i + 1 <<endl;
            break;
        }
    }
    cout << endl;
}

int main()
{
    srand(time(nullptr));
    int M[meses][agencias];
    generar_ventas_aleatoria(M);
    mostrar_matriz_ventas(M);
    mostrar_resumen_de_ventas_por_agencia(M);
    mostrar_total_venta_agencia3(M);
    mostrar_promedio_ventas_diciembre(M);
    mostrar_mayores_ventas_mayo(M);
    mostrar_menores_ventas(M);
    system("pause>0");
    return 0;
}

#include "pch.h"
#include "iostream"
using namespace System;
using namespace std;

const int filas = 6;
const int columnas = 8;

void generar_luminosidad_tabla_A(int A[][columnas])
{
    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
            A[i][j] = rand() % 11;
        }
    }

}

void imprimir_tabla_A(int A[][columnas])
{
    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
            cout << A[i][j] << "\t";
        }
        cout << endl;
    }
    cout << endl;
}

void analizar_tablas(int A[][columnas], int B[][columnas])
{
    int suma;

    //llenamos la tabla B de 0
    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
            B[i][j] = 0;
        }
    }

    //Analizamos la tabla A
    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
            suma = A[i][j] + A[i - 1][j] + A[i + 1][j] +
                A[i][j - 1] + A[i][j + 1];

            /*
            if (suma > 30) {
                B[i][j] = 1;
            }
            else {
                B[i][j] = 0;
            }
            */
            B[i][j] = (suma > 30 ? 1 : 0);
        }
    }
}

void imprimir_tabla_B(int B[][columnas])
{
    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
            /*
            if (B[i][j]) {
                cout << "* ";
            }
            else {
                cout << "- ";
            }
            */
            cout << (B[i][j] ? "*\t" : "-\t");
        }
        cout << endl;
    }
}

int main()
{
    int A[filas][columnas];
    int B[filas][columnas];

    generar_luminosidad_tabla_A(A);
    imprimir_tabla_A(A);
    analizar_tablas(A, B);
    cout << endl;
    imprimir_tabla_B(B);
    system("pause>0");
    return 0;
}

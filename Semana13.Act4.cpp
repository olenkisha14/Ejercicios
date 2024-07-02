#include "pch.h"
#include "iostream"
using namespace System;
using namespace std;

int obtener_validacion(int lim_inf, int lim_sup)
{
    int n;
    do
    {
        cout << "Ingrese valor de n: "; cin >> n;
    } while (n < lim_inf || n > lim_sup);
    system("cls");
    cout << "Ingrese valor de n: " << n << endl;
    return n;
}

void generar_valores_matriz_cuadrada(int** M, int lado)
{
    for (int i = 0; i < lado; i++)
    {
        for (int j = 0; j < lado; j++)
        {
            M[i][j] = rand() % 21;
        }
    }
}


void iniciar_matriz_en_cero(int** MR, int lado)
{
    for (int i = 0; i < lado; i++)
    {
        for (int j = 0; j < lado; j++)
        {
            MR[i][j] = 0;
        }
    }
}

void imprimir_matriz_cuadrada(int** M, int lado)
{
    for (int i = 0; i < lado; i++)
    {
        for (int j = 0; j < lado; j++)
        {
            cout << M[i][j] << "\t";
        }
        cout << endl;
    }
    cout << endl;
}

void calcular_matriz_resultante(int** MR, int** M, int lado)
{
    for (int i = 0; i < lado; i++)
    {
        for (int j = 0; j < lado; j++)
        {
            MR[i][j] = M[i][j] + M[i][j];
        }
    }
}

int main()
{
    srand(time(nullptr));
    int n = obtener_validacion(2, 50);

    int** M, ** MR;//matriz resultante
    M = new int* [n];
    MR = new int* [n];

    for (int i = 0; i < n; i++)
    {
        M[i] = new int[n];
        MR[i] = new int[n];
    }
    generar_valores_matriz_cuadrada(M, n);
    imprimir_matriz_cuadrada(M, n);
    iniciar_matriz_en_cero(MR, n);
    calcular_matriz_resultante(MR, M, n);
    imprimir_matriz_cuadrada(MR, n);

    delete[] M;
    delete[] MR;
    system("pause>0");
    return 0;
}

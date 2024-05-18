#include "pch.h"
#include "iostream"
using namespace System;
using namespace std;

int leer_n()
{
    int n;
    if (n > 2 || n < 10) 
    {
        do
        {
            cout << "Ingrese el valor de N: "; cin >> n;
        } while (n < 2 || n > 10);

    }
    else
    {
        cout << "ERROR: Ingrese un numero entre 3 y 10.";
    }
    return n;
}

void dibujar_cuadrado(int identificador, int espacios)
{
    int lado = 4;
    //horizontal del cuadrado
    for (int i = 1; i <= lado; i++)
    {
        //dibujar espacios
        for (int e = 1; e <= espacios; e++)
        {
            cout << "  ";
        }
        //dibujar horizontal
        for (int j = 1; j <= lado; j++)
        {
            if (i == 3 && j == 2)
            {
                cout << " " << identificador;
            }
            else
            {
                cout << " *";
            }
        }
        cout << endl;
    }

}

void ejer2_b()
{
    int n = leer_n();

    //cuadrado
    for (int i = 1; i <= n; i++)
    {
        //para la cantidad de cuadrado por identificador
        for (int j = 1; j <= i; j++)
        {
            dibujar_cuadrado(i, 4 * (j - 1));
        } 
        cout << endl;
    }

}

int main()
{
    Console::SetWindowSize(60, 30);

    leer_n();
    ejer2_b();
    system("pause>0");
    return 0;
}

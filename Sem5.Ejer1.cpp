#include "pch.h"
#include "iostream"
using namespace System;
using namespace std;

int leer_n()
{
    int N;
    if (N > 3 || N < 10)
    {
        do
        {
            cout << "Ingrese el valor de N: "; cin >> N;
        } while (!(N > 2 || N < 10));
    }
    else
    {
        cout << "ERROR: Ingrese un numero entre 3 y 10.";
    }

    return N;
}

void dibujar_triangulo(int identificador, int espacios)
{
    int lado = 4;
    //dibujo lineas verticales
    for (int i = 1; i <= lado; i++)
    {
        //dibujo los espacios
        for (int e = 1; e <= espacios; e++)
        {
            cout << "  ";
        }

        //didibujo mis lineas horizontales
        for (int j = 1; j <= i; j++)
        {
            if (i == 3 && j == 2)
            {
                cout << identificador << " ";
            }
            else
            {
                cout << " *";
            }
        }
        cout << endl;
    }
}

void ejer1_B()
{
    int n = leer_n();

    //configuracion triangulo segun n
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            dibujar_triangulo(i, 4 * (j - 1));
        }

        cout << endl;
    }

}

int main()
{
    Console::SetWindowSize(60, 30);
    leer_n();
    ejer1_B();
    system("pause>0");
    return 0;
}

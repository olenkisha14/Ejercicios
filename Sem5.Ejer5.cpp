#include "pch.h"
#include "iostream"
using namespace System;
using namespace std;


//Funcion cursor
void cursor(int a, int b)
{
    Console::SetCursorPosition(a, b);
}

int leer_n()
{
    int n;
    do
    {
        cout << "Ingrese un numero: "; cin >> n;
    } while (n < 1 || n > 5);
    return n;
}

void cuadrado_hueco(int valor, int espacio)
{
    int lado = 4;
    for (int i = 1; i <= lado; i++)
    {
        for (int e = 1; e <= espacio; e++)
        {
            cout << "  ";
        }
        for (int j = 1; j <= lado; j++)
        {
            if (i == 1 || i == lado || j == lado || j == 1)
            {
                cout << " " << valor;
            }
            else
            {
                cout << "  ";
            }
        }
        cout << endl;
    }
}

void ejer5_b()
{
    int n = leer_n();
    int espacio = 2 * (n - 1);
    // Primera parte: escalera creciente
    for (int i = 1; i <= 2; i++)
    {
        cuadrado_hueco(i, 4 * (i - 1));
    }

    // Segunda parte: escalera decreciente
    for (int i = 3; i <= n; i++)
    {
        // Espacio para la segunda parte
        if (i == 3) {
            for (int j = 1; j <= 2; j++) {
                cuadrado_hueco(j, espacio + 8);
                espacio -= 4;
            }
        }
        cuadrado_hueco(i, 4 * (i - 1));
    }
}

int main()
{
    Console::SetWindowSize(80, 40);
    leer_n();
    ejer5_b();
    system("pause>0");
    return 0;
}

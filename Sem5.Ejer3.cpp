#include "pch.h"
#include "iostream"
using namespace System;
using namespace std;

char numero_random()
{
    //rand() % (max - min + 1) + min);
    return rand() % (90 - 65 + 1) + 65;
}

int leer_n()
{
    int n; 
    while (n < 2 || n > 10) 
    {
        cout << "Ingrese cantidad de figuras: "; cin >> n;
    }
    return n;
}

void dibujar_cuadrado(int espacios)
{
    int lado = 4;

    for (int i = 1; i <= lado; i++)
    {
        for (int e = 1; e <= espacios; e++)
        {
            cout << "  ";
        }
        for (int j = 1; j <= lado; j++)
        {
            if (i == 1 || j == lado || j == 1 || i == lado)
            {
                cout << numero_random();
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;

    }

}

void ejer3_b()
{
    int n = leer_n();

    //cuantos cuadrados se generarán
    for (int i = 1; i <= n; i++)
    {
        //seria de cuadrados con el mismo numero
        for (int j = 1; j <= 1; j++)
        {
            dibujar_cuadrado(20);
        }
        cout << endl;
    }
}

int main()
{
    Console::SetWindowSize(80, 40);
    srand(time(nullptr));

    leer_n();
    ejer3_b();
    system("pause>0");
    return 0;
}

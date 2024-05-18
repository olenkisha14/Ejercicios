#include "pch.h"
#include "iostream"
using namespace System;
using namespace std;

int leer_n()
{
    int n;
    do
    {
        cout << "Ingrese el valor de n: "; cin >> n;
    } while (n < 3 || n > 10);
    return n;
}

void dibujar_cuadrado_hueco(int valor)
{
    int ladov = 5;
    int ladoh = 10;
    for (int i = 1; i <= ladov; i++)
    {
        for (int j = 1; j <= ladoh; j++)
        {
            if (i == 1 || j == ladoh || i == ladov || j == 1)
            {
                cout << valor;
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl; 
    }
}

void ejer4_b()
{
    int n = leer_n();
    //i = n, donde n es el valor ingresado por el usuario,
    // y continúa hasta que i sea igual a 1 (parametro).
    for (int i = n; i >= 1; i--)// i --´para decrecer
    {
            dibujar_cuadrado_hueco(i);

    }
}


int main()
{
    Console::SetWindowSize(80, 40);
    leer_n();
    ejer4_b();
    system("pause>0");
    return 0;
}

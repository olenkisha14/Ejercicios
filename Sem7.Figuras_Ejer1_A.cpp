#include "pch.h"
#include "iostream"
using namespace System;
using namespace std;

char letra_rand()
{
    return rand() % (90 - 65 + 1) + 65;
}

int leer_n()
{
    int n;
    cout << "Ingrese un numero entre 3 y 10: "; cin >> n;

    do
    {
        cout << "Ingrese un numero entre 3 y 10: "; cin >> n;
    } while (n < 2 || n > 10);

    return n;
}

void ejer1_A_parte1(int espacio)
{
    int lado = 4;
    for (int i = lado; i >= 1; i--)
    {

        // Imprimir espacios
        for (int e = 1; e <= lado - i; e++)
        {
            cout << " ";
        }

        // Imprimir caracteres
        if (i == 1 || i == lado) // Si es la primera o última línea, imprimir
            //caracteres en todas las posiciones
        {
            for (int j = 1; j <= i * 2 - 1; j++)
            {
                cout << letra_rand();
            }
        }
        else // Si no, imprimir solo en la primera y última posición
        {
            cout << letra_rand();
            for (int k = 1; k <= (i - 1) * 2 - 1; k++)
            {
                cout << " ";
            }
            cout << letra_rand();
        }

        cout << endl;
    }
 }

void ejer1_A(int espacio)
{
    int lado = 4;
    for (int i = 1; i <= lado; i++)
    {

        // Imprimir espacios
        for (int e = 1; e <= lado - i; e++)
        {
            cout << " ";
        }

        // Imprimir caracteres
        if (i == 1 || i == lado) // Si es la primera o última línea, imprimir caracteres en todas las posiciones
        {
            for (int j = 1; j <= i * 2 - 1; j++)
            {
                cout << letra_rand();
            }
        }
        else // Si no, imprimir solo en la primera y última posición
        {
            cout << letra_rand();
            for (int k = 1; k <= (i - 1) * 2 - 1; k++)
            {
                cout << " ";
            }
            cout << letra_rand();
        }

        cout << endl;
    }
}


void grafica()
{
    int n = leer_n();

    for (int i = 1; i <= n; i++)
    {
        ejer1_A_parte1(12); // Pirámide invertida
        ejer1_A(12);        // Pirámide normal
        cout << endl;
    }
}

int main()
{
    srand(time(0));
    Console::SetWindowSize(80, 40);
    leer_n();
    grafica();

    system("pause>0");
    return 0;
}

#include "pch.h"
#include "iostream"
#define N_SATELITES 4
#define WIDTH 80
#define HEIGHT 40
using namespace System;
using namespace std;

void cursor(int x, int y)
{
    Console::SetCursorPosition(x, y);
}

void validar_limites(int& num, int lim_inf, int lim_sup)
{
    do
    {
        cin >> num;
        if(num < lim_inf || num > lim_sup)
        {
            cout << "Fuera de los limites, intentelo de nuevo: "; cin >> num;
        }
    } while (num < lim_inf || num > lim_sup);
}

void ingresar_posicion_satelites(int posicionX_satelite[], int posicionY_satelite[], int dx_satelite[], int dy_satelite[])
{
    cout << "Ingrese las posiciones X de cada uno de los satelites: ";
    for (int i = 0; i < N_SATELITES; i++)
    {
        validar_limites(posicionX_satelite[i], 0, WIDTH);
    }

    cout << "Ingrese las posiciones Y de cada uno de los satelites: ";
    for (int i = 0; i < N_SATELITES; i++)
    {
        validar_limites(posicionY_satelite[i], 0, HEIGHT);
    }

    cout << "Ingrese el desplazamiento en X de los satelites: "; 
    for (int i = 0; i < N_SATELITES; i++)
    {
        validar_limites(dx_satelite[i], -1, 1);
    }

    cout << "Ingrese el desplazamiento en Y de los satelites: ";
    for (int i = 0; i < N_SATELITES; i++)
    {
        validar_limites(dy_satelite[i], -1, 1);
    }
}

void borrar_satelites(int posicionX_satelite[], int posicionY_satelite[])
{
    for (int i = 0; i < N_SATELITES; i++)
    {
        cursor(posicionX_satelite[i], posicionY_satelite[i]);
        cout << " ";
    }
}

void dibujar_satelites(int posicionX_satelite[], int posicionY_satelite[], char forma_satelite[], int color_satelite[])
{
    /*
    Console::ForegroundColor = ConsoleColor::Green;
    cursor(posicionXSatelite[0], posicionYSatelite[0]);
    cout << '0';

    Console::ForegroundColor = ConsoleColor::Red;
    cursor(posicionXSatelite[1], posicionYSatelite[1]);
    cout << '1';

    Console::ForegroundColor = ConsoleColor::Yellow;
    cursor(posicionXSatelite[2], posicionYSatelite[2]);
    cout << '2';

    Console::ForegroundColor = ConsoleColor::White;
    cursor(posicionXSatelite[3], posicionYSatelite[3]);
    cout << '3';
    */

    for (int i = 0; i < N_SATELITES; i++)
    {
        Console::ForegroundColor = ConsoleColor(color_satelite[i]);
        cursor(posicionX_satelite[i], posicionY_satelite[i]);
        cout << forma_satelite[i];
    }
}

void simulacion_movimiento(int posicionX_satelite[], int posicionY_satelite[], int dx_satelite[], int dy_satelite[])
{
    for (int i = 0; i < N_SATELITES; i++)
    {
        // Evaluamos si esta a la izquierda o derecha
        if (posicionX_satelite[i] < WIDTH / 2)
        {
            // rebote de 0 a la mitad
            if (posicionX_satelite[i] + dx_satelite[i] < 0 || posicionX_satelite[i] + dx_satelite[i] >= WIDTH / 2)
            {
                dx_satelite[i] *= -1;
            }
        }
        else
        {
            if (posicionX_satelite[i] + dx_satelite[i] <= WIDTH / 2 || posicionX_satelite[i] + dx_satelite[i] >= WIDTH)
            {
                dx_satelite[i] *= -1;
            }
            // rebote de mitad a el total
        }

        // Rebotamos arriba o abajo
        if (posicionX_satelite[i] + dx_satelite[i] < 0 || posicionX_satelite[i] + dx_satelite[i] >= HEIGHT)
        {
            dy_satelite[i] *= -1;
        }
        posicionX_satelite[i] += dx_satelite[i];
        posicionX_satelite[i] += dy_satelite[i];

    }
}

void ejer()
{
    int posicionX_satelite[N_SATELITES];
    int posicionY_satelite[N_SATELITES];
    int dx_satelite[N_SATELITES];
    int dy_satelite[N_SATELITES];

    //Adicional
    char forma_satelite[N_SATELITES];
    int color_satelite[N_SATELITES];

    for (int i = 0; i < N_SATELITES; i++)
    {
        forma_satelite[i] = rand() % (47 - 33 + 1) + 33;
        color_satelite[i] = rand() % (15 - 11 + 1) + 11;
    }

    ingresar_posicion_satelites(posicionX_satelite, posicionY_satelite, dx_satelite, dy_satelite);
    Console::Clear();

    while (1)
    {
        borrar_satelites(posicionX_satelite, posicionY_satelite);
        simulacion_movimiento(posicionX_satelite, posicionY_satelite, dx_satelite, dy_satelite);
        dibujar_satelites(posicionX_satelite, posicionY_satelite, forma_satelite, color_satelite);
        _sleep(120);
    }
}

int main()
{
    Console::SetWindowSize(WIDTH, HEIGHT);
    Console::CursorVisible = false;
    srand(time(nullptr));
    ejer();
    system("pause>0");
    return 0;
}

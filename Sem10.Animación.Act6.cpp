#include "pch.h"
#include "iostream"
#define WIDTH 80
#define HEIGHT 40
using namespace System;
using namespace std;

void ventana()
{
    Console::CursorVisible = false;
}

void cursor(int x, int y)
{
    Console::SetCursorPosition(x, y);
}

void borrar(int x, int y, int ancho)
{
    for (int i = 0; i < ancho; i++)
    {
        cursor(x + i, y);
        cout << " ";
    }
}

void dibujar(int x, int y, int ancho)
{
    for (int i = 0; i < ancho; i++)
    {
        cursor(x + i, y);
        cout << "*";
    }
}

void mover(int& x, int& y, int& dx, int& dy, int ancho)
{
    //se actualizan por los valores dx y dy,
    //que determinan la dirección y la velocidad del movimiento.
    if (x + dx < 0 || x + ancho + dx >= WIDTH)
    {
        dx *= -1;
    }
    if (y + dy < 0 || y + dy >= HEIGHT)
    {
        dy *= -1;
    }
    x += dx;
    y += dy;
}

bool colisionar(int xc, int yc, int x2, int y2, int ancho2)
{
    for (int i = 0; i < ancho2; i++)
    {
        if (yc == y2 && xc == x2 + i)
        {
            return true;
        }
    }
    return false;
}

void ejercicio_6()
{
    int xc, yc, dxc, dyc;
    //arr figuras
    int num_figuras = rand() % 6 + 3;
    int* arrx, * arry, * arrdx, * arrdy, * arrAnchos;
    arrx = new int[num_figuras];
    arry = new int[num_figuras];
    arrdx = new int[num_figuras];
    arrdy = new int[num_figuras];
    arrAnchos = new int[num_figuras];

    //asignamos valores
    xc = 0;
    yc = HEIGHT - 1;
    dxc = 1;
    dyc = 0;

    for (int i = 0; i < num_figuras; i++)
    {
        arrx[i] = rand() % WIDTH;//posicion aleatoria
        arry[i] = rand() % HEIGHT;
        arrdx[i] = rand() % 2; // velocidad aleatoria
        arrdy[i] = rand() % 2;
        arrAnchos[i] = rand() % 3 - 2;
    }

    arrx[0] = WIDTH - 15;
    arry[0] = HEIGHT - 1;
    arrdx[0] = -1;
    arrdy[0] = 0;
    arrAnchos[0] = 9;

    while (1)
    {
        cursor(xc, yc);
        cout << " ";
        for (int i = 0; i < num_figuras; i++)
        {
            borrar(arrx[i], arry[i], arrAnchos[i]);
        }
        mover(xc, yc, dxc, dyc, 1);
        for (int i = 0; i < num_figuras; i++)
        {
            mover(arrx[i], arry[i], arrdx[i], arrdy[i], arrAnchos[i]);
        }
        ////comprobamos colision
        //for (int i = 0; i < num_figuras; i++)
        //{
        //    if(colisionar(xc, yc, arrx[i], arry[i], arrAnchos[i]));
        //    {
        //        Console::Clear();
        //        cout << "Colisionaron...";
        //        system("pause>0");
        //    }
        //}
        cursor(xc, yc);
        cout << "o";
        for (int i = 0; i < num_figuras; i++)
        {
            dibujar(arrx[i], arry[i], arrAnchos[i]);
        }
        
    }
    // Liberar memoria
    delete[] arrx;
    delete[] arry;
    delete[] arrdx;
    delete[] arrdy;
    delete[] arrAnchos;
 
}

int main()
{
    srand(time(nullptr));
    ejercicio_6();
    system("pause>0");
    return 0;
}

#include "pch.h"
#include "iostream"
#include "conio.h"
using namespace System;
using namespace std;

void cursor(int x, int y)
{
    Console::SetCursorPosition(x, y);
}

void ventana()
{
    Console::SetWindowSize(40, 20);
    Console::CursorVisible = false;
}

void ejer1_A()
{
    int Ix = 13, Iy = 5, Cx = 19, Cy = 5, Dx =  17, Dy = 7;
    int dix = 0, diy = 0, dcx = 0, dcy = 0, ddx = 0, ddy = 0;
    int colision = 0;
    cursor(Ix, Iy); cout << "I";
    cursor(Cx, Cy); cout << "C";
    cursor(Dx, Dy); cout << "D";

    while (1)
    {
        //borrar
        cursor(Ix, Iy); cout << " ";
        cursor(Cx, Cy); cout << " ";
        cursor(Dx, Dy); cout << " ";

        if (_kbhit())
        {
            char tecla = getch();
            switch (tecla)
            {
                //mover1
            case 'I': 
            case 'i':
                diy = 1;
                break;
                //mover2
            case 'C':
            case 'c':
                dcx = 1;
                break;
                //mover3
            case 'D':
            case 'd':
                ddx = 1;//No cambiamos D para que se mueva por toda la pantalla
                ddy = -1;
                break;
            case 'P': 
            case 'p':
                diy = 0;
                dcx = 0;
                ddx = 0;
                return;
            }
        } 
        //Mover caracteres
        Iy += diy;
        Cx += dcx;
        Dx += ddx;

        // Verificar colisión de "I" con los bordes verticales y cambiar dirección vertical
        if (Iy < 1 || Iy >= 19)
        {
            diy *= -1;
        }

        // Verificar colisión de "C" con los bordes horizontales y cambiar dirección horizontal
        if (Cx < 1 || Cx >= 39)
        {
            dcx *= -1;
        }

        // Verificar colisión de "D" con los bordes verticales y cambiar dirección vertical
        if (Dy < 1 || Dy >= 39)
        {
            ddy *= -1;
        }

        // Verificar colisión de "D" con los bordes horizontales y cambiar dirección horizontal
        if (Dx < 1 || Dx >= 19)
        {
            ddx *= -1;
        }

        Dx += ddx;
        Dy += ddy;


        //dibujar
        cursor(Ix, Iy); cout << "I";
        cursor(Cx, Cy); cout << "C";
        cursor(Dx, Dy); cout << "D";


       // Detectar colisión entre los caracteres y sumar al contador de colisiones
        if ((Ix == Cx && Iy == Cy) || (Ix == Dx && Iy == Dy) || (Cx == Dx && Cy == Dy))
        {
            colision++;
            cursor(0, 0);
            cout << "Colisiones: " << colision;
        }

        _sleep(100);
    }
}

int main()
{
    ventana();
    ejer1_A();

    system("pause>0");
    return 0;
}

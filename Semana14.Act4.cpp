
#include "pch.h"
#include "iostream"
#include "conio.h"
using namespace System;
using namespace std;

const int filas = 40;
const int columnas = 40;

int** generar_matriz(int filas, int columnas)
{
    int** matriz = new int* [filas];
    for (int i = 0; i < filas; i++)
    {
        matriz[i] = new int[columnas];
    }
    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
            if (i == 0 || i == filas - 1 || j == 0 || j == columnas - 1 || i == filas - 10)
            {
                matriz[i][j] = 1;
            }
            else
            {
                matriz[i][j] = 0;
            }
        }
    }
    return matriz;
}

// Función para mostrar la matriz con 1 como color negro y 0 como color blanco
void mostrar_matriz(int** matriz, int filas, int columnas, int posX, int posY)
{
    system("cls"); // Limpiar la pantalla
    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
            if (i == posY && j == posX)
            {
                Console::ForegroundColor = ConsoleColor::Blue;
                cout << (char)177; // Satélite en azul
            }
            else if (matriz[i][j] == 1)
            {
                Console::ForegroundColor = ConsoleColor::Black;
                cout << (char)219;
            }
            else if (matriz[i][j] == 0)
            {
                Console::ForegroundColor = ConsoleColor::White;
                cout << (char)219;
            }

        }
        cout << endl;
    }
}

void validar_limites(int& num, int lim_inf, int lim_sup)
{
    do
    {
        cin >> num;
        if (num < lim_inf || num > lim_sup)
        {
            cout << "Fuera de los limites, intentelo de nuevo: "; cin >> num;
        }
    } while (num < lim_inf || num > lim_sup);
}

void ingresar_posicion_satelite(int& posicionX_satelite, int& posicionY_satelite)
{
    cout << "Ingrese la posición X del satélite: ";
    validar_limites(posicionX_satelite, 1, filas - 2);

    cout << "Ingrese la posición Y del satélite: ";
    validar_limites(posicionY_satelite, 1, columnas - 2);
}

// Mover el satélite con las teclas w, s, a, d
void mover_satelite(int** matriz, int& posX, int& posY)
{
    char tecla;
    while (true)
    {
        
        tecla = _getch(); // Leer tecla presionada
        switch (tecla)
        {
        case 'w':
            if (posY > 1) posY--; // Mover hacia arriba
            break;
        case 's':
            if (posY < columnas - 2) posY++; // Mover hacia abajo
            break;
        case 'a':
            if (posX > 1) posX--; // Mover hacia la izquierda
            break;
        case 'd':
            if (posX < filas - 2) posX++; // Mover hacia la derecha
            break;
        default:
            return; // Salir si se presiona cualquier otra tecla
        }
        
        mostrar_matriz(matriz, filas, columnas, posX, posY);
    }
}


int main()
{
    int posX, posY;

    int** matriz = generar_matriz(filas, columnas);

    // Ingresar la posición inicial del satélite
    ingresar_posicion_satelite(posX, posY);

    cout << "Matriz generada con el satélite:" << endl;
    mostrar_matriz(matriz, filas, columnas, posX, posY);

    cout << "Usa 'w', 's', 'a', 'd' para mover el satélite. Presiona cualquier otra tecla para salir." << endl;

    mover_satelite(matriz, posX, posY);

    // Liberar memoria
    for (int i = 0; i < filas; i++)
    {
        delete[] matriz[i];
    }
    delete[] matriz;
    system("pause>0");
    return 0;
}

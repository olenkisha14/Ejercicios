#include "pch.h"
#include "Header.h"
using namespace System;

int main()
{
    srand(time(nullptr));
    int op_menu;
    int* arreglo;
    arreglo = nullptr;
    int N = 0;

    while (1)
    {
        op_menu = menu();
        Console::Clear();
        if (op_menu == 1)
        {
            generar_valores(arreglo, N);
            
        }
        else if (op_menu == 2)
        {
            int num;
            cout << "Ingrese un número a agregar: ";
            cin >> num;
            agregar_numero(arreglo, N, num);
        }
        
    }

    delete[] arreglo;
    system("pause>0");
    return 0;
}
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
            arreglo = generar_valores(arreglo, N);

        }
        else if (op_menu == 2)
        {
            listar_arreglo(arreglo, N);
        }
        else if (op_menu == 3)
        {
            ordenar_por_burbuja(arreglo, N);
        }
        else if (op_menu ==4)
        {
            // Leer un número entero R positivo (entre 2 y 5 inclusive)
            int R;
            do {
                cout << "Ingrese un número entero R (entre 2 y 5 inclusive): ";
                cin >> R;
            } while (R < 2 || R > 5);

            // Eliminar repeticiones adicionales antes de modificar el arreglo
            valor_unico(arreglo, N);

            // Modificar el arreglo para que los valores ordenados se repitan R veces
            modificar_arreglo(arreglo, N, R);
            // Imprimir el arreglo modificado
            cout << "Arreglo modificado con valores repetidos " << R << " veces:" << endl;
            listar_arreglo(arreglo, N * R); // Imprimir todo el arreglo modificado

        }

    }

    delete[] arreglo;
    system("pause>0");
    return 0;
}

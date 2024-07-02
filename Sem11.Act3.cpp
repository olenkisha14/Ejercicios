#include "pch.h"
#include "Header.h"
using namespace System;


int main()
{
    srand(time(nullptr));
    int* arreglo;
    int op_menu;
    arreglo = nullptr;
    int N = 0;
    generar_valor(arreglo, N);

    while (1)
    {
        op_menu = menu();
        Console::Clear();
        if (op_menu == 1)
        {
            arreglo = generar_valor(arreglo, N);
        }
        if (op_menu == 2)
        {
            listar_notas(arreglo, N);
        }
        if (op_menu == 3)
        {
            ordenar_por_burbuja(arreglo, N);
        }
        if (op_menu == 4)
        {
            repeticiones_conteo(arreglo, N);
        }
        if (op_menu == 5)
        {
            valor_unico(arreglo, N);
        }
    }
    delete[] arreglo;
    system("pause>0");
    return 0;
}

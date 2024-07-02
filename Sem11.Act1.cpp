#include "pch.h"
#include "Header.h"

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
            listar_notas(arreglo, N);
        }
        else if (op_menu == 3)
        {
            mayor_valor(arreglo, N);
        }
        else if (op_menu == 4)
        {
            menor_valor(arreglo, N);
        }
        else if (op_menu == 5)
        {
            odernar_descendente(arreglo, N);
        }
    }
    return 0;
}

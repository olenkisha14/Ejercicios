#include "pch.h"
#include "iostream"
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
            
            arreglo = generar_notas(arreglo, N);
        }
        else if (op_menu == 2)
        {
            listar_notas(arreglo, N);
        }
        if (op_menu == 3)
        {
            mayor_nota(arreglo, N);
        }
        if (op_menu == 4)
        {
            menor_nota(arreglo, N);
        }
        if (op_menu == 5)
        {
            mostrar_nota_promedio(arreglo, N);
        }

        else if (op_menu == 7)
        {
            odernar_descendente(arreglo, N);
            cout << "Notas de forma descendente" << endl;
            
            break;
        }
    }


    system("pause>0");
    return 0;
}

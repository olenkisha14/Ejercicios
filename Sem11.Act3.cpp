#include "pch.h"
#include "Header.h"
using namespace System;


int main()
{
    srand(time(nullptr));
    int* arreglo;
    arreglo = nullptr;
    int N = 0;
    generar_valor(arreglo, N);
    


    delete[] arreglo;
    system("pause>0");
    return 0;
}

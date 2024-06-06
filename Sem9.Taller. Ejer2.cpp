#include "pch.h"
#include "iostream"
using namespace System;
using namespace std;

void imprimirNumeroCompleto(float* pr, float *pi)
{
    cout << "(" << *pr << "+";
    if (*pi != 1) cout << *pi; // para que no imprima 1;
    else { cout << *pi << "i)"; }
}

void ejercicio2() 
{
    float* pr1, * pi1;
    float* pr2, * pi2;
    pr1 = new float;
    pi1 = new float;
    pr2 = new float;
    pi2 = new float;
}

int main()
{
    ejercicio2();
    system("pause>0");
    return 0;
}

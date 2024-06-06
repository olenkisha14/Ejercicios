#include "pch.h"
#include "iostream"
using namespace System;
using namespace std;

void incrementar_numero(float *ptNum)
{
    *ptNum = *ptNum + 5;//el puntero puedes modificar los valores de manera segura
    cout << "El numero en la funcion es: " << *ptNum << endl;
}
void teoria()
{
    int num = 5;

}

void generar_valor(int *a, int *b, int *c, int *d)
{
    do
    {
        //generar los numeros
        *a = rand() % 40 + 1;
        *b = rand() % 40 + 1;
        *c = rand() % 40 + 1;
        *d = rand() % 40 + 1;
    } while (*a == *b || *a == *d || *b == *c || *b == *d || *c == *d);
}

void imprimir_numeros(int* a, int* b, int* c, int* d)
{
    cout << "a: " << *a << endl;
    cout << "b: " << *a << endl;
    cout << "c: " << *a << endl;
    cout << "d: " << *a << endl;
}

int hallar_mayor(int* a, int* b, int* c, int* d)
{ 
    //max(int n1, int n2) --> mayor
    //

}

int hallar_menor(int* a, int* b, int* c, int* d)
{

}

void intercambiar()
{
    //el auxioliar para almacenar momentaneamente un valor

}

void ordenar(int* a, int* b, int* c, int* d)
{

}

void dibujar_escalon(int* num, int *alt)
{
    //si tiene 2 cifras
    if (*num > 9)
    {
        Console::SetCursorPosition(78 - *num, 4);
    }
    else {
        Console::SetCursorPosition(79 - *num, 4);
    }
    cout << *num;
    for (int i = 0; i < *num; i++)
    {
        cout << "*";
    }
    *alt = *alt + 1;
}

void graficar(int* a, int* b, int* c, int* d)
{
    Console::SetCursorPosition(79 - *a, 2);
    cout << *a;
    for (int i = 0; i < *a; i++)
    {
        cout << "*";
    }

    // *b
    Console::SetCursorPosition(79 - *b, 3);
    cout << *b;
    for (int i = 0; i < *b; i++)
    {
        cout << "*";
    }
    // *c
    if (*c > 9)
    {
        Console::SetCursorPosition(79 - *c - 1, 4);
    }
    else {
        Console::SetCursorPosition(79 - *c, 4);
    }
    cout << *c;
    for (int i = 0; i < *c; i++)
    {
        cout << "*";
    }

    // *d
    Console::SetCursorPosition(79 - *d, 5);
    cout << *d;
    for (int i = 0; i < *d; i++)
    {
        cout << "*";
    }
}

int main()
{
    srand(time(nullptr));
    int* a, * b, *c, * d;
    a = new int;
    b = new int;
    c = new int;
    d = new int;
    generar_valor(a, b, c, d);
    imprimir_numeros(a, b, c, d);
    cout << "El mayor es: " << hallar_mayor(a, b, c, d) << endl;
    cout << "El menor es: " << hallar_menor(a, b, c, d) << endl;
    cout << "El anterior al mayor es: "
    ordenar(a, b, c, d);
    cout << "Los numeros fueron ordenados: ";
    imprimir_numeros(a, b, c, d);
    delete a;
    delete b;
    delete c;
    delete d;
    system("pause>0");
    return 0;
}

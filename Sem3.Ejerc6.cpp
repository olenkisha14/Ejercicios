#include "pch.h"
#include "iostream"
using namespace std;
using namespace System;

int suma(int a, int b)  // a y b solo se conocen dentro de la función
{
    return a + b;
}

int resta(int a, int b)  
{
    return a - b;
}

int multiplicacion(int a, int b)
{
    return a * b;
}

double division(double a, double b)
{
    return a / b;
}

double division2(int a, int b)
{
    return a / (b*1.0);
}

int modulo(int a, int b)
{
    return a % b;
}

int main()
{
    int n1, n2;
    //entrada
    cout << "Ingrese n1: "; cin >> n1;
    cout << "Ingrese n2: "; cin >> n2;

    cout << endl << "SUMA: " << suma (n1, n2);
    cout << endl << "RESTA: " << resta(n1, n2);
    cout << endl << "MULTIPLICACION: " << multiplicacion(n1, n2);
    cout << endl << "DIVISION: " << division(n1, n2);
    cout << endl << "DIVISION2: " << division2(n1, n2);
    cout << endl << "MODULO: " << modulo(n1, n2); 

    system("pause>0");
    return 0;
}

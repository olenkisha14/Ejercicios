#include "pch.h"
#include "iostream"
#include "math.h"
using namespace System;
using namespace std;

long long factorial(int n)
{
    long long fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact *= i;
    }
    return fact;
}

int main()
{
    int N;
    double x;

    cout << "¿Cuantos terminos?: ";
    cin >> N;

    while (N < 1 || N > 20)
    {
        cout << "Valor incorrecto." << endl;
        cout << "¿Cuantos terminos?: ";
        cin >> N;
    }

    cout << "Valor de x: ";
    cin >> x;

    while (x < -2.5 || x > 2.5)
    {
        cout << "Valor incorrecto." << endl;
        cout << "Valor de x: ";
        cin >> x;
    }

    //suma
    double suma_termino = 0.0;

    for (int k = 1; k <= N; k++)
    {
        double termino = pow(-1, k) * (pow(x, k) / factorial(k + 2));

        suma_termino += termino;
    }

    cout << "La suma de termino es: " << suma_termino << endl;

    system("pause>0");
    return 0;
}

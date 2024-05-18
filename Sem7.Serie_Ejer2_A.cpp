#include "pch.h"
#include "iostream"
#include "math.h"
using namespace System;
using namespace std;

long long factorial(int n)
{
    long long fact = 1;
    for (int i = 1;i <= n; i++)
    {
        fact *= i;
    }
    return fact;
}

int main()
{
    int N;
    double x;

    cout << "¿Cuántos términos?: ";
    cin >> N;

    while (N < 10 || N > 25)
    {
        cout << "Termino incorrecto" << endl;
        cout << "¿Cuántos términos?: ";
        cin >> N;
    }

    cout << "Valor de x: ";
    cin >> x;

    while (!(2.5 <= x || x <= 5.5))
    {
        cout << "Termino incorrecto" << endl;
        cout << "Valor de x: ";
        cin >> x;
    }

    //suma de terminos
    double suma_terminos = 0.0;
    for (int k = 1; k <= N; k++)
    {
        double termino = pow(-1, k -1) * (pow(2, k - 1) * pow(x, k)) / (factorial(k - 1));
        suma_terminos += termino;
    }

    cout << "La suma de los terminos es: " << suma_terminos << endl;

    system("pause>0");
    return 0;
}

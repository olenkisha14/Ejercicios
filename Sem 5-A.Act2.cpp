#include "pch.h"
#include "iostream"
#include "time.h"
#include "math.h"
using namespace System;
using namespace std;

 long long factorial(int a)
{
    long long res = 1;
    for (int i = 1; i <= a; i++)
    {
        res = i * res;
    }
    return res;
}

int main()
{
    int N, contar = 1;
    int expoy = 2; 
    double x, y, numerador, denominador;
    double termino, S = 0.0; 


    do
    {
        cout << "Ingrese 1 < N <= 10: "; cin >> N;
    } while (!(N > 1 && N <= 10));

    do
    {
        cout << "Ingrese 2 <= x <= 5: "; cin >> x;
    } while (!(x >= 2 && x <= 5));

    do
    {
        cout << "Ingrese 1 <= y <= 9: "; cin >> y;
    } while (!(y >= 1 && y <= 9));


    while (contar <= N)
    {
        numerador = factorial(N);
        denominador = (pow(y, expoy) * sin(x));

        termino = sqrt(x) * pow(y, 2 + x) + (numerador / denominador);

        S = S + termino;

        y *= 1; expoy++;

        contar++;
    }

    cout << "La sumatoria es: " << S << endl;

    system("pause>0");
    return 0;
}

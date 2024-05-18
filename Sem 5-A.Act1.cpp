#include "pch.h"
#include "iostream"
#include "time.h"
using namespace System;
using namespace std;

int main()
{
    int x, y, n, a;
    x = 8;
    y = 2;
    n = 10;

    long long res = 1;
    for (int i = 1; i <= a; i++)
    {
        res *= i; 
    }




    double sumatoria = 0.0;
    for (int i = 1; i <= n; i++)
    {
        sumatoria += pow(y, 2 * x) * pow(x, y) + ((x - y) * res / (pow(x, i) * pow(y, i + 1)));
    }

    cout << "SUMA: " << sumatoria;
    system("pause>0");
    return 0;
}

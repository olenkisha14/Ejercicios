#include "pch.h"
#include "iostream"
using namespace System;
using namespace std;

void ejercicio3()
{
    int n = 5;
    for (int i = 1; i <=2 * n - 1;i++)
    {
        for (int e = 1; e <= abs(n - i); e++)
        {
            cout << "  ";
        }
        int limite;
        if (i > 5)
        {
            limite = 2 * n - 1 - (2 * (i - n));
            // 2 * n - 1 = 9
        }
        else
        {
            limite = 2 * i - 2;
        }
        for (int j = 1; j <= limite; j++)
        {
            cout << j << " ";
            if (n < 9) cout << " ";
        }
        cout << endl;
    }
}

void rombo_for()
{
    int n = 5;
    for (int i = 1; i <= n;i++)
    {
        for (int e = 1; e <= abs(n - i); e++)
        {
            cout << "  ";
        }
        int limite;
        
        for (int j = 1; j <= limite; j++)
        {
            cout << j << " ";
        }
    }
    for (int i = 1; i <= n - 1;i++)
    {
        for (int e = 1; e <= i; e++)
        {
            cout << "  ";
        }
        for (int j = 1; j <= (n - i) * 2 -1; j++)
        {
            cout << j << " ";
            if (n < 9) cout << " ";
        }
        cout << endl;
    }
}


int main()
{
    ejercicio3();
    cout << endl;
    rombo_for();
    system("pause>0");
    return 0;
}

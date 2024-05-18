#include "pch.h"
#include "iostream"
using namespace System;
using namespace std;

int main()
{
    int A, B, C;

    //ENTRADA

    cout << "Ingrese A: "; cin >> A;
    cout << "Ingrese B: "; cin >> B;
    cout << "Ingrese C: "; cin >> C;

    //SALIDAS
    cout << endl << "A == B : " << (A == B);
    cout << endl << "A != B : " << (A != B);
    cout << endl << "A > B : " << (A > B);
    cout << endl << "A < B : " << (A < B);
    cout << endl << "A>0 y A<100:" << (A > 0 && A < 100);
    cout << endl << "A>0: " << (A > 0);
    cout << endl << "B>0: " << (B > 0);

    system("pause");
    return 0;
}

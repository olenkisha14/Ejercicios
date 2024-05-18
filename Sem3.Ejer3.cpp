#include "pch.h"
#include "iostream"
using namespace std;
using namespace System;

int main()
{
    int A, B, C;
    int estriangulo, escaleno, equilatero, isoceles;

    //ENTRADA

    cout << "Ingrese A: "; cin >> A;
    cout << "Ingrese B: "; cin >> B;
    cout << "Ingrese C: "; cin >> C;

    //Expresiones lógicas
    estriangulo = (A + B > C) && (A + C > B) && (B + C > A);
    escaleno = (A != B && A != C && B != C) && estriangulo == 1;
    equilatero = (A == B && B == C && C == A) && estriangulo == 1;
    isoceles = (A == B && A != C || A == C && A!= B || A != B && B == C) && estriangulo == 1;

    //salida
    cout << endl << "ES TRIANGULO ? : " << estriangulo;
    cout << endl << "ES ESCALENO ? :" << escaleno;
    cout << endl << "ES EQUILATERO ? :" << equilatero; 
    cout << endl << "ES ISOCELES ? :" << isoceles; 

    system("pause");
    return 0;
}

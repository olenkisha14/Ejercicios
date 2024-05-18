

#include <iostream>
#include <math.h>
using namespace std;


int main()
{
    //variables
    int N;
    char character;
    int r1, r2, r3, r4;
    int c1, c2, c3, c4;
    double N1;
    int p_e, p_d;
    int pe1, pe2, pe3, pe4, pe5, pe6;
    int pd1, pd2, pd3, pd4;
    int N2;
    int a1, a2, a3, a4;

    //entrada
    cout << "Ingrese su edad(solo numeros entre 10 y 15 anios): "; cin >> N;
    cout << "Ingrese la letra de su apellido: "; cin >> character;
    cout << "Ingrese su peso: "; cin >> N1;
    cout << "Ingrese el anio actual: "; cin >> N2;

    //calculos edad
    r1 = N % 2;
    r2 = (N / 2) % 2;
    r3 = ((N / 2) / 2) % 2;
    r4 = (((N / 2) / 2) / 2) % 2;

    //calculos apellido
    c1 = character % 3;
    c2 = (character / 3) % 3;
    c3 = ((character / 3) / 3) % 3;
    c4 = (((character / 3) / 3) / 3) % 3;

    //calculos peso entero
    p_e = (int)N1;
    pe1 = p_e % 2;
    pe2 = (p_e / 2) % 2;
    pe3 = ((p_e / 2) / 2) % 2;
    pe4 = (((p_e / 2) / 2) / 2) % 2;
    pe5 = ((((p_e / 2) / 2) / 2) / 2) % 2;
    pe6 = (((((p_e / 2) / 2) / 2) / 2) / 2) % 2;

    //calculos peso decimal
    p_d = round((N1 - (int)N1) * 100);
    pd1 = p_d % 3;
    pd2 = (p_d / 3) % 3; 
    pd3 = ((p_d / 3) / 3) % 3;
    pd4 = (((p_d / 3) / 3) / 3) % 3;

    //calculos anio actual
    a1 = N2 % 7;
    a2 = (N2 / 7) % 7;
    a3 = ((N2 / 7) / 7) % 7;
    a4 = (((N2 / 7) / 7) / 7) % 7;

    //salida
    cout << endl << N << "=" << r4 << r3 << r2 << r1;
    cout << endl << character << "=" << c4 << c3 << c2 << c1;
    cout << endl << N1 << "-->" << "Parte entera es = " << pe6 << pe5 << pe4 << pe3 << pe2 << pe1 << " y Parte decimal es = " << pd4 << pd3 << pd2 << pd1; 
    cout << endl << N2 << "=" << a4 << a3 << a2 << a1;

    system("pause");
}
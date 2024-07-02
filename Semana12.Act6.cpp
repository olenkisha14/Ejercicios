#include "pch.h"
#include "iostream"
using namespace System;
using namespace std;

//estructura cuadrados
struct Cuadrado
{
    double lado;
};

//estructura triangulo}
struct Triangulo
{
    double base, altura;
};

//declaración funciones area1 y area2

double area1(Cuadrado c)
{
    return c.lado * c.lado;
}

double area2(Triangulo t)
{
    return (t.base * t.altura) / 2;
}

int main()
{
    Cuadrado c;
    Triangulo t;
    cout << "Ingrese datos del cuadrado:" << endl;
    cout << "Lado: "; cin >> c.lado;
    cout << endl;

    cout << "Ingrese datos del triangulo:" << endl;
    cout << "Base: "; cin >> t.base;
    cout << "Altura: "; cin >> t.altura;
    cout << endl;

    cout << "Area del cuadrado: " << area1(c) << endl;
    cout << "Area del triangulo: " << area2(t) << endl;

    system("pause>0");
    return 0;
}

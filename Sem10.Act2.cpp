#include "pch.h"
#include "iostream"
using namespace System;
using namespace std;

void ejercicio_2()
{
    int N;
    cout << "Ingrese la cantidad de clientes: "; cin >> N;

    int* peso = new int[N];
    int suma_peso = 0;
    for (int i = 0; i < N; i++)
    {
        cout << "Peso " << i + 1 << ": ";
        cin >> peso[i];
        cout << endl;
        suma_peso += peso[i];
    }

    int max_peso;
    max_peso = peso[0];
    for (int i = 0; i < N; i++)
    {
        max_peso = max(max_peso, peso[i]);
    }

    int contextura_delgada = 0;
    int contextura_mediana = 0;
    int contextura_gruesa = 0;

    for (int i = 0; i < N; i++)
    {
        if (peso[i] < 53)
        {
            contextura_delgada++;
        }
        else if (peso[i] >= 53 && peso[i] <= 60)
        {
            contextura_mediana++;
        }
        else if (peso[i] > 60)
        {
            contextura_gruesa++;
        }
    }

    cout << "El peso promedio es: " << suma_peso / N * 1.0 << endl;
    cout << "El peso max es: " << max_peso << endl;
    cout << "Numero de personas con contextura delgada: " << contextura_delgada << endl;
    cout << "Numero de personas con contextura mediana: " << contextura_mediana << endl;
    cout << "Numero de personas con contextura gruesa: " << contextura_gruesa << endl;
}




int main()
{
    ejercicio_2();

    system("pause>0");
    return 0;
}

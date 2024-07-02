#include "pch.h"
#include "iostream"
using namespace System;
using namespace std;

//Criba de Eratóstenes:
void ejercicio_6()
{
    int tamanio = 20;
    bool* primos = new bool[tamanio + 1];
    for (int i = 0; i < tamanio; i++)
    {
        primos[i] = 1;//true
    }
    //No llega a 5
    for (int i = 2; i * i <= tamanio; i++)
        //Este bucle itera desde 2 hasta la raíz cuadrada de tamanio.
    {
        if (primos[i])//si es true se marcan como no primos
        {
            for (int j = i * i; j <= tamanio; j += i)
            //marca todos los múltiplos de i comenzando desde i*i como no primos.
            {
                primos[j] = 0;
            }
        }
    }
    //Impresion de resultados
    for (int i = 2; i <= tamanio; i++)
    {
        if (primos[i])
        {
            cout << i << " ";
        }
        else
        {
            cout << "-1 ";
        }
    }
    cout << endl;

}

int main()
{
    ejercicio_6();
    system("pause>0");
    return 0;
}

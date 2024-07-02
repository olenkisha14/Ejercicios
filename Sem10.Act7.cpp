#include "pch.h"
#include"iostream"
using namespace System;
using namespace std;

void ejercicio_7()
{
    int N;
    cout << "Ingrese el tamaño del mensaje: "; cin >> N;

    //Validar que el tamaño del mensaje sea positivo
    if (N <= 0)
    {
        cout << "El tamaño del mensaje debe ser un número positivo: " << endl;
        return;
    }

    char* mensaje = new char[N]; 
    cout << "Ingrese el mensaje (caracter por caracter): " << endl;
    for (int i = 0; i < N; i++) 
    {
        cin >> mensaje[i];
    }

    mensaje[N] = '\0';


    int costo = 0;
    for (int i = 0; i < N; i++)
    {
        char c = mensaje[i];
        if (c == ' ')
        {
            costo += 0;
        }
        else if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
        {
            costo += 10; //Letras
        }
        else if ((c >= '0' && c <= '9'))
        {
            costo += 20; //Digitos
        }
        else if ((c == 'ñ' || c == 'Ñ' || c == 'á' || c == 'é' || c == 'í' || c == 'ó' || c == 'ú' ||  c == 'Á' || c == 'É' || c == 'Í' || c == 'Ó' || c == 'Ú'))
        {
            costo += 30; //Caracteres especiales específicos
        }
        else
        {
            costo += 30; //Otros carcteres especiales no especificos
        }
    }
    cout << "El costo de enviar el mensaje es: " << costo << "unidades"<< endl;
    delete[] mensaje;
}

int main()
{

    ejercicio_7();
    return 0;
}

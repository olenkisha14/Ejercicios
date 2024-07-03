#include "pch.h"
#include "iostream"
using namespace System;
using namespace std;

int* generar_mensaje(int tam)
{
    int numeros[] = { 0,2,5 };
    int* arr = new int[tam];
    for (int i = 0; i < tam; i++)
    {
        arr[i] = numeros[rand() % 3];
    }
    return arr;
}

void imprimir(int* arr, int tam)
{
    cout << "TAM: " << tam << endl;
    for (int i = 0; i < tam; i++)
    {
        /*arr[i] = numeros[rand() % 3];*/
        cout << arr[i] << " ";
    }
    cout << endl;
}

bool mensaje_frio(int a, int b, int c)
{
    if (a == 2 && b == 5 && c == 2)
    {
        cout << "Las personas tienen frio" << endl;
        return true;
    }
    else
    {
        return false;
    }
}

bool mensaje_calor(int* arr, int tam)
{
    for (int i = 0; i < tam - 4; i++) //para que no tome los ultimos 4 digitos
    {
        if (arr[i] == 2 && arr[i + 2] == 0 && arr[i + 4] == 2)
        {
            cout << "Las personas tienes calor" << endl;
            return true;
        }
    }
    return false;
}

bool mensaje_hambre(int* arr, int tam)
{
    if (arr[tam - 3] == 5 && arr[tam - 2] == 0 && arr[tam - 1] == 2)
    {
        cout << "Las personas tienen hambre" << endl;
        return true;
    }
    return false;
}

void mensaje_peligro(int* arr, int tam)
{
    for (int i = 0; i < tam - 2; i++)//para que no tome los ultimos dos numeros del arreglo
    {
        if (arr[i] == 0 && arr[i + 1] == 0 && arr[i + 2] == 0)
        {
            cout << "PELIGRO!!!!" << endl;
            return;
        }
    }
}


int main()
{
    srand(time(nullptr));
    int contador = 0;
    int abrigo_cont = 0;
    int agua_cont = 0;
    int alimento_cont = 0;

    while (true)
    {
        system("cls");
        int tam = rand() % 20 + 10;
        int* arr = generar_mensaje(tam);
        imprimir(arr, tam);
        if (mensaje_frio(arr[0], arr[1], arr[2]))
        {
            abrigo_cont++;
        }
        else if (mensaje_calor(arr, tam))
        {
            agua_cont++;
        }
        else if (mensaje_hambre(arr, tam))
        {
            alimento_cont++;
        }

        mensaje_peligro(arr, tam);

        contador++;

        char tecla;
        cout << "Presione la tecla T para salir: "; cin >> tecla;

        if (tecla == 'T' || tecla == 't')
        {
            break;
        }

    }

    cout << "Cantidad de mensajes que se procesaron: " << contador << endl;
    cout << "Cantidad de solicitud de abrigo: " << abrigo_cont << endl;
    cout << "Cantidad de solicitud de agua: " << agua_cont << endl;
    cout << "Cantidad de solicitud de alimento: " << alimento_cont << endl;
    
    

    system("pause>0");
    return 0;
}

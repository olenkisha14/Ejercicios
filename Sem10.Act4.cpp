#include "pch.h"
#include "iostream"
using namespace System;
using namespace std;

void intercambiar(int& n1, int& n2)
{
    int aux;
    aux = n1;
    n1 = n2;
    n2 = aux;
}

void ejercicio_4()
{
    int N;
    cout << "Ingrese numero de personas: "; cin >> N;
    while (N > 100)
    {
        cout << "Ingrese numero de personas: "; cin >> N;
    }
    int* pernos = new int[N];
    int pernos_diametro_5_y_30 = 0;
    int indice_menor = 0;
    for (int i = 0; i < N; i++)
    {
        pernos[i] = rand() % (30 - 5 + 1) + 5;
    }

    //Imprimir
    for (int i = 0; i < N; i++)
    {
        cout << "Pernos[" << i << "]" << pernos[i] << endl;
    }
    cout << endl;

    //DESCENDENTEMENTE
    for (int i = 0; i < N; i++)//para controlar las pasadas por el arreglo, primera segunda tercer etc
    {
        for (int j = 0; j < N; j++)//recorre los elementos de princio a fin, exceto el # de pasadas ya realizadas
        {//en cada bucle se recorre uno menos al # de iteraciones, ya que al final ya estan en su lugar
            if (pernos[j] < pernos[j + 1])
            {//si el elemento actual es menor al posterior, intercambiarlo
                intercambiar(pernos[j], pernos[j + 1]);
            }
        }
    }

    for (int i = 0; i < N; i++)
    {
        cout << "Pernos[" << i << "]" << pernos[i] << endl;
    }
    cout << endl;


    //PROMEDIO
    int suma_diametro = 0;
    for (int i = 0; i < N; i++)
    {
        suma_diametro += pernos[i];
    }
    cout << "El peso promedio es: " << suma_diametro / N * 1.0 << endl;

    //Buscar edad
    int diametro_buscar;
    cout << "Ingrese diametro del perno a buscar: ";
    cin >> diametro_buscar;

    int diametro_inferior = 0;
    for (int i = 0; i < N; i++)
    {
        if (diametro_buscar > pernos[i])
        {
            diametro_inferior++;
        }
    }

    cout << "El numero de pernos con el diametro menor al ingresado son: " << diametro_inferior << endl;

    if (diametro_inferior > N / 2)
    {
        cout << "Lote defectuoso." << endl;
    }
    else
    {
        cout << "El lote es correcto." << endl;
    }
    delete[] pernos;
}

int main()
{
    srand(time(nullptr));
    ejercicio_4();

    
    return 0;
}

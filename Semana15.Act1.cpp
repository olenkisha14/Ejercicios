#include "pch.h"
#include "iostream"
using namespace System;
using namespace std;

int obtener_variable_valida(int lim_inf, int lim_sup, char var)
{
    int x;
    do
    {
        cout << "Ingrese el numero de estudiantes " << var << ": "; cin >> x;
    } while (x < lim_inf || x> lim_sup);
    return x;
}

void generar_lista_paralelos(char* Vgripe, char* Vtos, float* Vpesos, int n_alumnos)
{
    //Genera
    for (int i = 0; i < n_alumnos; i++)
    {
        Vgripe[i] = 'N' + (rand() % 2) * 5; //Para el Si o No aleatorio
        Vtos[i] = 'N' + (rand() % 2) * 5;
        Vpesos[i] = rand() % (60 - 30 + 1) + 30;
    }
    //Imprime
    for (int i = 0; i < n_alumnos; i++)
    {
        cout << "Alumno " << i + 1 << ": " << endl;
        cout << "Gripe: " << Vgripe[i] << endl;
        cout << "Tos: " << Vtos[i] << endl;
        cout << "Peso: " << Vpesos[i] << endl;
        cout << endl;
    }

}

float procentaje_gripe_tos(char* Vgripe, char* Vtos, int n_alumnos)
{
    int contador = 0;
    for (int i = 0; i < n_alumnos; i++)
    {
        if (Vgripe[i] == 'S' && Vtos[i] == 'S')
        {
            contador++;
        }
    }
    //El sufijo f después del 100.0 indica que el número es un float
    return (contador * 100.0f) / n_alumnos;
}

float promedio_pesos(char* Vgripe, char* Vtos, float* Vpesos, int n_alumnos)
{
    float suma_promedio = 0.0f;
    int contador = 0;
    
    for (int i = 0; i < n_alumnos; i++)
    {
        if (Vgripe[i] == 'S' && Vtos[i] == 'S')
        {
            suma_promedio += Vpesos[i];
            contador++;
        }
    }
    if (contador == 0) return 0;
    return(suma_promedio / contador);
}

void listado_ordenado(char* Vgripe, char* Vtos, float* Vpesos, int n_alumnos)
{
    int* indices = new int[n_alumnos];
    for (int i = 0; i < n_alumnos; i++)
    {
        indices[i] = i;
    }

    //Cuando es para ordenar es doble for
    for (int i = 0; i < n_alumnos; i++)
    {
        for (int j = 0; j < n_alumnos; j++)
        {
            //Forma descendente por pesos
            if (Vpesos[indices[j]] < Vpesos[indices[i]])
            {
                swap(indices[i], indices[j]);//para intercambiar
            }
        }
    }

    for (int i = 0; i < n_alumnos; i++)
    {
        cout << "Alumno " << indices[i] << ": " << endl;
        cout << "Gripe: " << Vgripe[indices[i]] << endl;
        cout << "Tos: " << Vtos[indices[i]] << endl;
        cout << "Peso: " << Vpesos[indices[i]] << endl;
        cout << endl;
    }
    delete[] indices;
}

int main()
{
    srand(time(nullptr));

    char* Vgripe, * Vtos;
    float* Vpesos;
    int n_alumnos = obtener_variable_valida(1, 20, 'n');

    Vgripe = new char[n_alumnos];
    Vtos = new char[n_alumnos];
    Vpesos = new float[n_alumnos];

    generar_lista_paralelos(Vgripe, Vtos, Vpesos, n_alumnos);

    cout << "El porcentaje de gripe y tos en los alumnos es: " << endl;
    cout << procentaje_gripe_tos(Vgripe, Vtos, n_alumnos) << "% " << endl;

    cout << "El promedio de pesos es: " << endl;
    cout << promedio_pesos(Vgripe, Vtos, Vpesos, n_alumnos) << endl;

    cout << endl;
    listado_ordenado(Vgripe, Vtos, Vpesos, n_alumnos);

    delete[] Vgripe;
    delete[] Vtos;
    delete[] Vpesos;
    system("pause>0");
    return 0;
}

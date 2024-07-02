#include "pch.h"
#include "iostream"
using namespace System;
using namespace std;

struct Persona
{
    int monto;
    char sexo;
    int edad;
};

void generar_arreglo(Persona* arr, int tam)
{
    const char generos[] = { 'M', 'F' };
    const int num_generos = 2;  // Número de géneros posibles

    for (int i = 0; i < tam; i++)
    {
        arr[i].monto = rand() % (500 - 25 + 1) + 25;
        arr[i].sexo = generos[rand() % num_generos];
        arr[i].edad = rand() % (50 - 15 + 1) + 15;
    }
}

void imprimir_datos(Persona* arr, int tam)
{
    for (int i = 0; i < tam; i++)
    {
        cout << "Persona " << i + 1 << ": " << endl;
        cout << arr[i].monto << ' ';
        cout << arr[i].sexo << ' ';
        cout << arr[i].edad << ' ' << endl;
        cout << endl;

    }
    cout << endl;
}


void ordenar_por_genero_y_monto(Persona* arr, int tam)
{
    cout << "Ordenar por genero y monto: " << endl;
    for (int i = 0; i < tam - 1; i++)
    //después de tam - 1 iteraciones, el arreglo completo estará ordenado. 
    {
        for (int j = 0; j < tam - i - 1; j++)
        {
            bool intercambio = false;

            //Primero ordenamos por sexo
            if (arr[j].sexo > arr[j + 1].sexo)
            {
                intercambio = true;
            }
            //Si los sexos son iguales, ordenamos por monto
            else if (arr[j].sexo == arr[j + 1].sexo && arr[j].monto > arr[j + 1].monto)
            {
                intercambio = true;
            }

            //Realizamos el intercambio necesario
            if (intercambio)
            {
                Persona aux = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = aux;
            }
        }
    }
}

void promedio_por_genero(Persona* arr, int tam)
{
    double suma_montos_m = 0.0;
    double suma_montos_f = 0.0;
    int contador_m = 0;
    int contador_f = 0;

    for (int i = 0; i < tam; i++)
    {
        if (arr[i].sexo == 'M')
        {
            suma_montos_m += arr[i].monto;
            contador_m++;
        }
        else if (arr[i].sexo == 'F')
        {
            suma_montos_f += arr[i].monto;
            contador_f++;
        }
    }
    //Calcular por genero
    double promedio_m, promedio_f;

    if (contador_m > 0)
    {
        promedio_m = suma_montos_m / contador_m;
    }
    else
    {
        promedio_m = 0.0;
    }

    if (contador_f > 0)
    {
        promedio_f = suma_montos_f / contador_f;
    }

    else
    {
        promedio_f = 0.0;
    }

    //Mostrar resultados
    cout << "Promedio de montos por genero: " << endl;
    cout << "Masculino: " << promedio_m << endl;
    cout << "Femenino: " << promedio_f << endl;
    cout << endl;
}

void promedio_por_edad(Persona* arr, int tam)
{
    const int num_edades = 50 - 15 + 1; // Rango de edades de 15 a 50
    double suma_montos[num_edades] = { 0.0 };
    int contador[num_edades] = { 0 };

    for (int i = 0; i < tam; i++)
    {
        int indice_edad = arr[i].edad - 15;// Convertir edad a índice (15 -> 0, 16 -> 1, ..., 50 -> 35)
        suma_montos[indice_edad] += arr[i].monto;
        contador[indice_edad]++;
    }

    //Calcular promedio por edad y mostrar resultado
    cout << "Promedio de gasto por edad:" << endl;
    for (int edad = 15; edad <= 50; edad++)
    {
        int indice = edad - 15;
        double promedio;
        if (contador[indice] > 0)
        {
            promedio = suma_montos[indice] / contador[indice];
        }
        else
        {
            promedio = 0.0;
        }
        cout << "Edad " << edad << ": " << promedio << endl;
    }
}

int main()
{
    srand(time(nullptr));
    int num;

    cout << "Ingrese la cantidad de personas: "; cin >> num;

    while (num < 1 || num > 200)
    {
        system("cls");
        cout << "Vuelve a Ingresar el numero" << endl;
        cout << "Ingrese la cantidad de personas: "; cin >> num;
    }

    Persona* personas = new Persona[num];

    generar_arreglo(personas, num);
    imprimir_datos(personas, num);
    ordenar_por_genero_y_monto(personas, num);
    imprimir_datos(personas, num);
    promedio_por_genero(personas, num);

    system("pause>0");
    promedio_por_edad(personas, num);

    delete[] personas;
    system("pause>0");
    return 0;
}

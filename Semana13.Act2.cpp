#include "pch.h"
#include "iostream"
using namespace System;
using namespace std;

int** generar_matriz(int filas, int columnas)
{
    int** matriz = new int* [filas];
    //Para que se generer la matriz
    for (int i = 0; i < filas; i++)
    {
        matriz[i] = new int[columnas];
    }
    //Para generar la matriz con sus numeros
    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
            matriz[i][j] = rand() % 3 + 1; // Cultivos: 1, 2, 3
        }
    }
    return matriz;
}

//Mostrar la matriz con espacios
void mostrar_matriz(int** matriz, int filas, int columnas)
{
    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }
}

void contrar_frecuencia(int** matriz, int filas, int columnas, int frecuencia[])
{
    //Dado que los tipos de cultivos están representados
    // por los números 1, 2 y 3, y los índices del array 
    // frecuencia están en el rango de 0 a 2, necesitamos 
    // restar 1 al valor del cultivo para acceder al índice correcto 
    // del array frecuencia
    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
            frecuencia[matriz[i][j] - 1]++;
        }
    }
}

void encontrar_mayor_y_menor_frecuencia(int frecuencia[], int& mayor, int& menor)
{
    mayor = menor = frecuencia[0];
    for (int i = 0; i < 3; i++)
    {
        if (frecuencia[i] > mayor)
        {
            mayor = frecuencia[i];
        }
        if (frecuencia[i] < menor)
        {
            menor = frecuencia[i];
        }
    }
}


void verificarTopo(int** matriz) {
    for (int i = 1; i < 9; i++) {
        for (int j = 1; j < 14; j++) {
            if (matriz[i][j] == 2 && matriz[i - 1][j] == 3 && matriz[i][j - 1] == 2 && matriz[i][j + 1] == 2 && matriz[i + 1][j] == 1) {
                cout << "Fila " << i << ", Columna " << j << endl;
            }
        }
    }
}

// Liberar memoria de la matriz
void liberar_memoria(int** matriz, int filas) 
{
    for (int i = 0; i < filas; ++i) {
        delete[] matriz[i];
    }
    delete[] matriz;
}


int main()
{
    srand(time(nullptr));

    const int filas = 10;
    const int columnas = 15;

    int** matriz = generar_matriz(filas, columnas);

    cout << "Matriz de cultivos: " << endl;
    mostrar_matriz(matriz, filas, columnas);

    // Contar la frecuencia de cada cultivo
    int frecuencia[3] = { 0, 0, 0 };
    contrar_frecuencia(matriz, filas, columnas, frecuencia);

    // Encontrar el cultivo con la mayor y menor frecuencia
    int mayor_frecuencia, menor_frecuencia;
    encontrar_mayor_y_menor_frecuencia(frecuencia, mayor_frecuencia, menor_frecuencia);

    // Mostrar la frecuencia de cada cultivo
    cout << "Frecuencia de los cultivos:" << endl;
    cout << "Zanahoria(1): " << frecuencia[0] << endl;
    cout << "Berenjena(2): " << frecuencia[1] << endl;
    cout << "Nabos(3): " << frecuencia[2] << endl;

    // Mostrar resultados
    //Mayor
    if (mayor_frecuencia == frecuencia[0])
    {
        cout << "El cultivo con mayor frecuencia es: Zanahoria(1)" << endl;
    }
    else if (mayor_frecuencia == frecuencia[1])
    {
        cout << "El cultivo con mayor frecuencia es: Berenjena(2)" << endl;
    }
    else if (mayor_frecuencia == frecuencia[2])
    {
        cout << "El cultivo con mayor frecuencia es: Nabos(3)" << endl;
    }
    //Menor
    // Mostrar resultados
    if (menor_frecuencia == frecuencia[0])
    {
        cout << "El cultivo con menor frecuencia es: Zanahoria(1)" << endl;
    }
    else if (menor_frecuencia == frecuencia[1])
    {
        cout << "El cultivo con menor frecuencia es: Berenjena(2)" << endl;
    }
    else if (menor_frecuencia == frecuencia[2])
    {
        cout << "El cultivo con menor frecuencia es: Nabos(3)" << endl;
    }


    verificarTopo(matriz);

    

    // Liberar memoria de la matriz
    liberar_memoria(matriz, filas);

    system("pause>0");
    return 0;
}

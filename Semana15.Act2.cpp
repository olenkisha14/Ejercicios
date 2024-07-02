#include "pch.h"
#include "iostream"
using namespace System;
using namespace std;

int obtener_matriz()
{
    int n;
    do
    {
        cout << "Ingrese el tamanio de la matriz: "; cin >> n;
    } while (n < 3 || n > 30);
    return n;
}

void generar_datos_matriz(int** matriz, int n)
{
    //filas
    for (int i = 0; i < n; i++)
    {
        //columnas
        for (int j = 0; j < n; j++)
        {
            matriz[i][j] = rand() % 10;
        }
    }
}

void imprimir_matriz(int** matriz, int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
}

int obtener_patron_numerico()
{
    int n;
    do
    {
        cout << "Ingrese patron numerico: "; cin >> n;
    } while (n <= 99 || n >= 1000);
    return n;
}

int obtener_repeticon_patron(int** matriz, int n, int patron)
{
    int c, d, u, contador = 0; //unidad, centana y decena
    u = patron % 10;
    d = (patron / 10) % 10;
    c = patron / 100;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - 3; j++)
        // - 3 para evitar desbordar al comparar tres elementos consecutivos.
        {
            if (matriz[i][j] == c && matriz[i][j + 1] == d && matriz[i][j + 2] == u)
            { //Comprueba si los elementos consecutivos en la fila son iguales
              //a las centenas, decenas y unidades del patrón.
                contador++;
            }
        }
    }
    return contador;
}

void mostrar_matriz_resaltada(int** matriz, int n, int patron)
{
    int p1 = patron / 100;
    int p2 = (patron / 10) % 10;
    int p3 = patron % 10;

    cout << endl << "Matriz resaltada: " << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (j <= n - 3 && matriz[i][j] == p1 && matriz[i][j + 1] == p2 && matriz[i][j + 2] == p3)
            {
                Console::BackgroundColor = ConsoleColor::Yellow;
                Console::ForegroundColor = ConsoleColor::Black;
                cout << matriz[i][j] << ' ';
                cout << matriz[i][j + 1] << ' ';
                cout << matriz[i][j + 2] << ' ';
                j += 2;
                Console::ResetColor();
            }
            else
            {
                cout << matriz[i][j] << ' ';
            }
        }
        cout << endl;
    }

}

int main()
{
    srand(time(nullptr));
    int n = obtener_matriz();

    int** matriz = new int* [n];

    for (int i = 0; i < n; i++)
    {
        matriz[i] = new int[n];
    }
    generar_datos_matriz(matriz, n);
    imprimir_matriz(matriz, n);

    int patron = obtener_patron_numerico();
    cout << "El numero de veces que se repite el patron es: " << endl;
    cout << obtener_repeticon_patron(matriz, n, patron) << endl;
    mostrar_matriz_resaltada(matriz, n, patron);

    for (int i = 0; i < n; i++)
    {
        delete[] matriz[i];
    }
    delete[] matriz;

    system("pause>0");
    return 0;
}

#include "pch.h"
#include "iostream"
using namespace System;
using namespace std;

void imprimir_cuadrado(int lado, int fila, int columna) {
    if (fila == 1 || fila == lado || columna == 1 || columna == lado || columna == (lado - fila + 1) || columna == (fila - 1))
        cout << "* ";
    else
        cout << "  ";
}

void imprimir_x(int lado) {
    for (int i = 1; i <= lado; i++) {
        for (int j = 1; j <= lado; j++) {
            imprimir_cuadrado(lado, i, j);
        }
        cout << endl;
    }
}

int main() {
    imprimir_x(5); // Puedes cambiar el tamaño de la "X" ajustando este valor
    return 0;
}


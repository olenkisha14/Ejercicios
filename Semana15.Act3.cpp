#include "pch.h"
#include "iostream"
#define N_VENDEDORES 10
#define CRITERIOS 3
using namespace System;
using namespace std;

void poblar_matriz_data(int matriz[][CRITERIOS])
{
    for (int i = 0; i < N_VENDEDORES; i++)
    {
        //min llam tel fijo
        matriz[i][0] = rand() % 31;
        //min llam tel cel
        matriz[i][1] = rand() % 51;
        //mensajes texto
        matriz[i][2] = rand() % 31;
    }
}

void imprimir_data(int matriz[][CRITERIOS], int codigos_vendedores[])
{
    cout << "Codigo vendedor       Tel fijo\t\t     Tel cel           \tMns texto" << endl;
    for (int i = 0; i < N_VENDEDORES; i++)
    {
        cout << i + 1;
        for (int j = 0; j < CRITERIOS; j++)
        {
            cout << "\t\t\t" << matriz[i][j];
        }
        cout << endl;
    }
    cout << endl;
}

void determinar_vendedores_mayor_minutos_cel(int matriz[][CRITERIOS], int codigos_vendedores[])
{
    // Inicializar maxi con un valor menor que cualquier valor posible en la matriz
    int maxi = -1;
    for (int i = 0; i < N_VENDEDORES; i++)
    {
        maxi = max(maxi, matriz[i][1]);//min
    }
    cout << "El/ los vendedores que tienen(n) el maximo de minutos es/son: ";
    for (int i = 0; i < N_VENDEDORES; i++)
    {
        if (matriz[i][1] == maxi)
        {
            cout << codigos_vendedores[i] << " ";
        }
    }
    cout << endl;
}

//EXCESO
void calcular_monto_de_exceso(int matriz[][CRITERIOS], int codigos_vendedores[])
{
    int ex_tel_fijo, ex_tel_cel, ex_mns_texto;
    for (int i = 0; i < N_VENDEDORES; i++)
    {
        ex_tel_fijo = ex_tel_cel = ex_mns_texto = 0;
        if (matriz[i][0] > 20)
        {
            ex_tel_fijo = matriz[i][0] - 20;
        }
        else if (matriz[i][1] > 40)
        {
            ex_tel_cel = matriz[i][1] - 40;
        }
        else if (matriz[i][2] > 20)
        {
            ex_mns_texto = matriz[i][2] - 20;
        }
        cout << "[" << codigos_vendedores[i] << "] " << "exceso a pagar: " << endl;
        cout << ex_tel_fijo * 0.35 + ex_tel_cel * 0.45 + ex_mns_texto * 0.20 << endl;
    }
    cout << endl;
}

void tiempo_promedio_llamadas_mns(int matriz[][CRITERIOS], int codigos_vendedores[])
{
    float sum_tel_fijo, sum_tel_cel, sum_mns_texto;
    sum_tel_fijo = sum_tel_cel = sum_mns_texto = 0.0f;

    for (int i = 0; i < N_VENDEDORES; i++)
    {
        sum_tel_fijo += matriz[i][0];
        sum_tel_cel += matriz[i][1];
        sum_mns_texto += matriz[i][2];
    }
    cout << "El promedio de min fijo es: " << sum_tel_fijo / N_VENDEDORES << endl;
    cout << "El promedio de min cel es: " << sum_tel_cel / N_VENDEDORES << endl;
    cout << "El promedio de mensajes es: " << sum_mns_texto / N_VENDEDORES << endl;
    cout << endl;
}


int main()
{
    int codigos_vendedores[N_VENDEDORES];
    int data[N_VENDEDORES][CRITERIOS];
    for (int i = 0; i < N_VENDEDORES; i++)
    {
        codigos_vendedores[i] = 201 + i;
    }

    poblar_matriz_data(data);
    imprimir_data(data, codigos_vendedores);
    determinar_vendedores_mayor_minutos_cel(data, codigos_vendedores);
    calcular_monto_de_exceso(data, codigos_vendedores);
    tiempo_promedio_llamadas_mns(data, codigos_vendedores);
    system("pause>0");
    return 0;
}

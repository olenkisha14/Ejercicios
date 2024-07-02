#include "pch.h"
#include "iostream"
using namespace System;
using namespace std;

struct Encuestado
{
    int nivel_aprobacion;
    int edad;
    char nivel_socioeconomico;
};

void generar_datos(Encuestado* arr, int tam)
{
    for (int i = 0; i < tam; i++)
    {
        arr[i].nivel_aprobacion = rand() % 5 + 1;
        arr[i].edad = rand() % 50 + 17;
        arr[i].nivel_socioeconomico = rand() % (68 - 65 + 1) + 65;
    }
}

void imprimir_datos(Encuestado* arr, int tam)
{
    for (int i = 0; i < tam; i++)
    {
        cout << "Encuestado " << i + 1 << ": ";
        cout << arr[i].nivel_aprobacion << ' ';
        cout << arr[i].edad << ' ';
        cout << arr[i].nivel_socioeconomico << ' ';
        cout << endl;
    }
    cout << endl;
}
void imprimir_mayor_votacion_aprobacion(Encuestado* arr, int tam)
{

    //niveles diferentes de aprobación que un encuestado puede elegir, numerados del 0 al 5.
    int cntTam = 6;
    //se utiliza para contar cuántos encuestados han seleccionado cada nivel de aprobación
    int* cnts = new int[cntTam];

    for (int i = 0; i < cntTam; i++)//para que todos los contadores empiezan en 0
    {
        cnts[i] = 0;
    }

    //arr de encuestados y se incrementa el contador
    //correspondiente en cnts basado en el nivel de aprobación de cada encuestad
    for (int i = 0; i < tam; i++)
    {
        cnts[arr[i].nivel_aprobacion]++;
    }

    //encontrar el índice del nivel de aprobación con el mayor número de votos
    int posMayor = 0;
    for (int i = 0; i < cntTam; i++)
    {
        if (cnts[i] > cnts[posMayor])
        {
            posMayor = i;
        }
    }
    cout << "El nivel de aprobacion que tuvo mayor votacion es: ";
    cout << posMayor << " con " << cnts[posMayor] << " votos " << endl;

}

void imprimir_personas_nivel_socioeconomico_A(Encuestado* arr, int tam)
{
    int cnt = 0;
    for (int i = 0; i < tam; i++)
    {
        if (arr[i].nivel_socioeconomico == 'A')
        {
            cnt++;
        }
    }
    cout << "Las personas del nivel socioeconomico A son: " << cnt << endl;
}

void imprimir_edad_persona_mas_jovene(Encuestado* arr, int tam)
{
    int menor_edad = arr[0].edad;
    for (int i = 0; i < tam; i++)
    {
        if (arr[i].edad < menor_edad) {
            menor_edad = arr[i].edad;
        }
    }
    cout << "La edad de la persona mas joven es: " << menor_edad << endl;
}

int main()
{

    srand(time(nullptr));
    int num;

    cout << "Ingrese el numero de los encuestados: "; cin >> num;

    while (num < 1 || num > 100)
    {
        system("cls");
        cout << "Vuelve a ingresar el numero" << endl;
        cout << "Ingrese el numero de los encuestados: "; cin >> num;
    }

    Encuestado* encuestados = new Encuestado[num];
    generar_datos(encuestados, num);
    imprimir_datos(encuestados, num);
    imprimir_mayor_votacion_aprobacion(encuestados, num);
    imprimir_personas_nivel_socioeconomico_A(encuestados, num);
    system("pause>0");
    return 0;
}

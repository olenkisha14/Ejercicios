#include "pch.h"
#include "iostream"
using namespace System;
using namespace std;

const int max_atletas = 30;

struct Datos
{
    char nombre[40];
    char pais[25];
};

struct Atleta
{
    char deporte[30];
    Datos datos_personales;
    int n_medallas;
};

int main()
{
    Atleta ats[max_atletas];
    int num_atletas, max_medallas = 0, indice_max = -1;

    cout << "Ingrese el numero de atletas(maximo " << max_atletas << "): ";
    cin >> num_atletas;

    //Leer datos de cada atleta
    for (int i = 0; i < num_atletas; i++)
    {
        cout << "Datos del atleta " << i + 1 << ": " << endl;

        cout << "Nombre: "; 
        cin >> ats[i].datos_personales.nombre;

        cout << "Pais: ";
        cin >> ats[i].datos_personales.pais;

        cout << "Deporte: ";
        cin >> ats[i].deporte;

        cout << "Numero de medallas: ";
        cin >> ats[i].n_medallas;

        cout << endl;

        if (ats[i].n_medallas > max_medallas)
        {
            max_medallas = ats[i].n_medallas;
            indice_max = i;
        }
    }

    //Mostrar datos del atleta con mas medallas
    if (indice_max != -1)
    {
        cout << "Atleta con mas medallas: " << endl;
        cout << "Nombre: " << ats[indice_max].datos_personales.nombre << endl;
        cout << "Pais: " << ats[indice_max].datos_personales.pais << endl;
        cout << "Deporte: " << ats[indice_max].deporte << endl;
        cout << "Numero de medallas: " << ats[indice_max].n_medallas << endl;
    }
    else
    {
        cout << "No se ingresado datos de atletas. " << endl;
    }

    system("pause>0");
    return 0;
}

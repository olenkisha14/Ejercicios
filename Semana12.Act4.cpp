#include "pch.h"
#include "iostream"
using namespace System;
using namespace std;

struct Empleado
{
    char nombre[50];
    char sexo;
    float sueldo;
};

void leer_datos_trabajadores(Empleado* arr, int tam)
{
    for (int i = 0; i < tam; i++)
    {
        cout << "Ingrese datos para el trabajador: " << i + 1 << endl; 
        cout << "Nombre: "; cin >> arr[i].nombre;
        cout << "Sexo: "; cin >> arr[i].sexo;
        cout << "Sueldo: "; cin >> arr[i].sueldo;
        cout << endl;
    }

}

void imprimir_empleado(Empleado e)
{
    cout << "Nombre: " << e.nombre << endl;
    cout << "Sexo: " << e.sexo << endl;
    cout << "Sueldo: " << e.sueldo << endl;
    cout << endl;
}

void imprimir_mayor_y_menor_sueldo(Empleado* arr, int tam)
{
    int posMayor = 0,posMenor = 0;

    for (int i = 0; i < tam; i++)
    {
        if (arr[i].sueldo > arr[posMayor].sueldo)
        {
            posMayor = i;
        }
        if (arr[i].sueldo < arr[posMenor].sueldo)
        {
            posMenor = i;
        }
    }
    cout << "Datos del empleado con mayor sueldo: " << endl;
    imprimir_empleado(arr[posMayor]);
    cout << "Datos del empleado con menor sueldo: " << endl;
    imprimir_empleado(arr[posMenor]);
}

int main()
{
    int num;

    cout << "Ingrese el numero de trabajadores: "; cin >> num;

    Empleado* empleados = new Empleado[num];

    leer_datos_trabajadores(empleados, num);
    imprimir_mayor_y_menor_sueldo(empleados, num);

    system("pause>0");
    return 0;
}

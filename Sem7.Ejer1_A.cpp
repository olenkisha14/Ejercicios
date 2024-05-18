#include "pch.h"
#include "iostream"
using namespace System;
using namespace std;

void resultados()
{
    cout << "RESULTADOS" << endl;
    cout << "-------------" << endl;
}

void ejer1_A()
{
    int edad;
    char sexo;
    char plataformas;
    char satisfaccion;
    int mayor_edad = 0;
    int suma_edades = 0;
    int canvas = 0;
    int edad_mujer_mas_joven = -1;
    char bueno = 0;
    char regular = 0;
    char malo = 0;
    cout << "Ingrese su edad: "; cin >> edad;

    while (1)
    {
      
        if( edad < 17 || edad > 65)
        {    
            cout << "Vuelve a ingresar el numero." << endl;
            cout << "Ingrese su edad: "; cin >> edad;
        }
        
        cout << "Sexo(F:femenino; M:masculino): "; cin >> sexo;

        switch (sexo)
        {
        case 'F':
        case 'f':
            break;
        case 'M':
        case 'm':
            break;
        default:
            cout << "Elección invalida." << endl;
            cout << "Sexo(F:femenino; M:masculino: "; cin >> sexo;
            break;
        }

        cout << "Tipo de plataforma LMS (B:Blackboard,C:Canva,M:Moodle): "; cin >> plataformas;
        switch (plataformas)
        {
        case 'B':
        case 'b':
            break;
        case 'C':
        case 'c':
            canvas++; //contar cantidad de érsonas que seleccionan canva
            suma_edades += edad; //suma edad para calcular el promedio
            break;
        case 'M':
        case 'm':
            if (sexo == 'F' || sexo == 'f')
            {
                if (edad_mujer_mas_joven == -1 || edad < edad_mujer_mas_joven)
                {
                    edad_mujer_mas_joven = edad;
                }
            }
            break;
        default:
            cout << "Elección invalida." << endl;
            cout << "Tipo de plataforma LMS (B:Blackboard,C:Canva,M:Moodle): "; cin >> plataformas;
            break;
        }

        cout << "Nivel de satisfacción(B:bueno;R:regular;M:malo): "; cin >> satisfaccion;
        switch (satisfaccion)
        {
        case 'B':
        case 'b':
            bueno++;
            break;
        case 'R':
        case 'r':
            regular++;
            break;
        case 'M':
        case 'm':
            malo++;
            break;
        default:
            cout << "Elección invalida." << endl;
            cout << "Nivel de satisfacción(B:bueno;R:regular;M:malo): "; cin >> satisfaccion;
            break;
        }

        cout << endl;
        cout << endl;
        cout << "Ingrese su edad: "; cin >> edad;
        if (edad == 0)
        {
            break;
        }
        

        //adultos mayores
        if (edad > 60 )
        {
            mayor_edad++;
        }
    
    }

    resultados();
    cout << "Cuantos estudiantes son adultos?: " << mayor_edad << endl;
    if (canvas > 0)
    {
        cout << "Promedio de edad de los estudiantes que utilizan Canvas: " << suma_edades / canvas << endl;
    }
    else
    {
        cout << "Ningun estudiantes utiliza Canva." << endl;
    }
    cout << "Niveles más frecuentes son: " << endl;

    //niveles
    if (bueno > regular && bueno > malo)
    {
        cout << "Bueno." << endl;
    }
    else if (regular > bueno && regular > malo)
    {
        cout << "Regular." << endl;
    }
    else if (malo > bueno && malo > regular)
    {
        cout << "Malo." << endl;
    }
    else
    {
        cout << "Bueno." << endl;
        cout << "Regular." << endl;
        cout << "Malo." << endl;
    }
    cout << "Edad de la mujer más joven que utilizó Moodle:" << endl;

    if (edad_mujer_mas_joven != -1)
    {
        cout << edad_mujer_mas_joven;
    }
    else
    {
        cout << "No hubo";
    }


}


int main()
{
    ejer1_A();
    system("pause>0");
    return 0;
}

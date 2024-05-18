#include "pch.h"
#include "iostream"
using namespace System;
using namespace std;
void resultados()
{
    cout << "RESULTADOS" << endl;
    cout << "---------------" << endl;
}

char validar_Tipo_usuario(char tipo_usuario)
{
    switch (tipo_usuario)
    {
    case 'M':
    case 'm': 
        return 'M';
    case 'D':
    case 'd':
        return 'D';
    case 'A':
    case 'a':
        return 'A';
    case 'F':
    case 'f':
        return 'F';
    default:
        return ' ';
    }
}

char validar_Tipo_acceso(char tipo_acceso)
{
    switch (tipo_acceso)
    {
        case 'M':
        case 'm':
            return 'M';
        case 'E':
        case 'e':
            return 'E';
        case 'C':
        case 'c':
            return 'C';
        default:
            return ' ';
    }
}

void ingresar_datos()
{
    char tipo_usuario;
    int hora_acceso;
    char tipo_acceso;

    int manager = 0;
    int desarrollador = 0;
    int analista = 0;
    int max_horas = 24;
    int monitoreo = 0, equipo = 0, configuracion = 0;

    cout << "Ingrese tipo de usuario [M]Manager,";
    cout << "[D]Desarrollador, [A]Analista: "; cin >> tipo_usuario;

    while (true)
    {
        tipo_usuario = validar_Tipo_usuario(tipo_usuario);
        switch (tipo_usuario)
        {
        case 'M': 
            manager++;
            break;
        case 'D':
            desarrollador++;
            break;
        case 'A':
            analista++;
            break;
        case 'F':
            break;
        default: 
            cout << "Tipo de usuario invalido. " << endl;
            cout << "Ingrese tipo de usuario [M]Manager,";
            cout << "[D]Desarrollador, [A]Analista: "; cin >> tipo_usuario;
            break;
        }

        if (tipo_usuario == 'F')
        {
            break;
        }

        cout << "Hora de acceso: "; cin >> hora_acceso;

        if (hora_acceso < 0 || hora_acceso >= max_horas)
        {
            cout << "Hora invalida";
        }

        cout << "Tipo de acceso [M]Monitoreo, [E] Cambio de equipo,";
        cout << "[C]Cambio de Configuración: "; cin >> tipo_acceso;
        tipo_acceso = validar_Tipo_acceso(tipo_acceso);
        switch (tipo_acceso)
        {
        case 'M':
            monitoreo++;
            break;
        case 'E':
            equipo++;
            break;
        case 'C':
            configuracion++;
            break;
        default:
            cout << "Tipo de usuario invalido. " << endl;
            cout << "Tipo de acceso [M]Monitoreo, [E] Cambio de equipo,";
            cout << "[C]Cambio de Configuración: "; cin >> tipo_acceso;
            break;
        }
        hora_acceso++;

        cout << "Ingrese tipo de usuario [M]Manager,";
        cout << "[D]Desarrollador, [A]Analista: "; cin >> tipo_usuario;
    }


    resultados();
    cout << "Manager: " << manager << endl;
    cout << "Desarrollador: " << desarrollador << endl;
    cout << "Analista: " << analista << endl;

    // momento del dia
    int maxHora = 0;
    int momentoDelDia = 0;
    if (manager > maxHora) {
        maxHora = manager;
        momentoDelDia = 0;
    }
    if (desarrollador > maxHora) {
        maxHora = desarrollador;
        momentoDelDia = 1;
    }
    if (analista > maxHora) {
        maxHora = analista;
        momentoDelDia = 2;
    }

    switch (momentoDelDia) {
    case 0:
        cout << "En la MAÑANA se tuvieron más accesos" << endl;
        break;
    case 1:
        cout << "En la TARDE se tuvieron más accesos" << endl;
        break;
    case 2:
        cout << "En la NOCHE se tuvieron más accesos" << endl;
        break;
    }

    char tipoPredominante;
    if (monitoreo > equipo && monitoreo > configuracion) {
        tipoPredominante = 'M';
    }
    else if (equipo > monitoreo && equipo > configuracion) {
        tipoPredominante = 'E';
    }
    else {
        tipoPredominante = 'C';
    }

    cout << "Predominan servicios de: ";
    switch (tipoPredominante) {
    case 'M':
        cout << "Monitoreo" << endl;
        break;
    case 'E':
        cout << "Cambio de Equipo" << endl;
        break;
    case 'C':
        cout << "Cambio de Configuración" << endl;
        break;
    }
}



int main()
{
    ingresar_datos();

    system("pause>0");
    return 0;
}

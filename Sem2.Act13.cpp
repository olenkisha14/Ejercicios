
#include <iostream>
#include <string>
using namespace std;

int main()
{
	string codigo;
	string codigoASCIINombre, codigoASCIIApellidoP, codigoASCIIApellidoM, Hora, Minutos, Segundos;
	bool tardanza;
	char Nombre, ApellidoP, ApellidoM;
	cout << "Ingrese su código: "; cin >> codigo;

	codigoASCIINombre = codigo.substr(0, 2);
	codigoASCIIApellidoP = codigo.substr(2, 2);
	codigoASCIIApellidoM = codigo.substr(4, 2);
	Hora = codigo.substr(6, 2);
	Minutos = codigo.substr(8, 2);
	Segundos = codigo.substr(10, 2);

	Nombre = char(stoi(codigoASCIINombre));
	ApellidoP = char(stoi(codigoASCIIApellidoP));
	ApellidoM = char(stoi(codigoASCIIApellidoM));

	tardanza = (codigo.substr(6, 6) >= "090001");

	cout << endl << "Hora de entrada: " << Hora;
	cout << endl << "Minuto de entrada: " << Minutos;
	cout << endl << "Segundos de entrada: " << Segundos;
	cout << endl << "Su nombre empieza con la letra: " << Nombre;
	cout << endl << "Su apellido paterno empieza con la letra: " << ApellidoP;
	cout << endl << "Su apellido MATERNO empieza con la letra: " << ApellidoM;
	cout << endl << "Llego tarde (1: SI 0:NO): " << tardanza;

	system("pause");


}

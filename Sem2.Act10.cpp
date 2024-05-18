

#include <iostream>
using namespace std;

int main()
{
	int tiempoLab, puntajeTotal;
	char estudios;

	cout << "Ingrese la cantidad de anios que labora: "; cin >> tiempoLab;
	cout << "Estudios (P: primaria; S: secundaria; U: universidad; G:Posgrado): "; cin >> estudios;

	puntajeTotal = 0;
	//Segun Tiempo
	puntajeTotal += (tiempoLab < 5) * 5;
	puntajeTotal += (tiempoLab >= 5) * 10;

	//Segun grado de estudios
	puntajeTotal += (estudios == 'P') * 5;
	puntajeTotal += (estudios == 'S') * 10; 
	puntajeTotal += (estudios == 'U') * 20;
	puntajeTotal += (estudios == 'G') * 30;

	cout << endl << "Puntaje obtenido: " << puntajeTotal;

	system("pause");
	return 0;

}
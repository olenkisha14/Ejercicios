

#include <iostream>
#include <conio.h>

using namespace std;

void main()
{
	int horas;
	float pago;

	cout << "La cantidad de horas trabajadas es: "; cin >> horas;

	pago = (horas <= 40 && horas >= 1) * horas * 16 + (horas > 40) * (16 * 40 + 20 * (horas-40));

	cout << "La cantidad de pago es: " << pago;

}




#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	int N;
	float precio, monto;
	cout << "Ingrese el número de neumáticos: " << endl; cin >> N;

	precio = (N < 3) * 145 + (N >= 3 && N <= 5) * 138 + (N > 5) * 135;

	monto = precio * N;
	
	cout << endl << "El monto es: " << monto;

	_getch();
}


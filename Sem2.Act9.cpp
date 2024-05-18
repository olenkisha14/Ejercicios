

#include <iostream>
using namespace std;

int main()
{ 
	//tiene 12 dígitos
	long long codigo;
	int diaVen, mesVen, anioVen, numPerecible;
	char indentificador;
	cout << "Ingrese el codigo del producto: "; cin >> codigo;

	diaVen = codigo / 10000000000;
	codigo = codigo % 10000000000;

	mesVen = codigo / 100000000;
	codigo = codigo % 100000000;

	anioVen = codigo / 10000;
	codigo = codigo % 10000;

	indentificador = codigo / 100;
	codigo = codigo % 100;

	numPerecible = codigo; 

	int perecible = (numPerecible == 0);

	cout << endl << "Dia de vencimiento: " << diaVen;
	cout << endl << "Mes de vencimiento: " << mesVen;
	cout << endl << "Anio de vencimiento: " << anioVen;
	cout << endl << "El tipo de producto es: " << indentificador;
	cout << endl << "Porducto perecible (0: No; 1: Si): " << perecible;
}
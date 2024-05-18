
#include <iostream>
using namespace std;

int main()
{
	int a, b, c;

	cout << endl << "\nPrimer lado: "; cin >> a;
	cout << endl << "Segundo lado: "; cin >> b;
	cout << endl << "Tercer lado: "; cin >> c;

	if (a == b && a == c)
		cout << endl << "\nEs un triangulo Equilatero";
	else if (a == b || a == c || b == c)
		cout << endl << "\nEs un triangulo Isoceles";
	else
		cout << "\nEs un triangulo Escaleno";

	return 0;



}

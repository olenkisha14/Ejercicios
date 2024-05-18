

#include <iostream>

using namespace std;

int calcularmayor(int num1, int num2, int num3)
{
	int mayor = 0;
	mayor = (num1 >= num2 && num1 >= num3) * num1 +
		(num2 >= num1 && num2 >= num3) * num2 +
		(num3 >= num1 && num3 >= num2) * num3;
	return mayor;

}

int main()
{
	int a, b, c;
	cout << "Ingrese un numero: "; cin >> a;
	cout << "Ingrese un numero: "; cin >> b;
	cout << "Ingrese un numero: "; cin >> c;
	cout << calcularmayor( a, b, c) << endl;

	system("pause>0");
	return 0;
}



#include <iostream>
using namespace std;
int main()
{
	int A, B, C;
	cout << "Ingrese A: "; cin >> A;
	cout << "Ingrese B: "; cin >> B;
	cout << "Ingrese C: "; cin >> C;

	if (A + B > C && A + C > B && B + C > A)
	{
		cout << "Es un triangulo.";
	}
	else {
		cout << "No es un triangulo.";
	}

	system("pause>0");
	return 0;
}


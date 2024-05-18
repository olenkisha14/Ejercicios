#include "pch.h"
#include "iostream"
#include "math.h"
using namespace System;
using namespace std;

long long factorial(int n)
{
	long long fact = 1;
	for (int i = 1; i <= n; i++)
	{
		fact *= i;
	}
	return fact;
}

int main()
{
	int N;
	double x;
	//solicitar valor de x
	cout << "Ingrese x: ";
	cin >> x;
	//validar que x este en el rango 0 a 1
	while (x <= 0 || x > 1)
	{
		cout << "Valor incorrecto." << endl;
		cout << "Ingrese x: ";
		cin >> x;
	}

	//solicitar valor de N
	cout << "Ingrese N: ";
	cin >> N; //limite superior de la serie
	//Validar valor de N
	while (N < 1 || N > 10)
	{
		cout << "Valor incorrecto." << endl;
		cout << "Ingrese N: ";
		cin >> N;
	}


	double arcsen_x = 0; //iniciar arcsenx
	double potencia_x = x;


	for (int n = 0; n < N; n++)
	{
		long long numerador = factorial(2 * n);
		long long denominador = pow(4, n) * pow(factorial(n), 2) * (2 * n + 1);
		double termino = (1.0 *numerador / denominador) * potencia_x;
		//conversion implicita a double
		arcsen_x += termino;
		potencia_x *= x * x;//actualizamos la potencia de x para el siguiente termino
	}

	cout << "Imprimir valor de sumatoria: " << arcsen_x << endl;

    system("pause>0");
    return 0;
}
 
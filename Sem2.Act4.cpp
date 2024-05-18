
#include <iostream>
using namespace std;

int main()
{
	double dia;
	int ingr;
	double costDia;
	double costIngr;
	double costTotal;

	cout << "Escriba el diametro de la pizza y la cantidad de ingredientes: " << endl; cin >> dia >> ingr;


	costDia = 1,5*dia;
	costIngr = 2, 5 * ingr;
	costTotal = costDia + costIngr;

	cout << "El costo de la pizza: " << costTotal << endl;

	system("pause");

}



#include <iostream>
using namespace std;

float convertir(float num)
{
	return num / 2.54;
}

int main()
{
	cout << "De centimetros a pulgadas: "<< convertir(2.54);
	system("pause>0");
	return 0;
}

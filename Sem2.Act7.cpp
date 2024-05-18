
#include <iostream>
using namespace std;

int main()
{
	int cuadrante;
	float x, y;


	cout << "INGRESE LA CORDENADA X: "; cin >> x;
	cout << "INGRESE LA COORDENADA Y: "; cin >> y;

	// x o y > 0 -> positivo
	// x o y < 0 -> negativo
	cuadrante = (x > 0 && y > 0) * 1;
	cuadrante += (x < 0 && y > 0) * 2;
	cuadrante += (x < 0 && y < 0) * 3;
	cuadrante += (x > 0 && y < 0) * 4;

	cout << "El punto se mostra en el cuadrante: " << cuadrante;
	
	return 0 ;
}


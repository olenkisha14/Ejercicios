
#include <iostream>
using namespace std;

int main()
{
	char Modelo, Color;
	int Edad;
	cout << "Ingrese el modelo [A,B]: "; cin >> Modelo;
	if (Modelo == 'A') {
		cout << "Color (B: blanco; M: metalizado; O: otros): "; cin >> Color;
		if (Color == 'B') {
			cout << "Edad: "; cin >> Edad;
			if (Edad < 31) {
				cout << "Precio del seguro: " << (240.5 * 0.25) + 240.50;
			}
			else if (Edad >= 31 && Edad <= 65) {
				cout << "Precio del seguro: 240.50";
			}
			else 
				cout << "Precio del seguro: " << (240.5 * 0.1) + 240.50;
		}
		else if (Color == 'M') {
			cout << "Edad: "; cin >> Edad; 
			if (Edad < 31) {
				cout << "Precio del seguro: " << (330* 0.25) + 330;
			}
			else if (Edad >= 31 && Edad <= 65) {
				cout << "Precio del seguro: 330";
			}
			else 
				cout << "Precio del seguro: " << (330 * 0.1) + 330;
		}
		else if (Color == 'O') {
			cout << "Edad: "; cin >> Edad; 
			if (Edad < 31) {
				cout << "Precio del seguro: " << (270.50 * 0.25) + 270.50;
			}
			else if (Edad >= 31 && Edad <= 65) {
				cout << "Precio del seguro: 270.50";
			}
			else
				cout << "Precio del seguro: " << (270.50 * 0.1) + 270.50;
		}
	}
	if (Modelo == 'B') {
		cout << "Color (B: blanco; M: metalizado; O: otros): "; cin >> Color;
		if (Color == 'B') {
			cout << "Edad: "; cin >> Edad; 
			if (Edad < 31) {
				cout << "Precio del seguro: " << (300 * 0.25) + 300;
			}
			else if (Edad >= 31 && Edad <= 65) {
				cout << "Precio del seguro: 300";
			}
			else
				cout << "Precio del seguro: " << (300 * 0.1) + 300;
		}
		else if (Color == 'M') {
			cout << "Edad: "; cin >> Edad; 
			if (Edad < 31) {
				cout << "Precio del seguro: " << (360.5 * 0.25) + 360.5;
			}
			else if (Edad >= 31 && Edad <= 65) {
				cout << "Precio del seguro: 360.5";
			}
			else
				cout << "Precio del seguro: " << (360.5 * 0.1) + 360.5;
		}
		else if (Color == 'O') {
			cout << "Edad: "; cin >> Edad; 
			if (Edad < 31) {
				cout << "Precio del seguro: " << (330 * 0.25) + 330;
			}
			else if (Edad >= 31 && Edad <= 65) {
				cout << "Precio del seguro: 330";
			}
			else
				cout << "Precio del seguro: " << (330 * 0.1) + 330;
		}
	}
	cin.get(); cin.get();
}


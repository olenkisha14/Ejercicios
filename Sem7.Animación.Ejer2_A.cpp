#include "pch.h"
#include "iostream"
#include "conio.h"
#define WIDTH 40
#define HEIGHT 20
using namespace System;
using namespace std;

void cursor(int x, int y)
{
    Console::SetCursorPosition(x, y);
}

void ventana()
{
    Console::CursorVisible = false;
}

void moviento_horario(int posX, int posY, int stopFlag, int vueltas)
{
	Console::SetWindowSize(WIDTH, HEIGHT);
	long long timeSleep = 50;
	while (!stopFlag)
	{
		//width - 1 para que se detenga antes del limite
		for (int i = 0; i < WIDTH - 1; i++)//horizontal hacia adelante
		{
			cursor(i, 0);
			cout << " *";
			_sleep(timeSleep);
		}
		for (int i = 0; i < HEIGHT - 1; i++)//vertical hacia abajo
		{
			cursor(WIDTH - 1, i);
			cout << " ";
			cursor(WIDTH - 1, i + 1);
			cout << "*";
			_sleep(timeSleep);
		}
		for (int i = WIDTH - 1; i >=0; i--)//horizontal hacia atraz
		{
			cursor(i, HEIGHT - 1);
			cout << "* ";
			_sleep(timeSleep);
		}
		for (int i = HEIGHT - 1; i >= 1; i--)//vertical hacia arriba
		{
			cursor(0, i - 1);
			cout << "*";
			cursor(0, i);
			cout << " ";
			_sleep(timeSleep);
		}
		vueltas++;
		if (vueltas == 5)
		{
			cursor(0, HEIGHT - 1);
			cout << " ";
			posX = WIDTH - 1;
			posY = HEIGHT - 1;
			break;
		}
	}

}

void moviento_antihorario(int posX, int posY, int stopFlag, int antivueltas)
{
	Console::SetWindowSize(WIDTH, HEIGHT);
	long long timeSleep = 50;
	for (int i = HEIGHT - 1; i >= 1; i--)//vertical hacia arriba
	{
		cursor(0, i - 1);
		cout << "*";
		cursor(0, i);
		cout << " ";
		_sleep(timeSleep);
	}
	for (int i = 0; i < WIDTH - 1; i++)//horizontal hacia la izquierda
	{
		cursor(i, 0);
		cout << " *";
		_sleep(timeSleep);
	}
	for (int i = 0; i < HEIGHT - 1; i++)//vertical hacia abajo
	{
		cursor(WIDTH - 1, i);
		cout << " ";
		cursor(WIDTH - 1, i + 1);
		cout << "*";
		_sleep(timeSleep);
	}
	for (int i = WIDTH - 1; i >= 0; i--)//horizontal hacia la derecha
	{
		cursor(i, HEIGHT - 1);
		cout << "* ";
		_sleep(timeSleep);
	}
	antivueltas++;
}



int main()
{
	bool stopFlag = false;
	int posX_A = 0, posY_A = HEIGHT - 1;
	int posX_B = WIDTH - 1, posY_B = HEIGHT - 1;
	int vueltas = 0, antivueltas = 0;

	ventana();
	moviento_horario(posX_A, posY_A, stopFlag, vueltas);

	cursor(posX_B, posY_B);
	cout << "*";

	moviento_antihorario(posX_B, posY_B, stopFlag, antivueltas);

	// Bucle principal para detectar la entrada del teclado
	while (true) {
		char key = _getch(); // Leer entrada del teclado
		if (key == 'C' || key == 'c') {
			stopFlag = false; // Iniciar movimiento
		}
		else if (key == 'P' || key == 'p') {
			stopFlag = true; // Detener movimiento
		}
	}

	system("pause>0");
	return 0;
}
#include "pch.h"
#include "conio.h" // Para _getch() y kbhit()
#include "math.h" // Para abs()
#include "Biblioteca.h"
#include "Escenarios.h"
#include "Personajes.h"
#include "Funcionalidad_naves.h"
#include "Funcionalidad_combustible.h"
#include "Funcionalidad_combustible2.h"
#include "Funcionalidad_combustible3.h"
#include "Funcionalidad_numeros.h"
#include "Ranking.h"
#include "Funcionalidad_juego.h"

int main() {
    Console::BackgroundColor = ConsoleColor::Black;
    srand(time(nullptr));
    juego();
    
    system("pause>0");
    return 0;
}

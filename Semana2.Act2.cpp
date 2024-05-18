

#include <iostream>
#include <math.h>
using namespace std;

int main()

{
    int  x1, x2, y1, y2, m, 
    float elevado1, elevado2, distancia;

    cout << "Ingrese las coordenadas x1: "; cin >> x1;
    cout << "Ingrese las coordenadas x2: "; cin >> x2;
    cout << "Ingrese las coordenadas y1: "; cin >> y1,
    cout << "Ingrese las coordenadas y2: "; cin >> y2;

    m = 2;

    elevado1 = pow(x2 - x1, 1/m);
    elevado2 = pow(y2 - y1, 1/m);
    distancia = sqrt((elevado1) + (elevado2));


    cout <<endl << "La distancia entre los puntos son: " << distancia;

    return 0;
}


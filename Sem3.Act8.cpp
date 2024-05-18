

#include <iostream>
using namespace std;

int tiempo(int num)
{
    int h, m, s, HORA;
    cout << "Ingrese el numero: "; cin >> HORA;
    HORA = num; 
    h = num / 3600;
    num = num % 3600;
    m = num / 60;
    s = num % 60;

    return HORA;
}

int main()
{
    cout << "Introduce los segundos: " << tiempo(4500);
    system("pause>0");
    return 0;
}


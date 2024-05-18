
#include <iostream>
using namespace std;

int calcularvalor(int num)
{
    int valor;
    valor = (num < 0) * -1 + (num > 0) * 1 + (num == 0) * 0;
    return valor;
}

int main()
{
    int a;
    cout << "Ingrese el numero:"; cin >> a;
    cout << calcularvalor(a);
    system("pause>0");
    return 0;
}


#include <iostream>
using namespace std;

int departamento(int c1)
{
    if (c1 == 1)
    {
        cout << "TUMBES";
    }
    else if (c1 == 2)
    {
        cout << "AREQUIPA";
    }
    else if (c1 == 3)
    {
        cout << "PUNO";
    }
    else {
        cout << "ERROR";
    }
    return c1;
}


int paradas(int c4)
{
    if (c4 == 1)
    {
        cout << "Si";
    }
    else if(c4 == 2)
    {
        cout << "No";
    }
    return c4;
}

int main()
{
    int N;
    int n1, n2, n3;

    cout << "Ingrese el codigo de salido: "; cin >> N; 

    n1 = N / 1000;
    n2 = (N % 1000) / 10;
    n3 = (N % 1000) % 10;
    
    cout << endl << "Departamente de destino: "; departamento(n1);
    cout << endl << "Hora de salida: " << n2;
    cout << endl << "Departamente de destino: "; paradas(n3);

    system("pause>0");
    return 0;
}

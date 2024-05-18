

#include <iostream>
using namespace std;

int main()
{
    int n1, n2;

    cout << "Ingrese n1: "; cin >> n1;
    cout << "Ingrese n2: "; cin >> n2;

    if (n1 % n2 == 0)
    {
        cout << n1 << " es multiplo de " << n2;
    }
    else
    {
        cout << n1 << " no es multiplo de " << n2;
    }

    system("pause>0");
    return 0;
}


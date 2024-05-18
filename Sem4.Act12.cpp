

#include <iostream>
using namespace std;

int main()
{
    // C=100 , L=50 , X=10, V=5, I=1

    int numero, unidades, decenas, centenas;
    cout << "Ingrese un numero: "; cin >> numero;

    unidades = numero % 10; numero /= 10;
    decenas = numero % 10; numero /= 10;
    centenas = numero % 10; numero /= 10;
    
    if (numero >= 1 && numero <= 100)
    {
        switch (centenas)
        {
        case 1: cout << "C"; break;
        }

        switch (decenas)
        {
        case 1: cout << "X"; break;
        case 2: cout << "XX"; break;
        case 3: cout << "XXX"; break;
        case 4: cout << "XL"; break;
        case 5: cout << "L"; break;
        case 6: cout << "LX"; break;
        case 7: cout << "LXX"; break;
        case 8: cout << "L"; break;
        case 9: cout << "XC"; break;
        }


        switch (unidades)
        {
        case 1: cout << "I"; break;
        case 2: cout << "II"; break;
        case 3: cout << "III"; break;
        case 4: cout << "IV"; break;
        case 5: cout << "V"; break;
        case 6: cout << "VI"; break;
        case 7: cout << "VII"; break;
        case 8: cout << "VIII"; break;
        case 9: cout << "IX"; break;
        }
    }
    else
    {
        cout << "ERROR.";
    }

    system("pause>0");
    return 0;
}


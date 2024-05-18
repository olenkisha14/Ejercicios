
#include <iostream>
using namespace std;
int main()
{
    int N;
    cout << "Ingrese la edad: "; cin >> N;
    

    if (N > 0)
    {
        if (N < 18)
        {
            cout << "Pagara 7 soles.";
        }
        else if (N >= 18 && N <= 50)
        {
            cout << "Pagara 15 soles.";
        }
        else
        {
            cout << "Pagara 5 soles.";
        }
    }
    else
    {
        cout << "ERROR.";
    }

    system("pause>0");
    return 0;
}

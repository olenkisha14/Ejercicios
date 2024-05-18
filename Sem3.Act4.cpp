

#include <iostream>
using namespace std;

int numeromenor(int num1, int num2)
{
    int menor = 0;
    menor = (num1 <= num2) * num1 + (num2 <= num2) * num2;
    return menor;
}

int main()
{
    cout << numeromenor(3, -8);
    system("pause>0");
    return 0;
}


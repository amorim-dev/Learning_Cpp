//2. Desarrollar una función tal que dado un número entero positivo calcule
//y retorne su factorial. En factorial del N es el resultado de multiplicar 1x2x3x....xN

#include <iostream>
using namespace std;

int factorial(int n)
{
    int resultado = 1;

    for (int m = n; m > 1; m--)
    {
        resultado = m * resultado;
    }
    return resultado;
}

int main(int argc, char const *argv[])
{
    cout << factorial(10);
    return 0;
}

// Desarrollar una función que reciba dos valores que representan un número
// y una potencia y retorne el número elevado a esa potencia.

#include <iostream>
using namespace std;

int potencia(int n, int p)
{
    int resultado = 1;

    for (int i = 0; i < p; i++)
    {
        resultado = resultado * n;
    }
    return resultado;
}

int main(int argc, char const *argv[])
{
    int n = 1;
    int p = 0;
    int continuar = 1;

    do
    {
        cout << "Digite el valor de la base" << endl;
        cin >> n;
        cout << "Digite el valor del expotente" << endl;
        cin >> p;

        cout << "El resultado de " << n << "^" << p << " es: " << potencia(n, p) << endl;

        cout << "¿Deseas continuar? 1 para Si 0 para No" << endl;
        cin >> continuar;

    } while (continuar == 1);

    return 0;
}

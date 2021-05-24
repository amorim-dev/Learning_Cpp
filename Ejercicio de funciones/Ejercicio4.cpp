// Dada una serie de números enteros, informar:
// a) su factorial
// b) cuántos múltiplos de 3
// c) cuántos múltiplos de 5
// d) cuántos múltiplos de 3 y de 5

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
    cout << "El programa informa el factorial de cada numero ingresado" << endl;
    cout << " Y al final informa cuantos son multiplos de 3, 5 y de ambos" << endl;

    int numero;
    int mult3 = 0;
    int mult5 = 0;
    int mult_3y5 = 0;

    do
    {
        cout << "Ingrese un numero para calcular su factorial (ingrese un numero negativo para finalizar)" << endl;
        cin >> numero;
        cout << "El factorial del numero ingresado es " << factorial(numero) << endl;

        bool isMult3 = numero % 3 == 0;
        bool isMult5 = numero % 5 == 0;

        if (isMult3)
            mult3++;
        if (isMult5)
            mult5++;
        if (isMult3 && isMult5)
            mult_3y5++;

    } while (numero >= 0);

    cout << "multiplos de 3: " << mult3 << endl;
    cout << "multiplos de 5: " << mult5 << endl;
    cout << "multiplos de 3 y 5: " << mult_3y5 << endl;

    return 0;
}

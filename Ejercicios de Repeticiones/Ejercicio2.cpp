//Dado dos numeros enteros indicar cual es el más grande
// Deben tener presente que pueden ser iguales

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int num1;
    int num2;
    int continuar = 1;

    while (continuar == 1)
    {
        cout << "Indique un numero: ";
        cin >> num1;
        cout << "Indique el segundo número: ";
        cin >> num2;

        if (num1 > num2)
        {
            cout << "El primer número es mayor" << endl;
        }
        else if (num1 == num2)
        {
            cout << "Los dos números son iguales" << endl;
        }
        else
        {
            cout << "El segundo número es mayor" << endl;
        }
        cout << "¿Deseas ejecutar nuevamente el programa? 1 para si, 0 para no: ";
        cin >> continuar;
    }

    return 0;
}

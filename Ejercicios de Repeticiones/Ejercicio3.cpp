//Dados 3 números enteros, mostrarlos en orden de menor a mayor. Pista: comparar
//los números de a 2 (primero con el segundo, el mayor con el tercero, etc)

#include <iostream>
using namespace std;

void mayor(int &numA, int &numB)
{
    if (numA > numB)
    {
        int aux = numB;
        numB = numA;
        numA = aux;
    }
}

int main(int argc, char const *argv[])
{
    int num1, num2, num3;

    cout << "Ingrese el primero número: ";
    cin >> num1;
    cout << "Ingrese el segundo número: ";
    cin >> num2;
    cout << "Ingrese el tercero número: ";
    cin >> num3;

    mayor(num1, num2);
    mayor(num2, num3);
    mayor(num1, num2);

    cout << "El orden de menor a mayor es:"
         << " " << num1 << ", " << num2 << ", " << num3 << endl;

    return 0;
}

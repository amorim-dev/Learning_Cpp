// Calcular el promedio de edad de un conjunto de personas (no sabemos cuántas).
// Sugerencia: suponer que una edad igual a cero finaliza los datos

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int edad;
    double suma = 0.0;
    int i = 0;
    cout << "El programa calcula el promedio de edades (digite 0 para finalizar)" << endl;

    do
    {
        i++;
        cout << "Ingresa la edad " << i << ": " << endl;
        cin >> edad;
        suma += edad;
    } while (edad != 0);

    double promedio = suma / (i - 1);
    cout << "El promedio de las edades es: " << promedio << endl;

    return 0;
}

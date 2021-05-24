// Para un conjunto de edades de N personas indicar qué edad es la mayor.
//Suponer que hay una única mayor edad

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int mayorEdad = 0;
    int edad = 0;

    cout << "Para finalizar y calcular la mayor edad ingrese 0" << endl;

    do
    {
        cout << "Ingrese una edad: " << endl;
        cin >> edad;

        if (edad > mayorEdad)
        {
            mayorEdad = edad;
        }
    } while (edad != 0);

    cout << "La mayor edad es " << mayorEdad << endl;

    return 0;
}

// Para un conjunto de edades de N personas indicar qué edad es la mayor
// y en qué orden ingresó. Suponer que hay una única mayor edad
// con for

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    cout << "El programa indica que edad es la mayor, e informa todas las ";
    cout << "edades en el orden ingresado" << endl;
    cout << "Para finalizar y ver el resultado digite 0\n"
         << endl;

    int edad;
    int mayorEdad = 0;
    int orden = 0;

    for (int i = 1; edad != 0; i++)
    {

        cout << "Ingrese una edad: " << endl;
        cin >> edad;

        if (edad > mayorEdad)
        {
            mayorEdad = edad;
            orden = i;
        }
    }

    cout << "La mayor edad es " << mayorEdad << endl;
    cout << "Ingresó en el orden " << orden << endl;

    return 0;
}

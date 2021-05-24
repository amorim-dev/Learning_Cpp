// Para un conjunto de edades de N personas indicar qué edad es la mayor
// y en qué orden ingresó. Suponer que hay una única mayor edad
// con do while

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    cout << "El programa indica que edad es la mayor, e informa todas las ";
    cout << "edades en el orden ingresado" << endl;
    cout << "Para finalizar y ver el resultado digite 0\n"
         << endl;

    int edad = 0;
    int mayorEdad = 0;
    int orden = 0;
    int i = 0;

    do
    {
        cout << "Ingrese una edad: " << endl;
        cin >> edad;
        i++;

        if (edad > mayorEdad)
        {
            mayorEdad = edad;
            orden = i;
        }
    } while (edad != 0);

    cout << "La mayor edad es " << mayorEdad << endl;
    cout << "Ingresó en el orden " << orden << endl;

    return 0;
}

/* Para una serie de números que finalizan en 0,
indicar cuántos superan el promedio. Promediar hasta 60 edades */

#include <iostream>
using namespace std;

const int MAX_CANTIDAD_EDADES = 60;

// defino un tipo de variable
typedef int tVectorPersonas[MAX_CANTIDAD_EDADES];

//funciones
void inicializarEdades(tVectorPersonas, int);
int pedirInfoPersonas(tVectorPersonas);
float calculoPromedio(tVectorPersonas, int);
int calculoMayores(tVectorPersonas, int, float);

int main(int argc, char const *argv[])
{
    tVectorPersonas vectorEdades;
    int cantidadEdades = MAX_CANTIDAD_EDADES;
    inicializarEdades(vectorEdades, cantidadEdades);

    cantidadEdades = pedirInfoPersonas(vectorEdades);
    if (cantidadEdades != 0)
    {
        int promedio = calculoPromedio(vectorEdades, cantidadEdades);
        int cantidadMayores = calculoMayores(vectorEdades, cantidadEdades, promedio);
        int cantidadMenores = cantidadEdades - cantidadMayores;
        cout << "El promedio es " << promedio << " donde " << cantidadMayores;
        cout << " personas estan ariba o en el promedio y " << cantidadMenores;
        cout << " estan por debajo del promedio" << endl;
    }

    return 0;
}

void inicializarEdades(tVectorPersonas vector, int cantidadElementos)
{
    for (int i = 0; i < cantidadElementos; i++)
        vector[i] = 0;
}

int pedirInfoPersonas(tVectorPersonas vector)
{
    int cantidadElementos = 0;
    int edad;
    cout << "Ingresar edad (0 = fin)" << endl;
    cin >> edad;
    while ((cantidadElementos < MAX_CANTIDAD_EDADES) && (edad != 0))
    {
        vector[cantidadElementos] = edad;
        cantidadElementos++;
        cout << "Ingresar edad (0 = fin)" << endl;
        cin >> edad;
    }

    return cantidadElementos;
}

float calculoPromedio(tVectorPersonas vector, int cantidadElementos)
{
    int suma = 0;
    for (int i = 0; i < cantidadElementos; i++)
        suma = suma + vector[i];
    return suma / cantidadElementos;
}

int calculoMayores(tVectorPersonas vector, int cantidadElementos, float promedio)
{
    int cantidadMayores = 0;
    for (int i = 0; i < cantidadElementos; i++)
    {
        if (vector[i] >= promedio)
            cantidadMayores++;
    }
    return cantidadMayores;
}

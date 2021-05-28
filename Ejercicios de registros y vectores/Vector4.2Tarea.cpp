/* Para una serie de números que finalizan en 0,
indicar cuántos superan el promedio. Promediar hasta 60 edades */

#include <iostream>
//#include <vector>

using namespace std;

const int MAX_CANTIDAD_EDADES = 60;

struct tPersona
{
    string name = "";
    int edad = 0;
};

typedef tPersona tVectorPersonas[MAX_CANTIDAD_EDADES];

//funciones
int pedirInfoPersonas(tVectorPersonas);
float calculoPromedio(tVectorPersonas, int);
int calculoMayores(tVectorPersonas, int, float, tVectorPersonas);
void cantidadadYNombrePersonasMayores(tVectorPersonas personasMayores, int cantidadMayores);

int main(int argc, char const *argv[])
{
    tVectorPersonas vectorEdades;
    tVectorPersonas mayoresPersonas;
    int cantidadEdades = MAX_CANTIDAD_EDADES;

    cantidadEdades = pedirInfoPersonas(vectorEdades);
    if (cantidadEdades != 0)
    {
        float promedio = calculoPromedio(vectorEdades, cantidadEdades);

        int cantidadMayores = calculoMayores(vectorEdades, cantidadEdades, promedio, mayoresPersonas);
        cantidadadYNombrePersonasMayores(mayoresPersonas, cantidadMayores);
    }

    return 0;
}

int pedirInfoPersonas(tVectorPersonas vector)
{
    int cantidadElementos = 0;
    int edad;
    while (cantidadElementos < MAX_CANTIDAD_EDADES)
    {
        cout << "Ingresar edad (0 = fin)" << endl;
        cin >> edad;
        if (edad == 0)
            break;

        vector[cantidadElementos].edad = edad;
        cout << "Ingresar nombre" << endl;
        cin >> vector[cantidadElementos].name;
        cantidadElementos++;
    }

    return cantidadElementos;
}

float calculoPromedio(tVectorPersonas vector, int cantidadElementos)
{
    int suma = 0;
    for (int i = 0; i < cantidadElementos; i++)
        suma = suma + vector[i].edad;
    return suma / (float)cantidadElementos;
}

int calculoMayores(tVectorPersonas allPersonas, int cantidadElementos, float promedio, tVectorPersonas personasMayores)
{
    int cantidadMayores = 0;
    for (int i = 0; i < cantidadElementos; i++)
    {
        if (allPersonas[i].edad >= promedio)
        {
            personasMayores[cantidadMayores] = allPersonas[i];
            cantidadMayores++;
        }
    }

    return cantidadMayores;
}

void cantidadadYNombrePersonasMayores(tVectorPersonas personasMayores, int cantidadMayores)
{
    cout << "Lista de personas mayores" << endl
         << endl;
    for (int i = 0; i < cantidadMayores; i++)
    {
        cout << personasMayores[i].name << endl;
    }
}

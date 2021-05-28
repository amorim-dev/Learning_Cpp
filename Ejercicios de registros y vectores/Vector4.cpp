/* Para una serie de números que finalizan en 0,
indicar cuántos superan el promedio. Promediar hasta 60 edades */

#include <iostream>
using namespace std;

// defino un tipo de variable
typedef int tVectorPersonas[60];

//funciones
void inicializarEdades(tVectorPersonas, int &);
void pedirInfoPersonas(tVectorPersonas, int &);
float calculoPromedio(tVectorPersonas, int);
int calculoMayores(tVectorPersonas, int, float);

int main(int argc, char const *argv[])
{
    tVectorPersonas vecEdades;
    int cantEdades = 60;
    int cantMayores;
    float prom;

    inicializarEdades(vecEdades, cantEdades);
    pedirInfoPersonas(vecEdades, cantEdades);

    if (cantEdades != 0)
    {
        prom = calculoPromedio(vecEdades, cantEdades);
        cantMayores = calculoMayores(vecEdades, cantEdades, prom);
        cout << "El promedio es " << prom << " y lo superan " << cantMayores << " personas" << endl;
    }
    return 0;
}

void inicializarEdades(tVectorPersonas v, int &c)
{
    for (int i = 0; i < c; i++)
        v[i] = 0;
    c = 0;
}

void pedirInfoPersonas(tVectorPersonas v, int &c)
{
    int edad;
    cout << "Ingresar edad (0 = fin)" << endl;
    cin >> edad;
    while ((c < 60) && (edad != 0))
    {
        v[c] = edad;
        c++;
        cout << "Ingresar edad (0 = fin)" << endl;
        cin >> edad;
    }
}

float calculoPromedio(tVectorPersonas v, int c)
{
    int suma = 0;
    for (int i = 0; i < c; i++)
        suma = suma + v[i];
    return suma / c;
}

int calculoMayores(tVectorPersonas v, int c, float prom)
{
    int cantMayores = 0;
    for (int i = 0; i < c; i++)
    {
        if (v[i] > prom)
            cantMayores++;
    }
    return cantMayores;
}

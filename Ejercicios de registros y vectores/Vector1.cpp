// Creamos y mostramos un vector con los 10 primeros números pares

#include <iostream>
using namespace std;

typedef int tVector[10];
void mostrarVector(tVector v);

int main(int argc, char const *argv[])
{
    // Se crea el vector usando el tipo creado
    tVector vector;

    for (int i = 0; i < 10; i++)
    {
        vector[i] = 2 * (i + 1);
    }
    mostrarVector(vector);
    return 0;
}

//La función "mostrarVector" recibe el vector, lo recorre y va mostrando el índice
// (la posición de cada celda) y el contenido de la celda
void mostrarVector(tVector v)
{
    cout << "Los primeros 10 numeros pares:" << endl
         << endl;
    for (int i = 0; i < 10; i++)
    {
        cout << "en la celda " << i << " esta el valor " << v[i] << endl;
    }
}

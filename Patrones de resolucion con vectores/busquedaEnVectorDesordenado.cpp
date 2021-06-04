// Modifique el ejercicio para procesar datos y buscar valores pedidos desde el teclado

#include <iostream>
using namespace std;
#define CANT 10

typedef int tVector[CANT];
int buscarV(tVector, int, int);
void cargarVector(tVector, int);
void mostrarVector(tVector, int);

int main()
{
    int i;
    tVector vect1;
    setlocale(LC_CTYPE, "Spanish");
    cargarVector(vect1, CANT);
    mostrarVector(vect1, CANT);

    while (char buscarNumero = 's')
    {
        buscarNumero = 's';
        int numero = 0;

        cout << "Ingrese el numero que deseas buscar: " << endl;
        cin >> numero;

        i = buscarV(vect1, numero, CANT);
        if ((i > -1))
            cout << "Se encontró el valor =  " << numero << " en la posicion " << i << endl;
        else
            cout << "No se encontró el valor =  " << numero << endl;

        cout << " Deseas buscar otro numero en el vector? ('s' o 'n')" << endl;
        cin >> buscarNumero;
    }
    return 0;
}

int buscarV(tVector vect1, int dato, int kTOPE)
{
    int i = 0;
    while (((i < kTOPE) && (dato != vect1[i])))
        i = i + 1;
    if ((i >= kTOPE))
        i = -1;
    return i;
}

void cargarVector(tVector vect1, int kTOPE)
{
    cout << "datos del vector" << endl;
    for (int i = 0; i < kTOPE; i++)
        vect1[i] = 2 * i;
}

void mostrarVector(tVector vect1, int kTOPE)
{
    for (int i = 0; i < kTOPE; i++)
        cout << vect1[i] << " - ";
    cout << endl;
}

// Modifique el ejercicio para procesar datos y buscar valores pedidos desde el teclado

#include <iostream>
using namespace std;
#define CANT 100

typedef int tVector[CANT];
int buscarV(tVector, int, int);
void crearVector(tVector, int &);
void mostrarVector(tVector, int);

int main()
{
    int i;
    tVector vect1;
    int kTOPE;
    setlocale(LC_CTYPE, "Spanish");
    crearVector(vect1, kTOPE);
    mostrarVector(vect1, kTOPE);

    while (char buscarNumero = 's')
    {
        buscarNumero = 's';
        int numero = 0;

        cout << "Ingrese el numero que deseas buscar en el vector: " << endl;
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

void crearVector(tVector vect1, int &kTOPE)
{
    int cantidadPosicionesVector = 0;
    cout << "Ingrese los datos del vector separados (0 para finalizar)" << endl;

    do
    {
        cin >> vect1[cantidadPosicionesVector];
        cantidadPosicionesVector++;

    } while (vect1[cantidadPosicionesVector - 1] != 0);
    kTOPE = cantidadPosicionesVector - 1;
}

void mostrarVector(tVector vect1, int kTOPE)
{
    if (kTOPE == 0)
        return;
    cout << "Su vector es " << vect1[0];
    for (int i = 1; i < kTOPE; i++)
        cout << " - " << vect1[i];
    cout << endl;
}

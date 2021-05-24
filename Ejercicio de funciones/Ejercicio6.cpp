// 6. Desarrollar una función que reciba los valores D, M y A correspondientes
//al día, mes y año de una fecha y la devuelva en el formato AAAAMMDD

// Convierte dia/mes/anio a AAAAMMDD

#include <iostream>
using namespace std;

int fecha_ToAAAAMMDD(int dia, int mes, int anio)
{
    return dia + (100 * mes) + (10000 * anio);
}

int main(int argc, char const *argv[])
{
    int dia = 0;
    int mes = 0;
    int anio = 0;

    cout << "Convierte fechas de dia, mes, anio a AAAAMMDD" << endl;
    cout << "ingresar dia, mes, anio separados por la tecla enter" << endl;
    cin >> dia;
    cin >> mes;
    cin >> anio;

    int AAAAMMDD = fecha_ToAAAAMMDD(dia, mes, anio);

    cout << "La fecha es: " << AAAAMMDD << endl;

    return 0;
}

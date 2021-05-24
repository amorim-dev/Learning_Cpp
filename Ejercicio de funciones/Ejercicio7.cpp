// 7. Desarrollar una función que reciba un valor que corresponda al
//año, mes y día de una fecha en formato AAAAMMDD y devuelva los valores
// día, mes y año de la fecha recibida

// Convierte AAAAMMDD a dia/mes/anio

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int AAAAMMDD;
    int aux, dia, mes, anio;

    cout << "Convierte fechas de AAAAMMDD a dia, mes y anio" << endl;
    cout << "Ingresar una fecha AAAAMMDD y tecle enter" << endl;
    cin >> AAAAMMDD;

    dia = AAAAMMDD % 100;
    aux = (AAAAMMDD / 100);
    mes = aux % 100;
    anio = aux / 100;

    cout << dia << '/' << mes << '/' << anio << endl;

    return 0;
}

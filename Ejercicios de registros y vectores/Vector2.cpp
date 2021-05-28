/* se pide una fecha, y se la muestra
con el nombre del mes */

#include <iostream>
using namespace std;

// se declara una constante "global" con el nombre de los meses
const string meses[12] = {"enero", "febrero", "marzo", "abril", "mayo", "junio", "julio", "agosto", "septiembre", "octubre", "noviembre", "diciembre"};

int main(int argc, char const *argv[])
{
    int dia, mes, anio;

    cout << "Ingresar fecha de nacimento" << endl;
    cin >> dia >> mes >> anio;
    cout << endl;
    cout << "Naciste el dia  " << dia << " de " << meses[mes - 1] << " de " << anio << endl;
    return 0;
}

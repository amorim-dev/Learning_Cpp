#include <iostream>
using namespace std;

struct tFecha
{
    int dia;
    int mes;
    int anio;
    long AAAAMMDD;
};

void pedirfecha(tFecha &f);
void convertirAAAAMMDD(tFecha &f);

int main(int argc, char const *argv[])
{
    tFecha fecha1, fecha2;
    pedirfecha(fecha1);
    pedirfecha(fecha2);

    if (fecha1.AAAAMMDD > fecha2.AAAAMMDD)
    {
        cout << "La segunda fecha es anterior" << endl;
    }
    else if (fecha2.AAAAMMDD > fecha1.AAAAMMDD)
    {
        cout << "La primera fecha es anterior" << endl;
    }
    else
    {
        cout << "Las fechas son iguales" << endl;
    };

    return 0;
}

void pedirfecha(tFecha &f)
{
    cout << "Ingrese dia, mes y anio separados por enter" << endl;
    cin >> f.dia >> f.mes >> f.anio;
}

void convertirAAAAMMDD(tFecha &f)
{
    f.AAAAMMDD = f.dia + 100 * f.mes + 10000 * f.anio;
}

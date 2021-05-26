// En este ejemplo se piden datos de dos personas y se compara su fecha de nacimiento

#include <iostream>
using namespace std;

typedef char str30[30];
typedef char str100[100];

struct tFecha
{
    int dia;
    int mes;
    int anio;
    long AAAAMMDD;
};

struct tPersona
{
    str30 nombre;
    str100 email;
    tFecha fechaNac;
};

//defino las funciones
void convertirAAAAMMDD(tFecha &f);
void pedirFecha(tFecha &f);
void pedirNombreMail(str30 &nbe, str100 &mail);
void pedirDatosPersona(tPersona &per);

int main(int argc, char const *argv[])
{
    tPersona per1, per2;
    pedirDatosPersona(per1);
    pedirDatosPersona(per2);

    if (per1.fechaNac.AAAAMMDD < per2.fechaNac.AAAAMMDD)
    {
        cout << per1.nombre << " es mayor que " << per2.nombre << endl;
    }
    else if (per1.fechaNac.AAAAMMDD > per2.fechaNac.AAAAMMDD)
    {
        cout << per2.nombre << " es mayor que " << per1.nombre << endl;
    }
    else
    {
        cout << per1.nombre << " y " << per2.nombre << "tienen la misma edad";
    };
    return 0;
}

//funciones
void convertirAAAAMMDD(tFecha &f)
{
    f.AAAAMMDD = f.dia + 100 * f.mes + 10000 * f.anio;
}

void pedirFecha(tFecha &f)
{
    cout << "Ingrese el dia, mes y anio separados" << endl;
    cin >> f.dia >> f.mes >> f.anio;
    convertirAAAAMMDD(f);
}

void pedirNombreMail(str30 &nbe, str100 &mail)
{
    cout << "Ingresar nombre y email" << endl;
    cin >> nbe >> mail;
}

void pedirDatosPersona(tPersona &per)
{
    pedirNombreMail(per.nombre, per.email);
    pedirFecha(per.fechaNac);
}

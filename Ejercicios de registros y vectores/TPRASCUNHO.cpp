
/*Ejercicio con una lista de fechas

Procesar las edades de un conjunto de personas de las cuales nos informan su nombre y fecha de nacimiento.
Se debe mostrar por pantalla:
- el nombre de la persona mayor;
- el nombre de la persona menor;
- cuántas personas tienen hasta 20 años;
- cuántas personas tienen entre 21 y 30 años;
- cuántas personas tienen más de 30 años

Supongan que no hay dos personas que hayan nacido el mismo día.
*/

#include <iostream>
using namespace std;

struct tFecha
{
    int dia;
    int mes;
    int anio;
    long AAAAMMDD;
};

struct tPersona
{
    string nombre;
    tFecha fechaNac;
};

typedef tPersona tRegistroPersonas[100];

//defino las funciones
void pedirFechaDeNac(tFecha &f);
void convertirAAAAMMDD(tFecha &f);
int calcularEdad(tFecha &fecha)
    /*void registarDatosPersona(
    tRegistroPersonas &personas,
    tPersona &personaMayor,
    tPersona &personaMenor,
    int &cantidadPersonasMenoresDe20,
    int &cantidadPersonasEntre21y30,
    int &cantidadPersonasMayoresDe30);
*/

    void actualizarCantidadPersonasMenoresDe20(tPersona &persona, int &cantidadPersonasMenoresDe20);
void actualizarCantidadPersonasEntre21y30(tPersona &persona, int &cantidadPersonasEntre21y30);
void actualizarCantidadPersonasMayoresDe30(tPersona &persona, int &cantidadPersonasMayoresDe30);
void actualizarPersonaMayor(tPersona &persona, tPersona &personaMayor);
void actualizarPersonaMayor(tPersona &persona, tPersona &personaMenor);

int main(int argc, char const *argv[])
{

    tRegistroPersonas personas;
    int i = 0;

    tPersona personaMayor;
    tPersona personaMenor;
    int cantidadPersonasMenoresDe20;
    int cantidadPersonasEntre21y30;
    int cantidadPersonasMayoresDe30;

    do
    {
        string nombre;
        tPersona persona;
        cout << "Ingresar nombre: " << endl;
        cin >> nombre;
        if (nombre == "0")
            break;
        persona.nombre = nombre;
        pedirFechaDeNac(persona.fechaNac);
        actualizarCantidadPersonasMenoresDe20(persona, *cantidadPersonasMenoresDe20);
        actualizarCantidadPersonasEntre21y30(persona, *cantidadPersonasEntre21y30);
        actualizarCantidadPersonasMayoresDe30(persona, *cantidadPersonasMayoresDe30);
        actualizarPersonaMayor(persona, personaMayor);
        actualizarPersonaMayor(persona, personaMenor);
        personas[i] = persona;
        i++;
    } while (true);

    return 0;
}

//funciones
void pedirFechaDeNac(tFecha &f)
{
    cout << "Ingrese el dia, mes y anio separados" << endl;
    cin >> f.dia >> f.mes >> f.anio;
    convertirAAAAMMDD(f);
}

void convertirAAAAMMDD(tFecha &f)
{
    f.AAAAMMDD = f.dia + 100 * f.mes + 10000 * f.anio;
}

int calcularEdad(tFecha &fecha)
{

    tFecha hoy;
    hoy.mes = 6;
    hoy.anio = 2021;
    hoy.dia = 30;

    return int((((hoy.anio-fecha.anio)*12+(hoy.mes-fecha.mes))*30+(hoy.dia-fecha.dia)/360);
}

void pedirDatosPersona(tPersona &per)
{

    pedirFecha(per.fechaNac);
}

void actualizarCantidadPersonasMenoresDe20(tPersona &persona, int &cantidadPersonasMenoresDe20)
{

    if (persona.fechaNac)
}

void actualizarCantidadPersonasEntre21y30(tPersona &persona, int &cantidadPersonasEntre21y30);
void actualizarCantidadPersonasMayoresDe30(tPersona &persona, int &cantidadPersonasMayoresDe30);
void actualizarPersonaMayor(tPersona &persona, tPersona &personaMayor);
void actualizarPersonaMayor(tPersona &persona, tPersona &personaMenor);

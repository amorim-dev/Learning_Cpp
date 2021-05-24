// Calcular el promedio de edad correspondiente a 5 personas

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int suma = 0;
    int i;

    for (i = 1; i <= 5; i++)
    {
        int edad;

        cout << "Ingrese la edad " << i << ": ";
        cin >> edad;
        suma = suma + edad;
    }

    double promedio = suma / 5.0;
    cout << "El promedio entre las " << i - 1 << " edades es " << promedio << endl;

    return 0;
}

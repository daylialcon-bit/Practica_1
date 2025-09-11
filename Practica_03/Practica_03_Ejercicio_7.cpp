// Materia: Programación I, Paralelo 4
// Autor: Dayli Sofia Alcon Cerrogrande
// Fecha creación: 11/09/2025
// Número de ejercicio: 7
#include <iostream>
using namespace std;

void alumnos(int n) {
    int edad, estatura;
    int sumaEdades = 0, sumaAlturas = 0;
    int mayores18 = 0, masAltos = 0;

    for (int i = 1; i <= n; i++) {
        cout << "Edad del alumno " << i << ": ";
        cin >> edad;
        cout << "Altura del alumno " << i << " (en cm): ";
        cin >> estatura;

        sumaEdades += edad;
        sumaAlturas += estatura;

        if (edad > 18) {
            mayores18++;
        }
        if (estatura > 175) {
            masAltos++;
        }
    }

    cout << "Edad media: " << (sumaEdades / (double)n) << endl;
    cout << "Altura media: " << (sumaAlturas / (double)n) << endl;
    cout << "Alumnos mayores de 18: " << mayores18 << endl;
    cout << "Alumnos con más de 1.75m: " << masAltos << endl;
}

int main() {
    int n;
    cout << "Ingrese el numero de alumnos: ";
    cin >> n;

    alumnos(n);
    return 0;
}
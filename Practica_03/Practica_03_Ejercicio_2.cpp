// Materia: Programación I, Paralelo 4
// Autor: Dayli Sofia Alcon Cerrogrande
// Fecha creación: 11/09/2025
// Número de ejercicio: 2
//Realizar una función para convertir grados Celsius a Fahrenheit.
#include <iostream>
using namespace std;

double convertirAFahrenheit(double celsius) {
    return (celsius * 9.0/5.0) + 32;
}

int main() {
    double grados;
    cout << "Ingrese grados Celsius: ";
    cin >> grados;
    cout << "En Fahrenheit es: " << convertirAFahrenheit(grados) << endl;
    return 0;
}
// Materia: Programación I, Paralelo 4
// Autor: Dayli Sofia Alcon Cerrogrande
// Fecha creación: 11/09/2025
// Número de ejercicio: 10
#include <iostream>
using namespace std;

double calcularTarifa(double km) {
    double total = 10 + (km * 2);

    if (km > 10) {
        total = total * 0.9; // descuento del 10%
    }
    return total;
}

int main() {
    double km;
    cout << "Ingrese kilometros recorridos: ";
    cin >> km;

    cout << "La tarifa es: " << calcularTarifa(km) << " Bs." << endl;
    return 0;
}
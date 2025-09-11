// Materia: Programación I, Paralelo 4
// Autor: Dayli Sofia Alcon Cerrogrande
// Fecha creación: 11/09/2025
// Número de ejercicio: 11
#include <iostream>
using namespace std;

void retirarDinero(double saldo, double cantidad) {
    if (cantidad % 10 != 0) {
        cout << "El monto debe ser múltiplo de 10." << endl;
        return;
    }
    if (cantidad > saldo) {
        cout << "Saldo insuficiente." << endl;
        return;
    }

    saldo = saldo - cantidad;
    cout << "Retiro exitoso. Saldo actual: " << saldo << " Bs." << endl;
}

int main() {
    double saldo = 1000;
    double retiro;
    cout << "Ingrese cantidad a retirar: ";
    cin >> retiro;

    retirarDinero(saldo, retiro);
    return 0;
}
// Materia: Programación I, Paralelo 4
// Autor: Dayli Sofia Alcon Cerrogrande
// Fecha creación: 11/09/2025
// Número de ejercicio: 8
#include <iostream>
using namespace std;

void convertirDinero(int monto) {
    int billetes[] = {200, 100, 50, 20, 10, 5, 2, 1};

    for (int i = 0; i < 8; i++) {
        int cantidad = monto / billetes[i];
        if (cantidad > 0) {
            cout << cantidad << " billete(s)/moneda(s) de " << billetes[i] << " Bs" << endl;
            monto = monto % billetes[i];
        }
    }
}

int main() {
    int dinero;
    cout << "Ingrese un monto en Bs: ";
    cin >> dinero;

    convertirDinero(dinero);
    return 0;
}

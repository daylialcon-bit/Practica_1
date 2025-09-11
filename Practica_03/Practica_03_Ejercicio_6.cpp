// Materia: Programación I, Paralelo 4
// Autor: Dayli Sofia Alcon Cerrogrande
// Fecha creación: 11/09/2025
// Número de ejercicio: 6
#include <iostream>
using namespace std;

void diasDelMes(int anio, int mes) {
    int dias;

    if (mes == 2) {
        if ((anio % 4 == 0 && anio % 100 != 0) || (anio % 400 == 0)) {
            dias = 29;
        } else {
            dias = 28;
        }
    } else if (mes == 4 || mes == 6 || mes == 9 || mes == 11) {
        dias = 30;
    } else {
        dias = 31;
    }

    cout << "El mes " << mes << " del año " << anio << " tiene " << dias << " dias." << endl;
}

int main() {
    int anio, mes;
    cout << "Ingrese el anio: ";
    cin >> anio;
    cout << "Ingrese el mes (1-12): ";
    cin >> mes;

    diasDelMes(anio, mes);
    return 0;
}
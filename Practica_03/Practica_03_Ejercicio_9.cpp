// Materia: Programación I, Paralelo 4
// Autor: Dayli Sofia Alcon Cerrogrande
// Fecha creación: 11/09/2025
// Número de ejercicio: 9
#include <iostream>
using namespace std;

void calcularTiempo(int minutos) {
    int jornada = 8 * 60;

    if (minutos > jornada) {
        cout << "Trabajo " << (minutos - jornada) << " minutos extra." << endl;
    } else if (minutos < jornada) {
        cout << "Debe " << (jornada - minutos) << " minutos a la empresa." << endl;
    } else {
        cout << "Cumplio exactamente la jornada." << endl;
    }
}

int main() {
    int minutos;
    cout << "Ingrese minutos trabajados: ";
    cin >> minutos;

    calcularTiempo(minutos);
    return 0;
}

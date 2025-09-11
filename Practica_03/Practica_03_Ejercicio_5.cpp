// Materia: Programación I, Paralelo 4
// Autor: Dayli Sofia Alcon Cerrogrande
// Fecha creación: 11/09/2025
// Número de ejercicio: 5
#include <iostream>
using namespace std;

double promedioPonderado(int n1, int n2, int n3, int n4) {
    return (n1*10 + n2*20 + n3*30 + n4*40) / 100.0;
}

int main() {
    int a, b, c, d;
    cout << "Ingrese 4 notas (1-100): ";
    cin >> a >> b >> c >> d;

    cout << "Promedio ponderado: " << promedioPonderado(a, b, c, d) << endl;
    return 0;
}

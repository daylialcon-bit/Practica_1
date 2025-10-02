// Materia: Programación I, Paralelo 4
// Autor: Dayli Sofia Alcon Cerrogrande
// Fecha creación: 29/09/2025
// Número de ejercicio: 5
// Problema planteado:
//5. Leer 2 vectores de dimensión N y combine ambos en otro vector
#include <iostream>
using namespace std;

int main() {
    int v1[3] = {1, 2, 3};
    int v2[3] = {4, 5, 6};
    int combinado[6];

    for (int i = 0; i < 3; i++) combinado[i] = v1[i];
    for (int i = 0; i < 3; i++) combinado[i+3] = v2[i];

    cout << "Vector combinado:" << endl;
    for (int i = 0; i < 6; i++) cout << combinado[i] << " ";
    cout << endl;

    return 0;
}
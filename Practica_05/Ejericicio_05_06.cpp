// Materia: Programación I, Paralelo 4
// Autor: Dayli Sofia Alcon Cerrogrande
// Fecha creación: 29/09/2025
// Número de ejercicio: 6
// Problema planteado:
//6. Programa que declare tres vectores ‘vector1’, ‘vector2’ y ‘vector3’ de cinco enteros
//cada uno, pida valores para ‘vector1’ y ‘vector2’ y calcule vector3=vector1+vector2.
#include <iostream>
using namespace std;

int main() {
    int v1[5] = {1, 2, 3, 4, 5};
    int v2[5] = {10, 20, 30, 40, 50};
    int suma[5];

    for (int i = 0; i < 5; i++) {
        suma[i] = v1[i] + v2[i];
    }

    cout << "Suma de los vectores:" << endl;
    for (int i = 0; i < 5; i++) cout << suma[i] << " ";
    cout << endl;

    return 0;
}
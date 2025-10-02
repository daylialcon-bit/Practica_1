// Materia: Programación I, Paralelo 4
// Autor: Dayli Sofia Alcon Cerrogrande
// Fecha creación: 29/09/2025
// Número de ejercicio: 4
// Problema planteado:

//4. Leer 2 vectores de dimensión N y calcule la multiplicación de los mismos en otro
//vector.

#include <iostream>
using namespace std;

int main() {
    int v1[5] = {1, 2, 3, 4, 5};
    int v2[5] = {6, 7, 8, 9, 10};
    int resultado[5];

    for (int i = 0; i < 5; i++) {
        resultado[i] = v1[i] * v2[i];
    }

    cout << "Resultado de la multiplicacion:" << endl;
    for (int i = 0; i < 5; i++) cout << resultado[i] << " ";
    cout << endl;

    return 0;
}
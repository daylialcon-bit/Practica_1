// Materia: Programación I, Paralelo 4
// Autor: Dayli Sofia Alcon Cerrogrande
// Fecha creación: 29/09/2025
// Número de ejercicio: 7
// Problema planteado:

//7. Programa que declare un vector de diez elementos enteros y pida números para
//rellenarlo hasta que se llene el vector o se introduzca un número negativo. Entonces se
//debe imprimir el vector (sólo los elementos introducidos).

#include <iostream>
using namespace std;

int main() {
    int numeros[10];
    int contador = 0;

    cout << "Ingrese hasta 10 numeros (negativo para terminar):" << endl;
    for (int i = 0; i < 10; i++) {
        int valor;
        cin >> valor;
        if (valor < 0) break;
        numeros[contador] = valor;
        contador++;
    }

    cout << "Vector final:" << endl;
    for (int i = 0; i < contador; i++) cout << numeros[i] << " ";
    cout << endl;

    return 0;
}
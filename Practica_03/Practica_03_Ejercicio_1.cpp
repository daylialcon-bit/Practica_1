// Materia: Programación I, Paralelo 4
// Autor: Dayli Sofia Alcon Cerrogrande
// Fecha creación: 11/09/2025
// Número de ejercicio: 1
//Realizar una función para determinar si un número es par o impar.
#include <iostream>
using namespace std;

// Función que determina si un número es par o impar
void ParoImpar(int numero) {
    if (numero % 2 == 0) {
        cout << "El número " << numero << " es par." << endl;
    } else {
        cout << "El número " << numero << " es impar." << endl;
    }
}

int main() {
    int n;
    cout << "Ingrese un número: ";
    cin >> n;

    ParoImpar(n); // Llamada a la función
    return 0;
}
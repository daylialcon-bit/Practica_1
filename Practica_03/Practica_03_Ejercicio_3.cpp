// Materia: Programación I, Paralelo 4
// Autor: Dayli Sofia Alcon Cerrogrande
// Fecha creación: 11/09/2025
// Número de ejercicio: 3
//Realizar una función para determinar si un número es capicúa
#include <iostream>
using namespace std;

void esCapicua(int numero) {
    int original = numero;
    int invertido = 0;

    while (numero > 0) {
        int digito = numero % 10;
        invertido = invertido * 10 + digito;
        numero = numero / 10;
    }

    if (original == invertido) {
        cout << "El numero es capicua." << endl;
    } else {
        cout << "El numero NO es capicua." << endl;
    }
}

int main() {
    int n;
    cout << "Ingrese un numero: ";
    cin >> n;

    esCapicua(n);

    return 0;
}
// Materia: Programación I, Paralelo 4
// Autor: Dayli Sofia Alcon Cerrogrande
// Fecha creación: 11/09/2025
// Número de ejercicio: 4
#include <iostream>
using namespace std;

double calcularIMC(double peso, double altura) {
    return peso / (altura * altura);
}

int main() {
    double peso, altura;
    cout << "Ingrese su peso en kg: ";
    cin >> peso;
    cout << "Ingrese su altura en metros: ";
    cin >> altura;

    cout << "Su IMC es: " << calcularIMC(peso, altura) << endl;
    return 0;
}

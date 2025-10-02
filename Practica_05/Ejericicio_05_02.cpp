// Materia: Programación I, Paralelo 4
// Autor: Dayli Sofia Alcon Cerrogrande
// Fecha creación: 29/09/2025
// Número de ejercicio: 2
// Problema planteado:

//2. Escriba un programa para introducir los siguientes valores en un arreglo nombrado
//v/ltios: 11.95, 16.32, 12.15, 8.22, 15.98, 26.22, 13.54, 6.45, 17.59. Después que se hayan
//introducido los datos, haga que su programa despliegue los valores.
//11.95 16.32 12.15
//8.22 15.98 26.22
//13.54 6.45 17.59

#include <iostream>
using namespace std;

int main() {
    int voltajes[5] = {110, 120, 130, 220, 210};

    cout << "Voltajes almacenados:" << endl;
    for (int i = 0; i < 5; i++) {
        cout << voltajes[i] << " ";
    }
    cout << endl;

    return 0;
}
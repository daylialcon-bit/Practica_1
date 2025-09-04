// Materia: Programación I, Paralelo 4
// Autor: Dayli Sofia Alcon Cerrogrande
// Carnet: 6948874 L.P.
// Carrera del estudiante: Ingeniería Biomedica
// Fecha creación: 26/08/2025
// Número de ejercicio: 18
#include <iostream>
using namespace std;

int main() {
    //Contadr de primos
    int contador = 0;   
    int numero = 2;     
    cout << "Los primeros 100 numeros primos son:" << endl;
    while (contador <= 100) {
        bool primo = true;   
        if (numero <= 1) {
            primo = false;
        } 
        else {
            // Calcula si numero no tiene divisores
            for (int i = 2; i * i <= numero; i++) {
                if (numero % i == 0) {
                    primo = false;
                    break; 
                }
            }
        }
        if (primo) {
            cout << numero <<" ";
            contador++;
        }
        numero++;
    }
    cout << endl;
    return 0;
}
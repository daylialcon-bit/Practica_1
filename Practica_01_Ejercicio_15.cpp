// Materia: Programación I, Paralelo 4
// Autor: Dayli Sofia Alcon Cerrogrande
// Carnet: 6948874 L.P.
// Carrera del estudiante: Ingeniería Biomedica
// Fecha creación: 26/08/2025
// Número de ejercicio: 15
#include <iostream>
using namespace std;
int main() {
    int notas;
    float nota, promedio, suma=0;
    cout << "Cuantas notas ingresara al programa?: ";
    cin >> notas;
    for (int i = 1; i <= notas; i++) {
        cout << "Ingrese la nota " << i << ": ";
        cin >> nota;
        suma += nota; 
    }
    promedio = suma / notas; 
    cout << "El promedio general es: " << promedio << endl;
    return 0;
}
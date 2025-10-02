// Materia: Programación I, Paralelo 4
// Autor: Dayli Sofia Alcon Cerrogrande
// Fecha creación: 29/09/2025
// Número de ejercicio: 3
// Problema planteado:

//3. Escriba un programa para introducir los N números enteros en un arreglo llamado
//calificaciones.
//Después que todos los números son introducidos obtener:
//• La suma total de calificaciones,
//• El promedio de los números
//• Use el promedio para determinar la desviación de cada valor del promedio.
//• Almacene cada desviación en un arreglo llamado desviación. Cada desviación se
//obtiene como el valor del elemento menos el promedio de todos los datos. Haga
//que su programa despliegue cada desviación al lado de su elemento
//correspondiente del arreglo calificaciones.
//• Calcule la varianza de los datos usados. La varianza se obtiene elevando al
//cuadrado cada desviación individual y dividiendo la suma de las desviaciones
//cuadradas entre el número de desviaciones.

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    int n;
    cout << "Ingrese cantidad de calificaciones: ";
    cin >> n;

    int calif[n];
    int suma = 0;

    srand(time(0));
    for (int i = 0; i < n; i++) {
        calif[i] = rand() % 101; 
        suma += calif[i];
    }

    int promedio = suma / n;

    cout << "\nCalificaciones:" << endl;
    for (int i = 0; i < n; i++) cout << calif[i] << " ";
    cout << "\nSuma = " << suma;
    cout << "\nPromedio = " << promedio;

    // Desviaciones
    int desv[n];
    for (int i = 0; i < n; i++) {
        desv[i] = calif[i] - promedio;
    }

    cout << "\nDesviaciones:" << endl;
    for (int i = 0; i < n; i++) cout << desv[i] << " ";

    // Varianza (simplificada a int)
    int varianza = 0;
    for (int i = 0; i < n; i++) {
        varianza += desv[i] * desv[i];
    }
    varianza /= n;

    cout << "\nVarianza = " << varianza << endl;

    return 0;
}
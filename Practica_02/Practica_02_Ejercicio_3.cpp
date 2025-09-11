// Materia: Programación I, Paralelo 4
// Autor: Dayli Sofia Alcon Cerrogrande
// Carnet: 6948874 L.P.
// Carrera del estudiante: Ingeniería biomedica
// Fecha creación: 10/09/2025
// Número de ejercicio: 3

#include <iostream>
#include <ctime>
using namespace std;
int main(){
    int numero=0, factorial=1, rango;
    srand(time(NULL));
    cout<< "Ingrese el rango de su numero aletorio factorial: " ;
    cin >> rango;
    // Definimos un rango porque si no lo hacemos el rand () generaria un numero
    // demasiado grande que no pueda calcular el programa
    numero= (rand()% rango)+1;
    // El for calcula el factorial del numero aleatorio generado
    for(int x=1; x<=numero; x++){
       factorial*=x;
    }
    cout<< "El factorial de "<< numero<< " es: "<<factorial;
    return 0;
}

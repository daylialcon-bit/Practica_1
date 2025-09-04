// Materia: Programación I, Paralelo 4
// Autor: Dayli Sofia Alcon Cerrogrande
// Carnet: 6948874 L.P.
// Carrera del estudiante: Ingeniería Biomedica
// Fecha creación: 26/08/2025
// Número de ejercicio: 19
#include<iostream>
using namespace std;

int main()
{
    int numero;
    cout << "Ingrese un numero: ";
    cin >> numero;
    cout<<"Su tabla del 1 al 10 del "<<numero<< " es: "<<endl;
    // El siguiente for hace que imprima cada resultado de "x" por el numero ingresado
    // x++ aumenta el contador en 1 hasta 10
    for(int x=1; x<=10; x++){
    cout<< numero<< " x "<< x<< " = "<< x*numero<<endl;
    }
    return 0;
}
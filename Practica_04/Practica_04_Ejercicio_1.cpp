// Materia: Programación I, Paralelo 4
// Autor: Dayli Sofia Alcon Cerrogrande
// Carnet: 6948874 L.P.
// Carrera del estudiante: Ingeniería biomedica
// Fecha creación: 18/09/2025
// Número de ejercicio: 1
#include <iostream>
using namespace std;
void IntercambiarValores(int &x, int &y);
int main(){
    int Numero_1=0, Numero_2=0;
    cout<<"Ingrese valor del Numero_1: ";
    cin>>Numero_1;
    cout<<"Ingrese valor del Numero_2: ";
    cin>>Numero_2;
    cout<< endl;
    cout<<"Los valores antes de la funcion de Numero_1 es: "<<Numero_1<<" y Numero_2 es: "<<Numero_2;
    cout<<endl;
    IntercambiarValores(Numero_1,Numero_2);
    return 0;
}
void IntercambiarValores(int &x, int &y){
    // La variable cambio se usa para guardar el valor de y
    int cambio=y;
    y=x;
    // Usamos cambio para intercambiar los valores de x
    x=cambio;
    cout<<"Los valores despues de la funcion de Numero_1 es: "<<x<<" y Numero_2 es: "<<y;
}

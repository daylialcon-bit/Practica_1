// Materia: Programación I, Paralelo 4
// Autor: Dayli Sofia Alcon Cerrogrande
// Carnet: 6948874 L.P.
// Carrera del estudiante: Ingeniería Biomedica
// Fecha creación: 26/08/2025
// Número de ejercicio: 8
#include <iostream>
using namespace std;
main (){
    int NUMERO, par;
    cout<<"Ingrese su numero entero: ";
    cin>> NUMERO;
    par= NUMERO % 2;
    if(par == 0){
      cout<<"El numero es par";
    }
    else{
      cout<<"El numero es impar";
    }
    return 0;
}
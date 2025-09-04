// Materia: Programación I, Paralelo 4
// Autor: Dayli Sofia Alcon Cerrogrande
// Carnet: 6948874 L.P.
// Carrera del estudiante: Ingeniería Biomedica
// Fecha creación: 26/08/2025
// Número de ejercicio: 7
#include <iostream>
#include <cctype> 
using namespace std;
main (){
    char  letra;
    cout << "Ingrese una letra: ";
    cin >> letra;
    if(!isalpha(letra))
    {
    cout << "Ingreso caracter especial";
    }
    else if  (letra == 'a' || letra =='e' || letra=='i' || letra=='o' || letra=='u')
    {
        cout<<"Ingreso una vocal";
    }
    else if  (letra == 'A' || letra =='E' || letra=='I' || letra=='O' || letra=='U')
    {
        cout<<"Ingreso una vocal"; 
    }
    else
    {
        cout<<"Ingreso una consonante";
    }
    return 0;
}
// Materia: Programación I, Paralelo 4
// Autor: Dayli Sofia Alcon Cerrogrande
// Carnet: 6948874 L.P.
// Carrera del estudiante: Ingeniería Biomedica
// Fecha creación: 26/08/2025
// Número de ejercicio: 4
#include <iostream>
#include <cmath> //libreria para poner la constante pi
using namespace std;
int main()
{
    long double r, Volumen;
    cout<<"Colocoque el radio de su esfera: ";
    cin>>r;
    Volumen = (4.0/3.0)*M_PI * r *r *r ;
    cout<<"El volumen es:"<<Volumen;
    return 0;
}
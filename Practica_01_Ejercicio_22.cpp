// Materia: Programación I, Paralelo 4
// Autor: Dayli Sofia Alcon Cerrogrande
// Carnet: 6948874 L.P.
// Carrera del estudiante: Ingeniería Biomedica
// Fecha creación: 26/08/2025
// Número de ejercicio: 22
#include<iostream>
using namespace std;

int main()
{   int Numero_1, Numero_2;
    cout << "Ingrese Numero_1: ";
    cin >> Numero_1;
    cout << "Ingrese Numero_2: ";
    cin >> Numero_2;
    //Si el Numero_2 es mayor o igual al Numero_1
    //Este bloque calcula si son divisibles y luego busca un "x" con for
    //Tal que Numero_2=Numero_1*x 
    if((Numero_2%Numero_1)==0){
    for(int x=1; x<=Numero_2; x++){
     if(Numero_2==Numero_1*x){
     cout<< "Existe un numero "<< x<< " tal que "<<x<<" x " << Numero_1<<" es igual a "<< Numero_2<< endl;
     cout<< Numero_2<<" es multiplo de " <<Numero_1;
     }
    }
    }
    //Si el Numero_1 es mayor o igual al Numero_2
    //Este bloque calcula si son divisibles y luego busca un "x" con for
    //Tal que Numero_1=Numero_2*x
    else if((Numero_1%Numero_2)==0){
    for(int x=1; x<=Numero_1; x++){
     if(Numero_1==Numero_2*x){
     cout<< "Existe un numero "<< x<< " tal que "<<x<<" x " << Numero_2<<" es igual a "<< Numero_1<< endl;
     cout<< Numero_1<<" es multiplo de " <<Numero_2;
     }
    }
    }
    //Si el residuo de las congruencias es distinto de 0 
    //Los numeros no son multiplos 
    else { 
     cout<< Numero_2<<" no es multiplo de " <<Numero_1;
     }
    return 0;
}
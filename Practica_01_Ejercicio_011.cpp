// Materia: Programación I, Paralelo 4
// Autor: Dayli Sofia Alcon Cerrogrande
// Carnet: 6948874 L.P.
// Carrera del estudiante: Ingeniería Biomedica
// Fecha creación: 26/08/2025
// Número de ejercicio: 11
#include <iostream>
using namespace std;
main(){
    int mes;
    cout<<"Ingrese un numero del 1-12; ";
    cin>>mes;
    if (mes==1)
    {
        cout<< "Es Enero";
    }
    else if (mes==2){
         cout<< "Es Febrero";
    }
    else if (mes==3){
         cout<< "Es Marzo";
    }
    else if (mes==4){
         cout<< "Es Abril";
    }
    else if (mes==5){
         cout<< "Es Mayo";
    }
    else if (mes==6){
         cout<< "Es Junio";
    }
    else if (mes==7)
    {
        cout<< "Es Julio";
    }
    else if (mes==8){
         cout<< "Es Agosto";
    }
    else if (mes==9){
         cout<< "Es Septiembre";
    }
    else if (mes==10){
         cout<< "Es Octubre";
    }
    else if (mes==11){
         cout<< "Es Noviembre";
    }
    else if (mes==12){
         cout<< "Es Diciembre";
    }
    else{
         cout<< "Mes Invalido";
    }
    return 0;
}
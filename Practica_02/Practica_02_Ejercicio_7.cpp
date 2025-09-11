// Materia: Programación I, Paralelo 4
// Autor: Dayli Sofia Alcon Cerrogrande
// Carnet: 6948874 L.P.
// Carrera del estudiante: Ingeniería biomedica
// Fecha creación: 10/09/2025
// Número de ejercicio: 7
//En una guardería hay N niños de 1, 2 y 3 años:
//- Los niños de 1 año consumen 6 pañales al día
//- Los niños de 2 años consumen 3 pañales diarios
//- Los niños de 3 años consumen 2 pañales diarios
//Se desea conocer cuántos pañales por día se consumen.
//La cantidad de niños de 1, 2 y 3 años, debe ser generada en forma aleatorio y la suma no debe sobrepasar los N niños.
 //Por ejemplo, si el usuario ingresar N = 30, el programa debe generar en forma
//aleatoria 5 niños de 1 año, 20 niños de 2 años y 3 niños de 3 años.
//De acuerdo con esto el consumo de pañales seria (5 x 6) + (18 x 3) + (3 x 2) = 90 PAÑALES
#include<iostream>
#include<ctime>
using namespace std;
int main(){
    srand(time(NULL));
    int cantidad_ninos, x=1, aleatorio=0, contador=0, contador2=0, contador3=0, panales=0;
    cout<< "Ingrese el numero de ninos: ";
    cin>> cantidad_ninos;
    // El while genera aleatoriamente los ninos de 1, 2, 3 anios
    while(x<=cantidad_ninos){
     aleatorio= (rand()%3)+1;
     cout<< aleatorio<<" ";
     if(aleatorio==1){contador++;}
     else if(aleatorio==2){contador2++;}
     else if(aleatorio==3){contador3++;}
     x++;
    }
    cout<< endl;
    cout<< "La cantidad de ninos de 1 anio son: "<<contador<<endl;
    cout<< "La cantidad de ninos de 2 anio son: "<<contador2<<endl;
    cout<< "La cantidad de ninos de 3 anio son: "<<contador3<<endl;
    // Calcula la cantidad de panales que se necesitan
    panales= (contador*6) + (contador2*3) + (contador3*2);
    cout<< "La cantidad de panales diarios son: "<<panales<<endl;
    return 0;
}
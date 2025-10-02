//Realizar una función para el Cálculo del promedio ponderado: Generar 
//aleatoriamente 4 calificaciones entre 1 y 100 y sus respectivos pesos
// son (10,20,30,40), luego calcular el promedio ponderado
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void promedioponderado(){
    int notas{4};
    int pesos{4}={10,20,30,40};
    int sumaPesos=0;
    int sumaPonderada=0;
    srand(time(0)); //semilla para numeros aleatorios
    cout<<"notas generadas aleatoriamente"<<endl;
    for ( int i = 0; i <4; i++)
    {
        notas[i]=rand()%100+1;
        cout<<"nota"<<i+1<<":"<<notas{i};
        cout<<"peso"<<pesos{i}<<endl;

        sumaPonderada+= notas{i}*pesos{i};
        sumaPonderada+=pesos{i};
    }
    double promedio= (double)sumaPonderada/sumaPesos;
    cout<<"el promedio ponderado es"<<promedio<<endl;
}
int main(){
    promedioponderado();
    return 0;
}
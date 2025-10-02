// Materia: Programación I, Paralelo 4
// Autor: Dayli Sofia Alcon Cerrogrande
// Fecha creación: 29/09/2025
// Número de ejercicio: 1
// Problema planteado:

//1. Escriba un programa con 6 funciones utilizando vectores para lo siguiente:
//a. Una lista de 100 voltajes de precisión doble (entre 20.00 V y 220.00 V)
//b. Una lista de 50 temperaturas de precisión doble (Entre 0.00 y 100.00)
//c. Una lista de 30 caracteres alfanuméricos.
//d. Una lista de 100 años en número entero (entre 1990 y 2025)
//e. Una lista de 32 velocidades de precisión doble (entre 10.00 y 300.00)
//f. Una lista de 1000 distancias de precisión doble (entre 1.00 a 1000.00)
//Los datos debes ser generados utilizando numero aleatorios.

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

// a) Voltajes
void listaVoltajes() {
    int voltajes[100];
    for (int i = 0; i < 100; i++) {
        voltajes[i] = rand() % (220 - 20 + 1) + 20;
    }
    cout << "Voltajes:" << endl;
    for (int i = 0; i < 100; i++) cout << voltajes[i] << " ";
    cout << endl;
}

// b) Temperaturas
void listaTemperaturas() {
    int temperaturas[50];
    for (int i = 0; i < 50; i++) {
        temperaturas[i] = rand() % 101;
    }
    cout << "Temperaturas:" << endl;
    for (int i = 0; i < 50; i++) cout << temperaturas[i] << " ";
    cout << endl;
}

// c) Caracteres alfanuméricos
void listaCaracteres() {
    char caracteres[30];
    for (int i = 0; i < 30; i++) {
        int tipo = rand() % 3;
        if (tipo == 0) caracteres[i] = '0' + rand() % 10;
        else if (tipo == 1) caracteres[i] = 'A' + rand() % 26;
        else caracteres[i] = 'a' + rand() % 26;
    }
    cout << "Caracteres:" << endl;
    for (int i = 0; i < 30; i++) cout << caracteres[i] << " ";
    cout << endl;
}

// d) Años
void listaAnios() {
    int anios[100];
    for (int i = 0; i < 100; i++) {
        anios[i] = rand() % (2025 - 1990 + 1) + 1990;
    }
    cout << "Anios:" << endl;
    for (int i = 0; i < 100; i++) cout << anios[i] << " ";
    cout << endl;
}

// e) Velocidades
void listaVelocidades() {
    int velocidades[32];
    for (int i = 0; i < 32; i++) {
        velocidades[i] = rand() % (300 - 10 + 1) + 10;
    }
    cout << "Velocidades:" << endl;
    for (int i = 0; i < 32; i++) cout << velocidades[i] << " ";
    cout << endl;
}

// f) Distancias
void listaDistancias() {
    int distancias[1000];
    for (int i = 0; i < 1000; i++) {
        distancias[i] = rand() % 1000 + 1;
    }
    cout << "Distancias:" << endl;
    for (int i = 0; i < 1000; i++) cout << distancias[i] << " ";
    cout << endl;
}

int main() {
    srand(time(0)); // semilla random
    listaVoltajes();
    listaTemperaturas();
    listaCaracteres();
    listaAnios();
    listaVelocidades();
    listaDistancias();
    return 0;
}
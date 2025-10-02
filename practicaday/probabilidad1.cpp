#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void promedioponderado() {
    int notas[4];
    int pesos[4] = {10, 20, 30, 40};
    int sumaPesos = 0;
    int sumaPonderada = 0;

    srand(time(0)); // semilla para números aleatorios
    cout << "Notas generadas aleatoriamente:" << endl;

    for (int i = 0; i < 4; i++) {
        notas[i] = rand() % 100 + 1;
        cout << "Nota " << i + 1 << ": " << notas[i] << "  Peso: " << pesos[i] << endl;

        sumaPonderada += notas[i] * pesos[i];
        sumaPesos += pesos[i];
    }

    int promedio = sumaPonderada / sumaPesos; // promedio como entero
    cout << "El promedio ponderado es: " << promedio << endl;
}

int main() {
    promedioponderado();
    return 0;
}

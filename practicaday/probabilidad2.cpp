// La comercial 'La Estrella' vende n productos en un día, 
//de los cuales factura al precio de cada uno con un IVA del 13%,
// y si el monto final se excede en 2500 Bs se aplica un descuento 
//del 5%. Obtener la suma total de las ventas realizadas en el día y 
//calcular el pago del IVA del 13% al servicio de Impuestos Nacionales. 
//El precio de los productos debe ser generado en forma aleatoria entre 20 y 50.
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    int n;
    cout << "Ingrese la cantidad de productos vendidos hoy: ";
    cin >> n;

    srand(time(0)); // semilla para números aleatorios

    int totalVentas = 0; // en centavos
    int totalIVA = 0;    // en centavos

    for (int i = 0; i < n; i++) {
        int precioBase = rand() % 31 + 20; // precio entre 20 y 50
        int iva = precioBase * 13 / 100;   // IVA 13% (entero)
        int precioConIVA = precioBase + iva;

        cout << "Producto " << i+1 
             << " - Precio base: " << precioBase 
             << " Bs, IVA: " << iva 
             << " Bs, Precio con IVA: " << precioConIVA << " Bs" << endl;

        totalVentas += precioConIVA;
        totalIVA += iva;
    }

    // Aplicar descuento del 5% si total > 2500 Bs
    if (totalVentas > 2500) {
        cout << "Se aplica descuento del 5% por superar 2500 Bs." << endl;
        totalVentas = totalVentas * 95 / 100; // aplica 5% de descuento
    }

    cout << "Total de ventas del día: " << totalVentas << " Bs" << endl;
    cout << "Pago del IVA (13%) al SIN: " << totalIVA << " Bs" << endl;

    return 0;
}

 
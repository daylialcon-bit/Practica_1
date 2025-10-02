//1. Realizar una función para determinar si un número es par o impar
#include <iostream>
using namespace std;
void PARoIMPAR (int numero){
    if (numero%2==0)
    {
        cout<<"el numero ingresado es par"<<endl;
    }
    else
    {
        cout<<"el numero ingresado es impar"<<endl;
    }
}

int main(){

    int numero;
    cout<<"ingrese el numero a evaluar"<<endl;
    cin>>numero;
    PARoIMPAR (numero);
    
    return 0;
}

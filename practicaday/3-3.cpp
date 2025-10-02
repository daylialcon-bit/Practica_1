//Realizar una función para determinar si un número es capicúa.
#include <iostream>
using namespace std;
void esCapicua(int numero){
    int original=numero;
    int invertido=0;
    while(numero>0){
        int digito=numero%10;
        invertido=invertido*10+digito;
        numero /=10;
}
if (invertido==original)
{
    cout<<"el numero es capicua"<<endl;
}
    else
    {
    cout<<"el numero no es capicua"<<endl;
    }
}

int main(){
    int numero;
    cout<<"ingrese un numero para evaluar si es capicua"<<endl;
    cin>>numero;
    esCapicua(numero);
    
    return 0;
}

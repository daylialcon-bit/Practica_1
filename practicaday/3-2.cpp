 //Realizar una función para convertir grados Celsius a Fahrenheit.

#include <iostream>
using namespace std;
void CELSIUSaFAHRENHEIT(float grados){
float gradosConvertidos;
      gradosConvertidos=9.0/5*grados+32;
   cout<<"los grados convertidos son"<<gradosConvertidos<<endl;
}
int main(){
    float grados;
    cout<<"ingrese los grados que desea convertir de Celsius a Farenheit"<<endl;
    cin>>grados;
    CELSIUSaFAHRENHEIT(grados);

    return 0;
}
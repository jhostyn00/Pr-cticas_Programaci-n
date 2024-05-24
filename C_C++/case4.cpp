/*
 crear una aplicacion que permita el ingreso del nombre y la edad y muestre por pantalla, todos los años cumplidos.
*/

#include <iostream>
using namespace std;

int main(void) {
    string nombre;
    int edad;

    cout<<"Ingrese su nombre: ";
    cin>>nombre;

    cout<<"Ingrese su edad: ";
    cin>>edad;

    for (int i = 0; i <= edad; i++){
        cout<<nombre<<" cumplio "<<i<<" años"<<endl;
    }
}

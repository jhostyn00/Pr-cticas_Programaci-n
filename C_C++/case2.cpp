/*
Crear una aplicacion que me permita el ingreso del año, para luego mostrar si es bisiesto o no.
*/

#include <iostream>
using namespace std;

int main(void) {
    int num;

    cout<<"Ingrese un año: ";
    cin>>num;

    if((num % 4 == 0 && num % 100 != 0) || (num % 400 == 0)){
        cout<<"El año "<<num<<" si es bisiesto"<<endl;
    }else{
        cout<<"El año "<<num<<" no es bisiesto"<<endl;
    }

}
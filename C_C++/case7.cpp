/*
crear una aplicacion que guarde un password en una variable, luego preguntar al usuario que ingrese la contraseña hasta que sea la correcta.
*/
#include <iostream>
using namespace std;

int main(){
    string password, password2;

    system("PAUSE");

    cout<<"Cree una contraseña: ";
    cin>>password;

    cout<<"Ingrese su contraseña: ";
    cin>>password2;

    while(password != password2 ){
        cout<<"Ingrese la contraseña correcta: ";
        cin>>password2;
    }
    cout<<"Bienvenido a su cuenta";
    
    return 0;
}
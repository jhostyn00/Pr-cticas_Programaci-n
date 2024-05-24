#include <iostream>
using namespace std;

int main(){
    int numero;

    system("PAUSE");

    cout<<"Ingrese un numero: ";
    cin>>numero;

    while(numero < 100){
        cout<<"Ingrese un numero: ";
        cin>>numero;
    }
    
    return 0;
}
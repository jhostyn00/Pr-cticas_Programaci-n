#include <iostream>
using namespace std;

int funcion(int valor){
    valor = valor + 1;
    return valor;
}
int funcionPunteros(int* valor){
    *valor = *valor + 5;
    return *valor;
}

int main(){
    int numero = 10;

    cout<<"Antes de funcion "<<numero<<"\n";
    
    cout<<"Despues de funcion "<<funcion(numero)<<"\n";

    cout<<"Antes de funcionPunteros "<<numero<<"\n";
    
    cout<<"Despues de funcionPunteros "<<funcionPunteros(&numero)<<"\n";
    system("pause");
    return 0;

}





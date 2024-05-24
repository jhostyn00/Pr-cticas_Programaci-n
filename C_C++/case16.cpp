#include <iostream>
#include <string>
using namespace std;
int main(){
    int arreglo[10], tamanio, mayor=0;
    do{
        cout<<"Ingrese el tamano del arreglo"<<endl;
        cin>>tamanio;

    }while((tamanio<0) || (tamanio>10));
    for (int i=0;i<tamanio;i++){
        cout<<"Ingrese el sueldo del trabajador "<<(i+1)<<": ";
        cin>>arreglo[i];
    }
    for (int i=0;i<tamanio;i++){
        if (arreglo[i]>mayor){
            mayor = arreglo[i];
        }
    }
    
    cout<<"El sueldo mas alto es "<<mayor<<endl;
    system("pause");
    return 0;
}

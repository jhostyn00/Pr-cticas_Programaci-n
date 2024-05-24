/*
crear una aplicacion que permita el ingreso del monto solicitado, el interes anual y el numero de años del prestamo, para luego mostrar
el capital obtenido en el prestamo por cada año.
*/

#include <iostream>
using namespace std;

int main(void){
    float monto, interes, tiempo, aumento;

    cout<<"Ingrese el monto del prestamo: ";
    cin>>monto;

    int total= monto;

    cout<<"Ingrese el interes anual en %: ";
    cin>>interes;

    cout<<"Ingrese el tiempo del prestamo en años: ";
    cin>>tiempo;
    for (int i=1; i <=tiempo; i++){
        aumento = (monto/100) * interes;
        monto += aumento;
        total+=aumento;
        cout<<"Fecha \tInteres anual"<<endl;

        cout<<i<<" "<<"\t"<<aumento<<endl;
        

    }
    
    cout<<"El total a pagar es: "<<total;
   
}
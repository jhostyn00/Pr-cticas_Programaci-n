#include <iostream>
using namespace std;

int main(){
    string dia;
    

    do{
        cout<<"Ingrese un dia de la semana: ";
        cin>>dia;
        

    }while(dia == "lunes" || dia == "martes" || dia == "miercoles" || dia == "jueves" || dia == "viernes" || dia == "sabado" || dia == "domingo");
    cout<<"Debes ingresar un dia de semana"<<endl;
}
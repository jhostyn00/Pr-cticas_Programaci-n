#include <iostream>
 
using namespace std;
 
int main()
{
    char titulos[5][15];
    char autores[5][15];
    cout<<"Por favor ingrese  la siguiente informacion de los libro: \n";
    for(int i=0; i<5;i++){
        cout<< "\n******* Libro " <<i + 1 <<"********:\n";
        cout<<"Titulo: ";
        cin.getline(titulos,15);
        cout<<"Autores: ";
        cin.getline(autores,15);
    }
    cout<<"\n Titulos y autores ingresados correctamente\n";
    cout<<"El libro más leido es: "<<titulos[5],15;
    return 0;
}
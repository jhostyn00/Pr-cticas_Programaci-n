#include <iostream>
using namespace std;

int main(){
    string titulos[5];
    string autores[5];

    cout<<"Ingrese la siguiente informacion de los libros"<<endl;

    for(int i=0; i < 5; i++ ){
        cout<<"\n ******** Libro "<<i+1<<"********:\n";
        cout<<"Titulo: ";
        getline(cin, titulos[i]);
        cout<<"Autores: ";
        getline(cin, autores[i]);
    }

    //cout<<"\nEl libro tres es: "<<titulos[2]<<" Autor: "<<autores[2]<<endl;


    int orden;
    cout<<"\nIngresa el libro que quiere que se muestre: ";
    cin>>orden;

    switch(orden){
        case 1:
            cout<<"\nEl libro uno es: "<<titulos[0]<<" Autor: "<<autores[0]<<endl;
            break;
        case 2:
            cout<<"\nEl libro dos es: "<<titulos[1]<<" Autor: "<<autores[1]<<endl;
            break;
        case 3:
            cout<<"\nEl libro tres es: "<<titulos[2]<<" Autor: "<<autores[2]<<endl;
            break;
        case 4:
            cout<<"\nEl libro cuatro es: "<<titulos[3]<<" Autor: "<<autores[3]<<endl;
            break;
        case 5:
            cout<<"\nEl libro cinco es es: "<<titulos[4]<<" Autor: "<<autores[4]<<endl;
            break;
    }



}
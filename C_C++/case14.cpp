#include <iostream>
#include <string>
using namespace std;
int main(){
    string*  titulos = NULL;
    string* autores = NULL;
    int tamanio;
    cout<<"Cuantos libros desea ingresar?"<<endl;

    string entrada;
    getline(cin,entrada);
    tamanio = stoi(entrada);
    titulos = new string[tamanio];

    autores = new string[tamanio];
    cout<<"Ingrese los titulos de los libros"<<endl;
    for(int i=0;i<tamanio;i++){
        cout<<"Titulo "<<i+1<<":"<<endl;
        getline(cin,titulos[i]);
        cout<<"Autor "<<i+1<<":"<<endl;
        getline(cin,autores[i]);
    }

    delete [] titulos;
    delete [] autores;
    titulos = NULL;
    autores = NULL; 

    system("pause");

}
#include <iostream>
#include <string>
using namespace std;
int main(){
    string** libros;
    int tamanio;
    cout<<"Cuantos libros desea ingresar?"<<endl;

    string entrada;
    getline(cin,entrada);
    tamanio = stoi(entrada);
    libros = new string*[tamanio];

    
    cout<<"Ingrese los titulos de los libros"<<endl;
    string titulo, autor;
    for(int i=0;i<tamanio;i++){
        libros[i] = new string[i];
        cout<<"Titulo "<<i+1<<":"<<endl;
        getline(cin,titulo);
        cout<<"Autor "<<i+1<<":"<<endl;
        getline(cin,autor);
    }

    for(int i=0;i<tamanio;i++){
        delete [] libros[i];
    }
    delete [] libros;

    system("pause");
    return 0;

}
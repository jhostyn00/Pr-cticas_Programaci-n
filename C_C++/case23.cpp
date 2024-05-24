#include <iostream>
#include <string.h>
 
int main(){
    //Declaracion de variables
    char texto1[50];
    char texto2[50];
    int comparacion;

    //Pedir al usuario que ingrese los textos
    std::cout<<"Ingrese el primer texto: ";
    std::cin.getline(texto1,50);
    std::cout<<"Ingrese el segundo texto: ";
    std::cin.getline(texto2,50);

    //Comparación de los textos
    comparacion=strcmp(texto1,texto2);
    if(comparacion==0){
        std::cout<<"Ambos textos son iguales\n";
    }
    if(comparacion!=0){
        std::cout<<"Ambos textos son diferentes\n";
        if(comparacion>0){
            std::cout<<"El texto 1 es mayor que el texto 2\n";
        }
        if(comparacion<0){
            std::cout<<"El texto 1 es menor que el texto 2\n";
        }
    }
    return 0;
}
#include <stdio.h>

int main(){
    int numero, suma=0;

    for(numero=1; numero<=20; numero+=2){
        printf("%i \n", numero);
        suma += numero;
    }
    printf("\nLa suma es %i", suma);
}
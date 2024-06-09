#include <stdio.h>
/*Mostrar números capicuas*/
int main(){
    int numero=0, cifra, copia, reves=0;
    while(numero <=100){
        if(numero != 0){
            copia = numero;
            cifra = numero%10;
            reves = reves*10 + cifra;
            numero = numero/10;
            if(copia == reves){
                printf("%i", copia);
            }
        }
        numero++;
    }
    
}
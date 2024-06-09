#include <stdio.h>

int main(){
    int numero, suma=0, cant=0;
    printf("Ingrese un numero: ");
    scanf("%i", &numero);
    
    while(cant < numero){
        suma += cant;
        cant++;
    }
    printf("La suma de los numeros anteriores es: %i", suma);
  
}

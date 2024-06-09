#include <stdio.h>
#include <string.h>
 
int main() {
    char nombre[50], tipo[20];
    int num1;
    float precio = 0;
    float subtotal = 0;
    float igv = 0;
    float descuento = 0;
    float total = 0;
 
    int opcion;
 
    do {
        printf("Ingrese el nombre del producto (polo, casaca, pantalon): \n");
        scanf("%s", nombre);
 
        if (strcmp(nombre, "polo") == 0) {
            printf("¿Es manga corta o manga larga? (corta/larga): ");
            scanf("%s", tipo);
 
            if (strcmp(tipo, "corta") == 0) {
                printf("Ingrese la cantidad a llevar: \n");
                scanf("%i", &num1);
 
                if (num1 >= 1) {
                    if (num1 <= 5) {
                        precio = 20;
                    } else if (num1 <= 11) {
                        precio = 19.50;
                    } else if (num1 <= 99) {
                        precio = 19;
                    } else {
                        precio = 18;
                    }          
                    printf("Usted ingreso %i, el precio por polo es de %.2f soles.\n", num1, precio);
 
                    subtotal += precio * num1;
                } else {
                    printf("La cantidad no puede ser inferior a uno.\n");
                }                
 
            } else if (strcmp(tipo, "larga") == 0) {
                printf("Ingrese la cantidad a llevar: \n");
                scanf("%i", &num1);
 
                if (num1 >= 1) {
                    if (num1 <= 5) {
                        precio = 22;
                    } else if (num1 <= 11) {
                        precio = 21.50;
                    } else if (num1 <= 99) {
                        precio = 21;
                    } else {
                        precio = 20;
                    }          
                    printf("Usted ingreso %i, el precio por polo es de %.2f soles.\n", num1, precio);
 
                    subtotal += precio * num1;
                } else {
                    printf("La cantidad no puede ser inferior a uno.\n");
                }  
               
            } else {
                printf("Opción de manga no válida\n");
                continue;
            }
        } else if (strcmp(nombre, "casaca") == 0) {
            printf("Ingrese la cantidad a llevar: \n");
            scanf("%i", &num1);
 
            if (num1 >= 1) {
                if (num1 <= 5) {
                    precio = 50;
                } else if (num1 <= 11) {
                    precio = 49;
                } else if (num1 <= 99) {
                    precio = 48;
                } else {
                    precio = 47;
                }          
                printf("Usted ingreso %i, el precio por casaca es de %.2f soles.\n", num1, precio);
 
                subtotal += precio * num1;
            } else {
                printf("La cantidad no puede ser inferior a uno.\n");
            }
        } else if (strcmp(nombre, "pantalon") == 0) {
            printf("Ingrese la cantidad a llevar: \n");
            scanf("%i", &num1);
 
            if (num1 >= 1) {
                if (num1 <= 5) {
                    precio = 30;
                } else if (num1 <= 11) {
                    precio = 29;
                } else if (num1 <= 99) {
                    precio = 28;
                } else {
                    precio = 27;
                }          
                printf("Usted ingreso %i, el precio por pantalon es de %.2f soles.\n", num1, precio);
 
                subtotal += precio * num1;
            } else {
                printf("La cantidad no puede ser inferior a uno.\n");
            }
        } else {
            printf("Producto no válido\n");
            continue;
        }
 
        printf("\n¿Desea realizar otra compra? (1: Sí, 0: No): ");
        scanf("%i", &opcion);
 
    } while (opcion == 1);
 
    igv = subtotal * 0.18;
    descuento = subtotal * 0.06;
 
    total = subtotal + igv - descuento;
 
    printf("\nSubtotal: %.2f soles\n", subtotal);
    printf("IGV (18%%): %.2f soles\n", igv);
    printf("Descuento (6%%): %.2f soles\n", descuento);
    printf("Total a pagar: %.2f soles\n", total);
    printf("Gracias por su compra.\n");
 
    return 0;
}
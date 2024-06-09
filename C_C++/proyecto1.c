#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int cantidad;
    float precio;
    char nombre[100];
    char tipo;
    float subtotal, descuento, igv, total;
    char continuar;

    do {
        printf("Ingrese el nombre del producto: ");
        scanf("%s", nombre);

        if (strcmp(nombre, "Polos") == 0) {
            printf("Ingrese el tipo de polo (manga corta: 1) (manga larga: 2): ");
            scanf(" %c", &tipo);
            printf("Ingrese la cantidad de Polos: ");
            scanf("%d", &cantidad);

            if (cantidad <= 0) {
                printf("La cantidad no puede ser menor a la unidad.\n");
            } else if (cantidad <= 5) {
                precio = 20;
                if (tipo == '2') {
                    precio += 2;
                }
                printf("El precio de cada polo es de S/.%.2f.\n", precio);
            } else if (cantidad <= 11) {
                precio = 19.50;
                if (tipo == '2') {
                    precio += 2;
                }
                printf("El precio de cada polo es de S/.%.2f.\n", precio);
            } else if (cantidad <= 99) {
                precio = 19;
                if (tipo == '2') {
                    precio += 2;
                }
                printf("El precio de cada polo es de S/.%.2f.\n", precio);
            } else {
                precio = 18;
                if (tipo == '2') {
                    precio += 2;
                }
                printf("El precio de cada polo es de S/.%.2f.\n", precio);
            }

            subtotal = precio * cantidad;
            descuento = subtotal * 0.06;
            igv = subtotal * 0.18; 
            total = subtotal - descuento + igv;

            printf("Subtotal: S/.%.2f\n", subtotal);
            printf("Descuento: S/.%.2f\n", descuento);
            printf("IGV: S/.%.2f\n", igv);
            printf("Total: S/.%.2f\n", total);
        } else {
            printf("El producto no existe.\n");
        }

        printf("¿Desea continuar con otra venta? (Si : 1) (No : 0): ");
        scanf(" %c", &continuar);
    } while (continuar == '1');

    printf("Gracias por su visita.\n");
    return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int opcion, moneda, loop, password;
    float  saldo_inicial_soles=400, saldo_inicial_dolares=400, retiro, agregar;

    

    

    
    do{
        printf("Ingrese la contraseña: ");
        scanf("%i", &password);
        if(password == 12345){

            printf("GlobalNet");
            printf("\nIndica la operacion que deseas realizar");
            printf("\n1. Deposito");
            printf("\n2. Retiro");
            printf("\n3. Consulta");
            printf("\n4. Salir");
            printf("\nOpcion: ");
            scanf("%i", &opcion);
            
            switch(opcion){
                case 1:
                    printf("¿Desea ingresar en Soles (1), o en Dolares (2)?\n");
                    scanf("%i", &moneda);

                    printf("\nDigite la cantidad que desea ingresar: ");
                    scanf("%f", &agregar);
                    if(moneda == 1){
                        saldo_inicial_soles += agregar;
                        printf("El saldo actual es: S/.%.2f", saldo_inicial_soles);
                    }else if(moneda == 2){
                        saldo_inicial_dolares += agregar;
                    printf("El saldo actual es: $ %.2f", saldo_inicial_dolares);
                    }else{
                        printf("No es un numero valido");
                    }
                    printf("\n¿Desea realizar otra operacion? Si (1), No (0)\n");
                    scanf("%i", &loop);
                    break;
                
                case 2:
                    printf("¿Desea retirar en Soles (1), o en Dolares (2)?\n");
                    scanf("%i", &moneda);

                    printf("\nDigite la cantidad que desea ingresar: ");
                    scanf("%f", &retiro);
                    if(moneda == 1){
                        saldo_inicial_soles -= retiro;
                        printf("El saldo actual es: S/.%.2f", saldo_inicial_soles);
                    }else if(moneda == 2){
                        saldo_inicial_dolares -= retiro;
                    printf("El saldo actual es: $ %.2f", saldo_inicial_dolares);
                    }else{
                        printf("No es un numero valido");
                    }
                    printf("\n¿Desea realizar otra operacion? Si (1), No (0)\n");
                    scanf("%i", &loop);
                    break;
                    
                case 3:
                    printf("El dinero disponible en cuenta es: S/.%.2f y $ %.2f", saldo_inicial_soles, saldo_inicial_dolares);
                    printf("\n¿Desea realizar otra operacion? Si (1), No (0)\n");
                    scanf("%i", &loop);
                    break;
                case 4: break;
                default: 
                    printf("Numero no disponible");
                    printf("¿Desea realizar otra operacion? Si (1), No (0)\n");
                    scanf("%i", &loop);
                    break;
            }
            system("cls");

        }else{
        printf("Contraseña incorrecta");
        printf("\n¿Desea intentar otra vez? Si (1), No (0)\n");
        scanf("%i", &loop);
        }


    }while(loop == 1);
    
    printf("Gracias por usar GlobalNet");
    
    return 0;
}
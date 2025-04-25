#include <stdio.h> 
#include "funciones.h"

int main(){
    int opcion=0;
    while(1){
    printf("bienvenido al menu las opciones son las siguientes:\n");
    printf("1. verificar si un numero es primo\n");
    printf("2. calcular el factorial de un numero \n");
    printf("3. contar numeros pares e impares\n");
    printf("4. mostrar multiplos de 3 entre 1 y N\n");
    printf("5. salir del programa\n");
    scanf("%d", &opcion);
    switch (opcion){
        case 1:
        int numero;
        printf("Ingrese un número: ");
        scanf("%d", &numero);
        if (EsPrimo(numero)){
        printf("%d no es primo.\n", numero);
        }
        else{   
        printf("%d es primo.\n", numero);}
        

    return 0;
        break;    
        case 2:
            factorial();
            break;
        case 3:
            ContarParesImpares();
            break;
        case 4:
            Multiplosde3();
            break;
        case 5: 
            printf("saliendo del programa....");
            break;
        default:
            printf("ingresa una opcion valida");
    }
    if (opcion == 5){
        printf("Saliendo del programa...\n");
        break;
    }
    }
    return 0;
    }
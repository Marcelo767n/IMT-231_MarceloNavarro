//mini menu con switch 
#include <stdio.h>
#include "funciones.h"
int main(){
    int opcion=0;
    while (1){
    printf("elige una opcion: \n");
    printf("1. Sumar\n");
    printf("2. Restar\n");    
    printf("3. Multiplicar\n");
    printf("4. salir\n");
    scanf("%d", &opcion);
    switch (opcion){
        case 1:
            sumar();
            break;
        case 2:
            restar();
            break;
        case 3:
            multiplicar();
            break;
        case 4:
            break;
        default:
            printf("Opción no válida. Intente de nuevo.\n");
            break;
    }
    if (opcion == 4){
        printf("Saliendo del programa...\n");
        break;
    }
    }
}
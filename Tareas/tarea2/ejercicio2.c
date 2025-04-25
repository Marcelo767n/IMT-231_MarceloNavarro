#include <stdio.h>
#include "funciones.h"
// contador de digitos
int main(){
    int num=0;
    while (1){
        printf("ingresa un numero para saber cuantos digitos tiene\n");
        scanf("%d", &num);
        if (num<=0){
            printf("saliendo del programa ingresa un numero mayor a 0\n");
            break;
        }
        else{
            cont_digitos(num);
        }
    }
}
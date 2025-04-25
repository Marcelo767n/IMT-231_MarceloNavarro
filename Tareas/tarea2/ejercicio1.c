#include <stdio.h>
#include "funciones.h"
// par o impar 
int main(){
    int num=0;
    while (1){
        printf("ingresa un numero para verificar si es par o impar\n");
        scanf("%d", &num);
        if (num<=0){
            printf("saliendo del programa\n");
            break;
        }
        else{
            par_impar(num);
        }
    }
    return 0;
}


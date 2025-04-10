#include <stdio.h>
#include "funciones.h"

int par_impar(int a){
    if (a>0){    
        if (a%2==0){
            printf("el numero %d es par\n", a);
        }else{
            printf("el numero %d es impar\n", a);
        }
    }
    return 0;
}
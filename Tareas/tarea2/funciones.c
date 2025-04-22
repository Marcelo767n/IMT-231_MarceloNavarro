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
int cont_digitos(int a){
    int cont=0;
    while (a>0){
        a=a/10;
        cont++;
    }
    printf("el numero tiene %d digitos\n", cont);
    return cont;
}
void SemaforoColores() {
    typedef enum { rojo, verde, amarillo } semaforo;
    static semaforo estado = rojo; // 'static' para conservar el valor entre llamadas

    switch (estado) {
        case rojo:
            printf("El semáforo está en ROJO\n");
            estado = verde;
            break;
        case verde:
            printf("El semáforo está en VERDE\n");
            estado = amarillo;
            break;
        case amarillo:
            printf("El semáforo está en AMARILLO\n");
            estado = rojo;
            break;
    }
}
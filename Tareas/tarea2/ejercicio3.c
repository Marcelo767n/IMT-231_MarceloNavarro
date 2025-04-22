#include <stdio.h>
#include "funciones.h"

int main(){
    printf("simulacion del semaforo, dura 10 ciclos\n");
    for (int i=0; i<10; i++){
        SemaforoColores();
        printf("ciclo: %d\n", i+1);
    }
}
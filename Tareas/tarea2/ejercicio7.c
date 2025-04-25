#include <stdio.h>
#include "funciones.h"

int main() {
    int num, contador = 0;
    while (1) {
        printf("Ingrese un número (-1 para salir): ");
        scanf("%d", &num);
        if (num == -1) break;
        if (esMultiploDe3(num)) contador++;
    }
    printf("Total de múltiplos de 3 ingresados: %d\n", contador);
    return 0;
}

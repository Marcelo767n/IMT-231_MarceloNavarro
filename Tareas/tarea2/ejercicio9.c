#include <stdio.h>
#include "funciones.c"

int main() {
    int n;
    while (1) {
        printf("Ingrese un numero para invertirlo (un digito para salir): ");
        scanf("%d", &n);
        if (n >= 0 && n < 10) break;
        printf("Número invertido: %d\n", invertirNumero(n));
    }
    return 0;
}

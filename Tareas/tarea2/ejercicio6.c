#include <stdio.h>
#include "funciones.h"

int main() {
    int a, b;
    while (1) {
        printf("Ingrese dos números (0 0 para salir): ");
        scanf("%d %d", &a, &b);
        if (a == 0 && b == 0) {
            printf("Saliendo del programa...\n");
            break;
        }
        compararNumeros(a, b);
    }
    return 0;
}

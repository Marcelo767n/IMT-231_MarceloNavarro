#include <stdio.h>
#include "funciones.c"

int main() {
    int a, b;
    while (1) {
        printf("Ingrese dos números (0 0 para salir): ");
        scanf("%d %d", &a, &b);
        if (a == 0 && b == 0) break;
        compararNumeros(a, b);
    }
    return 0;
}

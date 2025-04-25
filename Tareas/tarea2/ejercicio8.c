#include <stdio.h>
#include "funciones.c"

int main() {
    int n;
    while (1) {
        printf("Ingrese un numero para calcular el factorial (0 o negativo para salir): ");
        scanf("%d", &n);
        if (n <= 0) break;
        printf("El factorial de %d es %d\n", n, factorial(n));
    }
    return 0;
}

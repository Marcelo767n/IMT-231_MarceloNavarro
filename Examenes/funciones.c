#include <stdio.h>
#include "funciones.h"

int Esprimo(int n) {
    if (n <= 1) return 0;
    for (int i = 2; i < n; i++) {
        if (n % i == 0)
            return 0;
    }
    return 1;
}

void factorial() {
    int a, fact = 1;
    printf("Ingresa un número para hallar el factorial: ");
    scanf("%d", &a);

    if (a < 0) {
        printf("No se puede calcular el factorial de un número negativo.\n");
        return;
    }

    for (int i = 1; i <= a; i++) {
        fact *= i;
    }
    printf("El factorial de %d es: %d\n", a, fact);
}

void ContarParesImpares() {
    int limite;
    printf("Contador de pares e impares, ingresa un número límite: ");
    scanf("%d", &limite);

    int ContadorPar = 0;
    int ContadorImpar = 0;

    for (int i = 1; i <= limite; i++) {
        if (i % 2 == 0) {
            ContadorPar++;
        } else {
            ContadorImpar++;
        }
    }

    printf("Los números pares son: %d\n", ContadorPar);
    printf("Los números impares son: %d\n", ContadorImpar);
}

void Multiplosde3() {
    int b;
    printf("Ingresa un número límite para mostrar los múltiplos de 3: ");
    scanf("%d", &b);

    printf("Múltiplos de 3 hasta %d:\n", b);
    for (int i = 1; i <= b; i++) {
        if (i % 3 == 0) {
            printf("%d ", i);
        }
    }
    printf("\n");
}

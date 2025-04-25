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
//acumulador de valores positivos   
#include <stdio.h>

// Declaración de la función (puede ir también en un .h si quieres aún más organizado)
void acumular_positivos() {
    int numero = 0;
    int suma = 0;

    printf("Acumulador de valores positivos.\n");
    printf("Introduce números (un número negativo para terminar):\n");

    while (1) {
        printf("Número: ");
        scanf("%d", &numero);

        if (numero < 0) {
            break;
        }
        suma += numero;
    }

    printf("La suma de los números positivos es: %d\n", suma);
}
void sumar() {
    float a, b, resultado;
    printf("Ingrese el primer número: ");
    scanf("%f", &a);
    printf("Ingrese el segundo número: ");
    scanf("%f", &b);
    resultado = a + b;
    printf("Resultado: %.2f + %.2f = %.2f\n", a, b, resultado);
}

void restar() {
    float a, b, resultado;
    printf("Ingrese el primer número: ");
    scanf("%f", &a);
    printf("Ingrese el segundo número: ");
    scanf("%f", &b);
    resultado = a - b;
    printf("Resultado: %.2f - %.2f = %.2f\n", a, b, resultado);
}

void multiplicar() {
    float a, b, resultado;
    printf("Ingrese el primer número: ");
    scanf("%f", &a);
    printf("Ingrese el segundo número: ");
    scanf("%f", &b);
    resultado = a * b;
    printf("Resultado: %.2f * %.2f = %.2f\n", a, b, resultado);
}

void compararNumeros(int a, int b) {
    if (a > b)
        printf("El primer número %d es mayor que el segundo %d\n", a, b);
    else if (a < b)
        printf("El segundo número %d es mayor que el primero %d\n", b, a);
    else
        printf("Ambos números son iguales: %d\n", a);
}


int esMultiploDe3(int num) {
    return num % 3 == 0;
}


int factorial(int n) {
    int f = 1;
    for (int i = 1; i <= n; i++)
        f *= i;
    return f;
}

int invertirNumero(int num) {
    int invertido = 0;
    while (num > 0) {
        invertido = invertido * 10 + num % 10;
        num /= 10;
    }
    return invertido;
}

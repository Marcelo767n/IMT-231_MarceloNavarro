#include <stdio.h>

int main() {
    int numero, contador = 0;
    printf("Ingrese un numero entero: ");
    scanf("%d", &numero);

    if (numero == 0) {
        contador = 1;
    } else {
        while (numero != 0) { 
            numero= numero / 10; // Dividir el numero por 10
            // para eliminar el ultimo digito
            // y contar cuantas veces se puede dividir
            // hasta llegar a 0
            contador++;
        }

    }

    printf("La cantidad de digitos es: %d\n", contador);
    return 0;
}

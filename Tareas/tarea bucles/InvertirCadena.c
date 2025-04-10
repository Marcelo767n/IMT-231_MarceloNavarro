#include <stdio.h>

int main() {
    char cadena[100];
    int longitud = 0;

    printf("Ingrese una palabra: ");
    scanf("%s", cadena);

    while (cadena[longitud] != '\0') {
        longitud++;
    }

    printf("Palabra invertida: ");
    for (int i = longitud - 1; i >= 0; i--) {
        printf("%c", cadena[i]);
    }
    printf("\n");

    return 0;
}

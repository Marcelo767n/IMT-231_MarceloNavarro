#include <stdio.h>
//comparacion de dos numeros 
int main(){
    float num1=0;
    float num2=0;
    printf("Ingrese el primer numero a comparar: ");
    scanf("%f", &num1);
    printf("Ingrese el segundo numero a comparar: ");
    scanf("%f", &num2);
   printf("num1 = %.2f, num2 = %.2f\n", num1, num2);

    if (num1 > num2) {
        printf("El primer numero %.2f es mayor que el segundo %.2f.\n", num1, num2);
    }
    else if (num1 < num2) {
        printf("El segundo numero %.2f es mayor que el primero %.2f.\n", num2, num1);
    }
    else {
        printf("Ambos numeros son iguales: %.2f y %.2f.\n", num1, num2);
    }

    return 0;
}
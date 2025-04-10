#include <stdio.h>
int main(){
    printf("esto imprimira la secuancia de 1 al numero que selecciones\n");
    printf("ingrese el numero que sera el limite de la secuencia\n");
    int num;
    scanf("%d", &num);

    for (int i = 1; i <= num; i++) {
        printf("numero %d \n", i);
    }
    return 0;
}
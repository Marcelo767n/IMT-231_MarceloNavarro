#include <stdio.h>
//suma de los numeros del 1 al numero que selecciones
int main(){
    int num=0;
    printf("esto imprimira la suma de los numeros del 1 al numero que selecciones\n");
    printf("ingrese el numero que sera el limite de la secuencia\n");
    scanf("%d", &num);
    int suma=0;
    for (int i=1; i <=num; i++){
        suma+=i;
        printf("suma hasta el numero %d es %d\n", i, suma);
    }
    return 0;
}
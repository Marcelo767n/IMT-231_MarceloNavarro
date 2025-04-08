#include <stdio.h>
// Verifica si un número es positivo, negativo o cero
int main(){
    int num=0;
    printf("ingrese un numero:\n ");
    scanf("%d", &num);
    if (num>0){
        printf("el numero %d es positivo\n", num);
    }else if(num<0){
        printf("el numero %d es negativo\n", num);
    }else{
        printf("el numero %d es cero\n", num);
    }
    return 0;
}
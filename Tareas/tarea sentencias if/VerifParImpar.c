#include <stdio.h>
//verificar si un numero es par o impar
int main(){
    int num=0;
    printf("ingrese un numero\n");
    scanf("%d", &num);
    if (num%2==0){
        printf("el numero %d es par\n", num);
    }else{
        printf("el numero %d es impar\n", num);
    }
    return 0;
}
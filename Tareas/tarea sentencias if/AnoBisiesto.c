#include <stdio.h>
int main(){
    int anio=0;
    printf("ingrese un Año:\n ");
    scanf("%d", &anio);
    if (anio%4==0 && anio%100!=0 || anio%400==0){
        printf("el año %d es bisiesto\n", anio);
    }else{
        printf("el año %d no es bisiesto\n", anio);
    }
    return 0;
}
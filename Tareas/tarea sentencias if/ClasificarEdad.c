#include <stdio.h>
//clasificar la edad de una persona
int main(){
    int edad=0;
    printf("ingrese su edad:\n");
    scanf("%d",&edad);
    if (edad<13){
        printf("estas en la infancia\n");
    }else if ((edad>=13) && (edad<18)){
        printf("eres un adolescente\n");
    }else if (edad>=18) {
        printf("eres un adulto\n");
    }
    return 0;
    }
//Operadores de asignacion
#include<stdio.h>
int main(){
    int edad;
    printf("Digite la edad: ");
    scanf("%i",&edad);
    

    (edad<=18)? printf("\nEres menor de edad"): printf("\nEres mayor de edad");
    

    return 0;
}
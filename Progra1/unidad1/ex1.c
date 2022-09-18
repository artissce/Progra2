/*
EXAMEN PARCIAL 1
programa euclides
Ana Karen Cuenca Esquivel - 177932
25/02/2022*/

#include<stdio.h>
int main(){

    int a,b,r;
    printf("Ingresa el primer numero: ");
    scanf("%d",&a);
    printf("Ingresa el segundo numero: ");
    scanf("%d",&b);
    while (b!=0){
        r=a%b;
        a=b;
        b=r;
        printf("\n El mcd es: %d",a);
    }
    return 0;
}
/*
EXAMEN PARCIAL 1
Programa que calcula area en un menu
Ana Karen Cuenca Esquivel - 177932
25/02/2022*/

#include<stdio.h>


int main(void){
    int opcion;
    float radio_cono, alt_cono, vol_cono, radio_esfe, vol_esfe, radio_cili, alt_cili, vol_cili, pi=3.1416,g;
    printf("\tBienvenido a su calculadora de volumen");
    do{
        printf("\n");
        printf("\n1. Calcular area de un cono");
        printf("\n2. Calcular area de una esfera");
        printf("\n3. Calcular area de un cilindro");
        printf("\n4. SALIR");
        printf("\n Selecciona tu opcion: ");
        scanf("\n%i",&opcion);
        
        switch(opcion){
            case 1: 
            printf("Ingrese el radio del cono:");
            scanf("%f",&radio_cono);
            printf("Ingrese la altura del cono:");
            scanf("%f",&alt_cono);
            printf("Ingrese la g del cono:");
            scanf("%f",&g);
            vol_cono=(pi*radio_cono*radio_cono)+(pi*radio_cono*g);
            printf("\nTu area es: %f",vol_cono);
            break;

            case 2:
            printf("Ingrese el radio de la esfera:");
            scanf("%f",&radio_esfe);
            vol_esfe=(4*pi*radio_esfe*radio_esfe);
            printf("\nTu area es: %f",vol_esfe);
            break;
    
            case 3:
            printf("Ingrese el radio del cilindro:");
            scanf("%f",&radio_cili);
            printf("Ingrese la altura del cilindro:");
            scanf("%f",&alt_cili);
            vol_cili=2*pi*radio_cili*(alt_cili+radio_cili);
            printf("\nTu area es:%f",vol_cili);
            break;
        }
    }
    while (opcion !=4);
    return 0;
    
}
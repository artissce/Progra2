/*Programa menu
Ana Karen Cuenca Esquivel - 177932
04/02/2022
*/
#include <stdio.h>

int main()
{
	int op;
    printf("MENU DE OPCIONES");
    printf("\n");
    printf("\n1. Opcion A");
    printf("\n2. Opcion B");
    printf("\n2. Opcion C");
    printf("\n4. Salir");
    printf("\n Selecciona tu opcion: ");
    scanf("\n%i",&op);
        switch(op){
            case 1: 
            printf("Seleccionaste la opcion: A");
            break;

            case 2:
            printf("Seleccionaste la opcion: B");
            break;
    
            case 3:
            printf("Seleccionaste la opcion: C");
            break;

            case  4:
            printf("Saliste del menu");
            break;

            default:
            printf("ERROR");
        }
    
	return 0;
}
void trapecio(bma,bme,h,at){
    printf("\nDame la base mayor:");
    scanf("%i",&bma);
    printf("\nDame la base menor");
    scanf("%i",&bme);
    printf("\nDame la altura");
    scanf("%i",&h);
    at=((bma+bme)*h)/2;
    printf("\nEl area del trapecio es: %i",at);
}
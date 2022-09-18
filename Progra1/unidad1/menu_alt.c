/* Ana Karen Cuenca Esquivel - 177932
11/02/2022
Programa que genera letras y numeros aleatorios
*/
#include<stdio.h>
#include <stdlib.h>
#include <time.h>


int main(void){
    int opcion,max,min,i,n;
    printf("\tBienvenido");
    do{
        printf("\n");
        printf("\n1. Genera 10 letras mayusculas de forma aleatoria");
        printf("\n2. Genera 10 letras minusculas de forma aleatoria");
        printf("\n3. Genera 10 numeros aleatorios entre 100 y 500");
        printf("\n4. SALIR");
        printf("\n Selecciona tu opcion: ");
        scanf("\n%i",&opcion);
        
        switch(opcion){
            case 1: 
             for (i=1;i<=10;i++){
                 min=65, max=90;
                 n=min+rand()%(max-min+1);
                 printf("%c ",n);
             }
            break;

            case 2:
             for (i=1;i<=10;i++){
                 min=97, max=122;
                 n=min+rand()%(max-min+1);
                 printf("%c ",n);
            }
            break;
    
            case 3:
            for (i=1;i<=10;i++){
                 min=100, max=500;
                 n=min+rand()%(max-min+1);
                 printf("%i,",n);
            }
            break;
        }
    }
    while (opcion !=4);
    return 0;

}
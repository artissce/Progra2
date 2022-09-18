/*Programa que da numeros aleatorios de acuerdo a un rango
Ana Karen Cuenca Esquivel - 177932
04/02/2022
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (){
    int n,min,max,i;
    srand (time(NULL));
    printf("Genereado de numeros aleatorios\n\n");
    printf("Indica el valor minimo: ");
    scanf("%i",&min);
    printf("Indica el valor maximo: ");
    scanf("%i",&max);
    for (i=1;i<=10;i++){
        n=min+rand()%(max-min+1);
        printf("El numero %i es._ %i\n",i,n);
    }
    return 0;
}
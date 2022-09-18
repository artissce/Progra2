#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(){
    int n=0,i;
    //float dato[100]={0.0};
    char dato[50];
    system("Nota prueba.txt");
    FILE *puntero;
    puntero=fopen("prueba.txt","r");//abre nuevo archivo (borra existente)
    
    do{
        //fscanf(puntero,"%f",&dato[n]);
        fgets(dato,50,puntero);
        //printf("%.2f\n",dato[n]);
        puts(dato);
    }while(!feof(puntero));
    printf("\n");
    fclose(puntero);
    
    return 0;
}
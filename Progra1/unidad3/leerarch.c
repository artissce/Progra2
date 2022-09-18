#include <stdio.h>
#include <string.h>

int main(){
    FILE *puntero;
    puntero=fopen("alumno.txt","r");
    int num,i;
    if(puntero!=NULL){
        while(!feof(puntero)){//mienrtras no ha llegado al cierre
            fscanf(puntero,"%d",&num);
            printf("%d\n",num);
        }
    }
    else
        printf("Error al abrir el archivo\n");
    fclose(puntero);

    return 0;
}
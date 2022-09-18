#include <stdio.h>
/*
Ana Karen Cuenca Esquivel - 177932
25/03/2022
Programa que calcula impuesto y sueldo neto
*/
float tabla[8][4]={
    {9614.67,11176.62,772.1,0.16},
    {11176.63,13381.47,1022.01,0.1792},
    {13381.48,26988.5,1417.12,0.2136},
    {26988.51,42537.58,4323.58,0.2352},
    {42537.59,81211.25,7980.73,0.3},
    {81211.26,108281.67,19582.83,0.32},
    {108281.68,324845.01,28245.36,0.34},
    {324845.02,9999999,101876.9,0.35}
};

void despliegue_tabla(){
int f,c;
printf("  Inferior\t  Superior\tCuota fija\t Excedente\n");
    for(f=0;f<8;f++){
        for(c=0;c<4;c++)
            printf("%10.2f\t",tabla[f][c]);
        printf("\n");
    }
}

int fila(int sueldo){
    for(int i=0;i<8;i++){
        if(sueldo<tabla[i][1])
        return i;
    }
}

float ISPT(float sueldo, int f){
    float impuesto;
    impuesto=sueldo-tabla[f][0];//resta
    impuesto=impuesto*tabla[f][3];
    impuesto= impuesto+tabla[f][2];//suma cuota fija
    return impuesto;
}
int main(){
    float sueldo=0;
    despliegue_tabla();
    printf("\nIngrese un sueldo mayor a $10k: ");
    scanf("%f",&sueldo);
    printf("\nEl impuesto es: %.2f",ISPT(sueldo,fila(sueldo)));
    printf("\nEl sueldo neto es: %.2f",(sueldo)-ISPT(sueldo,fila(sueldo)));
}
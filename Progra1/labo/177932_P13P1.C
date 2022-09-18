#include <stdio.h>
#include <time.h>
#include <stdlib.h>
//#include <conio.h>

float precio[6][5];//variable global
//DECLARACION FUNCIONES
void encabezado();
void genera(float precio[6][5]);
void despliega(float precio[6][5]);
void margen();

int main(){
    encabezado();//imprime mis datos
    genera(precio);//genera los numeros aleaotorios
    despliega(precio);//imprime con tabulacion, la tabla
    return 0;
}

//funciones
void encabezado(){
	printf("177932 - Ana Karen Cuenca Esquivel\n");//mis datos
    printf("LABORATORIO DE PROGRAMACION 1 - GRUPO:C\n");
    printf("SEMESTRE 2 - PRAC 13 - 26/04/22\n");
    getchar();
    system("clear");//limpia la terminal
}
void genera(float precio[6][5]){
    srand(time(NULL));//semilla o valor inicial
    int f,c,deci=0;//variables para el ciclo
    float ale=0;
    //culumna lata
    for(f=0;f<6;f++){//recorre por fila
        for(c=0;c<1;c++){//recorre por columna
            ale=(50+rand()%(100-50))/10.0f;//genera numero aleatorio, dividio entre 10 para hacerlo float
            precio[f][c]=ale;//guarda el valor en esa posicion
        }
    }
    //columna 500 ml
    for(f=0;f<6;f++){//recorre por fila
        for(c=1;c<2;c++){//recorre por columna
            ale=(80+rand()%(150-80))/10.0f;//genera numero aleatorio, dividio entre 10 para hacerlo float                precio[f][c]=ale;//guarda el valor en esa posicion
            precio[f][c]=ale;
        }
    }
    //columna 600 ml
    for(f=0;f<6;f++){//recorre por fila
        for(c=2;c<3;c++){//recorre por columna
            ale=(90+rand()%(160-90))/10.0f;//genera numero aleatorio, dividio entre 10 para hacerlo float
            precio[f][c]=ale;//guarda el valor en esa posicion
        }
    }
    //columna 1l
    for(f=0;f<6;f++){//recorre por fila
        for(c=3;c<4;c++){//recorre por columna
            ale=(140+rand()%(210-140))/10.0f;//genera numero aleatorio, dividio entre 10 para hacerlo float
            precio[f][c]=ale;//guarda el valor en esa posicion
        }
    }
    //columna 2l
    for(f=0;f<6;f++){//recorre por fila
        for(c=4;c<5;c++){//recorre por columna
            ale=(190+rand()%(270-190))/10.0f;//genera numero aleatorio, dividio entre 10 para hacerlo float
            precio[f][c]=ale;//guarda el valor en esa posicion
        }
    }
}
/*Funcion que imprime los datos en formato de tabla mediante ciclos*/
void despliega(float precio[6][5]){
int f,c,x=0;
    printf("\tLATA\t500ML\t600ML\t1LT\t2LT\n");//encabezados
    do{
        printf("_");
        x++;
    }while(x!=45);
    printf("\nCola");//encabezado fila
    for(f=0;f<1;f++){// recorre fila
        for(c=0;c<5;c++)//recorre columna
            printf("\t%.1f|",precio[f][c]);//imprime el valor asigando
        printf("\n");
    }
    x=0;
    do{
        printf("_");
        x++;
    }while(x!=45);
    printf("\nPepsi");//encabezado fila
    for(f=1;f<2;f++){// recorre fila
        for(c=0;c<5;c++)//recorre columna
            printf("\t%.1f|",precio[f][c]);//imprime el valor asigando
        printf("\n");
    }
    x=0;
    do{
        printf("_");
        x++;
    }while(x!=45);
    printf("\nFanta");//encabezado fila
    for(f=2;f<3;f++){// recorre fila
        for(c=0;c<5;c++)//recorre columna
            printf("\t%.1f|",precio[f][c]);//imprime el valor asigando
        printf("\n");
    }
    x=0;
    do{
        printf("_");
        x++;
    }while(x!=45);
    printf("\nSangria");//encabezado fila
    for(f=3;f<4;f++){// recorre fila
        for(c=0;c<5;c++)//recorre columna
            printf("\t%.1f|",precio[f][c]);//imprime el valor asigando
        printf("\n");
    }
    x=0;
    do{
        printf("_");
        x++;
    }while(x!=45);
    printf("\nSprite");//encabezado fila
    for(f=4;f<5;f++){// recorre fila
        for(c=0;c<5;c++)//recorre columna
            printf("\t%.1f|",precio[f][c]);//imprime el valor asigando
        printf("\n");
    }
    x=0;
    do{
        printf("_");
        x++;
    }while(x!=45);
    printf("\nMirinda");//encabezado fila
    for(f=5;f<6;f++){// recorre fila
        for(c=0;c<5;c++)//recorre columna
            printf("\t%.1f|",precio[f][c]);//imprime el valor asigando
        printf("\n");
    }
    
}
void margen(){

}
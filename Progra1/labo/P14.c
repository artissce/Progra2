#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "color.h"
//#include <conio.h>
//#include <windows.h>
//#define color SetConsoleTextAttribute //variable de color



//DECLARACION FUNCIONES
void encabezado();
//semana 1
void genera(float precio[6][5]);
void despliega(float precio[6][5],char marca[][7],char presentacion[][5]);

//semana 2
void unLitro(float precio[6][5]);
void porProducto(float precio[6][5]);
void porPresentacion(float precio[6][5],char presentacion[5][5]);

void margen();
void gotoxy(int x, int y){
    printf("\e[%i;%iH",x,y);
}
//FUNCION PRINCIPAL
int main(){
    float precio[6][5];//variable
    char marca[6][7]={"Coca","Pepsi","Fanta","Sangria","Sprite","Mirinda"};
    char presentacion[5][5]={"LATA","500ML","600ML","1LT","2LT"};

    encabezado();//imprime mis datos
    genera(precio);//genera los numeros aleaotorios
    margen();
    despliega(precio,marca,presentacion);//imprime con tabulacion, la tabla
    
    
    /*porPresentacion(precio);//SOLO ORDENAMIENTO
    unLitro(precio);//MALA IMPRESION // ORDENAMIENTO CORRECTO
    */
    return 0;
}

//funciones
void encabezado(){
	printf("177932 - Ana Karen Cuenca Esquivel\n");//mis datos
    printf("LABORATORIO DE PROGRAMACION 1 - GRUPO:C\n");
    printf("SEMESTRE 2 - PRAC 13 - 26/04/22\n");
    printf("\nEnter para continuar");
    getchar();//cambiar para windows
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
void despliega(float precio[6][5],char marca[][7],char presentacion[][5]){
    int f,c,x,y,i;
    printf("\tLATA\t500ML\t600ML\t1LT\t2LT\n");//encabezados
    /*
    for(i=0;i<5;i++){
        gotoxy(x,y);
        printf("\n%s",presentacion[i]);//im[rime]
        x=x+8;//coordenada
    }
    x=0;
    y=2;
    for(i=0;i<6;i++){
        gotoxy(x,y);
        printf("%s",marca[i]);//im[rime]
        y=y+2;//coordenada
    }*/
    printf("\nCola");//encabezado fila
    for(f=0;f<1;f++){// recorre fila
        for(c=0;c<5;c++)//recorre columna
            printf("\t%.1f",precio[f][c]);//imprime el valor asigando
        printf("\n");
    }

    printf("\nPepsi");//encabezado fila
    for(f=1;f<2;f++){// recorre fila
        for(c=0;c<5;c++)//recorre columna
            printf("\t%.1f",precio[f][c]);//imprime el valor asigando
        printf("\n");
    }

    printf("\nFanta");//encabezado fila
    for(f=2;f<3;f++){// recorre fila
        for(c=0;c<5;c++)//recorre columna
            printf("\t%.1f",precio[f][c]);//imprime el valor asigando
        printf("\n");
    }

    printf("\nSangria");//encabezado fila
    for(f=3;f<4;f++){// recorre fila
        for(c=0;c<5;c++)//recorre columna
            printf("\t%.1f",precio[f][c]);//imprime el valor asigando
        printf("\n");
    }

    printf("\nSprite");//encabezado fila
    for(f=4;f<5;f++){// recorre fila
        for(c=0;c<5;c++)//recorre columna
            printf("\t%.1f",precio[f][c]);//imprime el valor asigando
        printf("\n");
    }
    
    printf("\nMirinda");//encabezado fila
    for(f=5;f<6;f++){// recorre fila
        for(c=0;c<5;c++)//recorre columna
            printf("\t%.1f",precio[f][c]);//imprime el valor asigando
        printf("\n");
    }
    printf("Enter para continuar");
    getchar();
}/*
void porPresentacion(float precio[6][5],char presentacion[5][5]){
    char opcion[0];
    int f, c,l,k,i,j,aux,min;
    printf("\nEscriba la presentacion a consultar sin espacios: ");
    scanf("%[^\n]", opcion);
    if(opcion[0]=='LATA'){
        for(f=0;f<6;f++){// recorre fila //por la posicion podria saber cual es la marca, sin necesidad del arreglo q me falta(para no perder tiempo)
            for(c=0;c<1;c++){//recorre por columna
                for ( l=f+1; l<6;l++) {//ordena el arreglo
                    if (precio[f][c] > precio[l][c]) {
                        k=precio[f][c];
                        precio[f][c]=precio[l][c];
                        precio[l][c]=k;
                    }
                }
    	}
    }
    }
    if(opcion[0]=='500ml'){
        for(f=0;f<6;f++){// recorre fila //por la posicion podria saber cual es la marca, sin necesidad del arreglo q me falta(para no perder tiempo)
            for(c=1;c<2;c++){//recorre por columna
                for ( l=f+1; l<6;l++) {//ordena el arreglo
                    if (precio[f][c] > precio[l][c]) {
                        k=precio[f][c];
                        precio[f][c]=precio[l][c];
                        precio[l][c]=k;
                    }
                }
    	}
    }
    }
    if(opcion[0]=='600ml'){
        for(f=0;f<6;f++){// recorre fila //por la posicion podria saber cual es la marca, sin necesidad del arreglo q me falta(para no perder tiempo)
            for(c=2;c<3;c++){//recorre por columna
                for ( l=f+1; l<6;l++) {//ordena el arreglo
                    if (precio[f][c] > precio[l][c]) {
                        k=precio[f][c];
                        precio[f][c]=precio[l][c];
                        precio[l][c]=k;
                    }
                }
    	}
    }
    }
    if(opcion[0]=='1l'){
        for(f=0;f<6;f++){// recorre fila //por la posicion podria saber cual es la marca, sin necesidad del arreglo q me falta(para no perder tiempo)
            for(c=3;c<4;c++){//recorre por columna
                for ( l=f+1; l<6;l++) {//ordena el arreglo
                    if (precio[f][c] > precio[l][c]) {
                        k=precio[f][c];
                        precio[f][c]=precio[l][c];
                        precio[l][c]=k;
                    }
                }
    	}
    }
    }
    if(opcion[0]=='2l'){
        for(f=0;f<6;f++){// recorre fila //por la posicion podria saber cual es la marca, sin necesidad del arreglo q me falta(para no perder tiempo)
            for(c=4;c<5;c++){//recorre por columna
                for ( l=f+1; l<6;l++) {//ordena el arreglo
                    if (precio[f][c] > precio[l][c]) {
                        k=precio[f][c];
                        precio[f][c]=precio[l][c];
                        precio[l][c]=k;
                    }
                }
    	}
    }
    }
                for(i=0;i<5;i++){
                min=i;
                for(j=i+1;j<5;j++){
                    if(precio[j]<precio[min]){
                        min=j;
                    }
                }
                aux=precio[i];
                precio[i]=precio[min];
                precio[min]=aux;
}
//FUNCION POR CATEGORIA LITRO SIN TERMINAR
void unLitro(float precio[6][5]){
    printf("\nPRESENTACION DE UN LITRO");
    //columna 1l
    int f,c,k=0,l;
    for(f=0;f<6;f++){//recorre por fila
        for(c=3;c<4;c++){//recorre por columna
        for ( l=f+1; l<6;l++) {//ordena el arreglo
            if (precio[f][c] > precio[l][c]) {
                k=precio[f][c];
                precio[f][c]=precio[l][c];
                precio[l][c]=k;
                }
            }
        }
    }
        //  
    printf("\nOrden descendente:\n");
    for(int i=6;i>=5;i--){
        printf("%f ",precio[i]);//MAL
    }//
}
void porProducto(float precio[6][5]){
    printf("Por produtor:");
}
*/
void margen(){
	//HANDLE hd = GetStdHandle(STD_OUTPUT_HANDLE);
    //color(hd,9);
	//Margen para los lados verticales
    int y,x;
	x=6,y=1;
	do{
		x++;
		gotoxy(x,y);
		printf(BBLU"%c",95);
	}while (x<45);
	/*x=7,y=3;
	do{
		x++;
		gotoxy(x,y);
		printf("%c",95);
	}while (x<45);
	x=7,y=5;
	do{
		x++;
		gotoxy(x,y);
		printf("%c",95);
	}while (x<45);
	x=7,y=7;
	do{
		x++;
		gotoxy(x,y);
		printf("%c",95);
	}while (x<45);
	x=7,y=9;
	do{
		x++;
		gotoxy(x,y);
		printf("%c",95);
	}while (x<45);
	x=7,y=11;
	do{
		x++;
		gotoxy(x,y);
		printf("%c",95);
	}while (x<45);
	x=7,y=13;
	do{
		x++;
		gotoxy(x,y);
		printf("%c",95);
	}while (x<45);
	//Margen para los lados horizontales
	x=7,y=1;
	do{
		y++;
		gotoxy(x,y);
		printf("%c",124);
	}while (y<13);
	x=13,y=1;
	do{
		y++;
		gotoxy(x,y);
		printf("%c",124);
	}while (y<13);
	x=21,y=1;
	do{
		y++;
		gotoxy(x,y);
		printf("%c",124);
	}while (y<13);
	x=29,y=1;
	do{
		y++;
		gotoxy(x,y);
		printf("%c",124);
	}while (y<13);
	x=37,y=1;
	do{
		y++;
		gotoxy(x,y);
		printf("%c",124);
	}while (y<13);
	x=45,y=1;
	do{
		y++;
		gotoxy(x,y);
		printf("%c",124);
	}while (y<13);*/
}
/*
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "color.h"
//#include <conio.h>
//#include <windows.h>
//#define color SetConsoleTextAttribute //variable de color

//DECLARACION FUNCIONES
void encabezado();
//semana 1
void genera(float precio[6][5]);
//void desM(char marca[][7]);
//void desP(char presentacion[][5]);
//void desPr(float precio[6][5]);
void despliega(float precio[6][5],char marca[][7],char presentacion[][5]);
void margen();
void gotoxy(int x, int y){
    printf("\e[%i;%iH",x,y);
}

//semana 2
void porPresentacion(float precio[6][5],char presentacion[5][5],char marca[][7]);
void unLitro(float precio[6][5], char marca[6][7]);
void porProducto(float precio[6][5]);


//FUNCION PRINCIPAL
int main(){
    //variables
    float precio[6][5];
    char marca[6][7]={"Coca","Pepsi","Fanta","Sangria","Sprite","Mirinda"};
    char presentacion[5][5]={"LATA","500ML","600ML","1LT","2LT"};

    encabezado();//imprime mis datos
    genera(precio);//genera los numeros aleaotorios
    despliega(precio,marca,presentacion);//imprime con tabulacion, la tabla
    
    porPresentacion(precio,presentacion,marca);
    unLitro(precio, marca);
    porProducto(precio);
    return 0;
}

//FUNCIONES
//👍🏼
void encabezado(){
	printf("177932 - Ana Karen Cuenca Esquivel\n");//mis datos
    printf("LABORATORIO DE PROGRAMACION 1 - GRUPO:C\n");
    printf("SEMESTRE 2 - PRAC 13 - 26/04/22\n");
    printf("\nEnter para continuar");
    getchar();//cambiar para windows
    system("clear");//limpia la terminal
}
//👍🏼
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
/* SUBFUNCIONES DEL DESPLIEGUE*/
void margen(){
    //sin hacer hasta q tenga los otros despliegues
}
void desP(char presentacion[][5]){
    int x=11,y=2,i;
    x=17;
	y=2;
	for (i=0;i<5;i++){ //imprimimos el tipo de producto mediante un ciclo for
		gotoxy(x,y);
		printf("%s", presentacion[i]); //se imrpime 
		x=x+8; //cambia la coordenada
	}
    /*
    for(i=0;i<5;i++){
        gotoxy(x,y);
        printf("\n%s",presentacion[i]);//im[rime]
        x=x+7;//coordenada
    }*/
}
void desM(char marca[][7]){
    int x=2,y=4,i;
	for (i=0; i<6; i++){ //ciclo que cambia entre marca
		gotoxy(x,y);
		printf ("%s\t", marca[i]);//im[rime]
		y=y+2;
	}
    /*
    for(i=0;i<6;i++){
        gotoxy(x,y);
        printf("%s\t",marca[i]);
        x=x+2;//coordenada
    }*/
}
void desPr(float precio[6][5]){
    int f,c,x,y;
    x=17,y=4;
    for(f=0;f<1;f++){// recorre fila
        for(c=0;c<5;c++){//recorre columna
            gotoxy(12,4);
            printf("\t%.1f",precio[f][c]);//imprime el valor asigando
            x=x+3;
        }
    }

    printf("\nPepsi");//encabezado fila
    for(f=1;f<2;f++){// recorre fila
        for(c=0;c<5;c++)//recorre columna
            printf("\t%.1f",precio[f][c]);//imprime el valor asigando
        printf("\n");
    }

    printf("\nFanta");//encabezado fila
    for(f=2;f<3;f++){// recorre fila
        for(c=0;c<5;c++)//recorre columna
            printf("\t%.1f",precio[f][c]);//imprime el valor asigando
        printf("\n");
    }

    printf("\nSangria");//encabezado fila
    for(f=3;f<4;f++){// recorre fila
        for(c=0;c<5;c++)//recorre columna
            printf("\t%.1f",precio[f][c]);//imprime el valor asigando
        printf("\n");
    }

    printf("\nSprite");//encabezado fila
    for(f=4;f<5;f++){// recorre fila
        for(c=0;c<5;c++)//recorre columna
            printf("\t%.1f",precio[f][c]);//imprime el valor asigando
        printf("\n");
    }
    
    printf("\nMirinda");//encabezado fila
    for(f=5;f<6;f++){// recorre fila
        for(c=0;c<5;c++)//recorre columna
            printf("\t%.1f",precio[f][c]);//imprime el valor asigando
        printf("\n");
    }
    printf("Enter para continuar");
    getchar();
}

/*TEMPORAL - Funcion que imprime los datos en formato de tabla mediante ciclos*/
void despliega(float precio[6][5],char marca[][7],char presentacion[][5]){
    //margen();
    //desP(presentacion);
    //desPr(precio);
    //desM(marca);
    int f,c,x=0;
    printf(BBLU"\tLATA\t500ML\t600ML\t1LT\t2LT\n"WHT);//encabezados
    
    printf(BBLU"\nCola"WHT);//encabezado fila
    for(f=0;f<1;f++){// recorre fila
        for(c=0;c<5;c++)//recorre columna
            printf("\t%.1f",precio[f][c]);//imprime el valor asigando
        printf("\n");
    }

    printf(BBLU"\nPepsi"WHT);//encabezado fila
    for(f=1;f<2;f++){// recorre fila
        for(c=0;c<5;c++)//recorre columna
            printf("\t%.1f",precio[f][c]);//imprime el valor asigando
        printf("\n");
    }

    printf(BBLU"\nFanta"WHT);//encabezado fila
    for(f=2;f<3;f++){// recorre fila
        for(c=0;c<5;c++)//recorre columna
            printf("\t%.1f",precio[f][c]);//imprime el valor asigando
        printf("\n");
    }

    printf(BBLU"\nSangria"WHT);//encabezado fila
    for(f=3;f<4;f++){// recorre fila
        for(c=0;c<5;c++)//recorre columna
            printf("\t%.1f",precio[f][c]);//imprime el valor asigando
        printf("\n");
    }

    printf(BBLU"\nSprite"WHT);//encabezado fila
    for(f=4;f<5;f++){// recorre fila
        for(c=0;c<5;c++)//recorre columna
            printf("\t%.1f",precio[f][c]);//imprime el valor asigando
        printf("\n");
    }
    
    printf(BBLU"\nMirinda"WHT);//encabezado fila
    for(f=5;f<6;f++){// recorre fila
        for(c=0;c<5;c++)//recorre columna
            printf("\t%.1f",precio[f][c]);//imprime el valor asigando
        printf("\n");
    }
}

void porPresentacion(float precio[6][5],char presentacion[5][5],char marca[][7]){
    int i=0,j=0,f,c,op,proM;
    float mayor;
    printf(UGRN"\nINSERTE CUAL PRESENTACION DESEA CONSULTAR:"WHT);
    //char op[5];
    printf("\n1.LATA\n");
    printf("\n2.500ML\n");
    printf("\n3.600ML\n");
    printf("\n4.1LT\n");
    printf("\n5.2LT\n");
    //fgets(op,5,stdin);
    scanf("%i",op);
    switch(op){
        case 1:
            for(f=0;f<6;f++){// recorre fila
                for(c=0;c<1;c++){//recorre columna
                    mayor=0;
                    if(precio[f][c]>mayor){
                        mayor=precio[f][c];
                        proM=i;
                    }
                }
            }
            printf("\nLa marca con mayor precio en la presentacion es: %s",marca[proM]);
            break;
        case 2:
            for(f=0;f<6;f++){// recorre fila
                for(c=1;c<2;c++){//recorre columna
                    mayor=0;
                    if(precio[f][c]>mayor){
                        mayor=precio[f][c];
                        proM=i;
                    }
                }
            }
            printf("\nLa marca con mayor precio en la presentacion es: %s",marca[proM]);
            break;
           
        case 3:
            for(f=0;f<6;f++){// recorre fila
                for(c=2;c<3;c++){//recorre columna
                    mayor=0;
                    if(precio[f][c]>mayor){
                        mayor=precio[f][c];
                        proM=i;
                        }
                    }
                }
            printf("\nLa marca con mayor precio en la presentacion es: %s",marca[proM]);
            break;
        case 4:
            for(f=0;f<6;f++){// recorre fila
                for(c=3;c<4;c++){//recorre columna
                    mayor=0;
                    if(precio[f][c]>mayor){
                        mayor=precio[f][c];
                        proM=i;
                    }
                }
            }
            printf("\nLa marca con mayor precio en la presentacion es: %s",marca[proM]);
            break;
        case 5:
            for(f=0;f<6;f++){// recorre fila
                for(c=4;c<5;c++){//recorre columna
                    mayor=0;
                    if(precio[f][c]>mayor){
                        mayor=precio[f][c];
                        proM=i;
                    }
                }
            }
            printf("\nLa marca con mayor precio en la presentacion es: %s",marca[proM]);
            break;
            /*
            //imprimir la marca con el precio mayor
            for(f=0;f<6;f++){
            if(mayor==precio[f][c]){
                printf("\n%c",marca[i][j]);
            }
            else{
                i++;
                j++;
            }*/
            /*
        if(op==presentacion[0][0]){//lata
            //ciclos para definir el mayor
            for(f=0;f<6;f++){// recorre fila
                for(c=0;c<1;c++){//recorre columna
                    mayor=0;
                    if(precio[f][c]>mayor){
                        mayor=precio[f][c];
                    }
                }
            }
            //imprimir la marca con el precio mayor
            for(f=0;f<6;f++){
            if(mayor==precio[f][c]){
                printf("\n%c",marca[i][j]);
            }
            else{
                i++;
                j++;
            }
            
            if(mayor==precio[2][c]){
                printf("PEPSI");
            }
            if(mayor==precio[3][c]){
                printf("FANTA");
            }
            if(mayor==precio[4][c]){
                printf("SANGRIA");
            }
            if(mayor==precio[5][c]){
                printf("SPRITE");
            }
            if(mayor==precio[6][c]){
                printf("MIRINDA");
            }
            }
        }
        if(op==presentacion[1]){//500ml
            //ciclos para definir el mayor
            for(f=0;f<6;f++){// recorre fila
                for(c=1;c<2;c++){//recorre columna
                    mayor=0;
                    if(precio[f][c]>mayor){
                        mayor=precio[f][c];
                    }
                }
            }
            //imprimir la marca con el precio mayor
            for(f=0;f<6;f++){
                if(mayor==precio[f][c]){
                    printf("\n%c",marca[i][j]);
                }
                else{
                    i++;
                    j++;
                }
            }
        }
        if(op==presentacion[2]){//600ml
            //ciclos para definir el mayor
            for(f=0;f<6;f++){// recorre fila
                for(c=2;c<3;c++){//recorre columna
                    mayor=0;
                    if(precio[f][c]>mayor){
                        mayor=precio[f][c];
                    }
                }
            }
            //imprimir la marca con el precio mayor
            for(f=0;f<6;f++){
                if(mayor==precio[f][c]){
                    printf("\n%c",marca[i][j]);
                }
                else{
                    i++;
                    j++;
                }
            }
        }
        if(op==presentacion[3]){//1LT
            //ciclos para definir el mayor
            for(f=0;f<6;f++){// recorre fila
                for(c=3;c<4;c++){//recorre columna
                    mayor=0;
                    if(precio[f][c]>mayor){
                        mayor=precio[f][c];
                    }
                }
            }
            //imprimir la marca con el precio mayor
            for(f=0;f<6;f++){
                if(mayor==precio[f][c]){
                    printf("\n%c",marca[i][j]);
                }
                else{
                    i++;
                    j++;
                }
            }
        }
        if(op==presentacion[4]){//2LT
            //ciclos para definir el mayor
            for(f=0;f<6;f++){// recorre fila
                for(c=4;c<5;c++){//recorre columna
                    mayor=0;
                    if(precio[f][c]>mayor){
                        mayor=precio[f][c];
                    }
                }
            }
            //imprimir la marca con el precio mayor
            for(f=0;f<6;f++){
                if(mayor==precio[f][c]){
                    printf("\n%c",marca[i][j]);
                }
                else{
                    i++;
                    j++;
                }
            }
        }*/
        getchar();
    }
}

    
void unLitro(float precio[6][5], char marca[6][7]){
    int i=0,j=0,f,c;
    printf(UGRN"PRESENTACION DE UN LITRO:\n"WHT);
    float m1=0,m2=0;
    //ciclos para definir el primer mayor
    for(f=0;f<6;f++){// recorre fila
        for(c=3;c<4;c++){//recorre columna de lt
        m1=0;
        if(precio[f][c]>m1){
            m1=precio[f][c];
            }
        }
    }
    //ciclos para definir el segundo mayor
    for(f=0;f<6;f++){// recorre fila
        for(c=3;c<4;c++){//recorre columna de lt
            m1=0;
            if(precio[f][c]>m2){
                if(precio[i][j]==m1)
                    goto fin;
                m2=precio[i][j];
            }
            fin:{}
        }
    }
    //imprimir la marca con el primer mayor
    for(f=0;f<6;f++){
        if(m1==precio[f][c]){
            printf("\n%c",marca[i][j]);
        }
        else{
            i++;
            j++;
        }
    }
    getchar();
}
void porProducto(float precio[6][5]){
    float prom=0,suma=0;
    int f,c;
    printf(UGRN"PROMEDIO POR PRODUCTO\n"WHT);
    for(c=0;c<5;c++){//recorre columnas
        for(f=0;f<1;f++){// recorre fila COCA COLA
            suma=suma+precio[f][c];
        }
        prom=suma/5;//suma de todos los precios de dividido entre las presenatciones
    }
    printf("Coca\t%.2f\n",prom);

    prom=0,suma=0;
    for(c=0;c<5;c++){//recorre columnas
        for(f=1;f<2;f++){// recorre fila pepsi
            suma=suma+precio[f][c];
        }
        prom=suma/5;//suma de todos los precios de dividido entre las presenatciones
    }
    printf("Pepsi\t%.2f\n",prom);
    prom=0,suma=0;
    
    for(c=0;c<5;c++){//recorre columnas
        for(f=2;f<3;f++){// recorre fila fanta
            suma=suma+precio[f][c];
        }
        prom=suma/5;//suma de todos los precios de dividido entre las presenatciones
    }
    printf("Fanta\t%.2f\n",prom);
    prom=0,suma=0;

    for(c=0;c<5;c++){//recorre columnas
        for(f=3;f<4;f++){// recorre fila COCA COLA
            suma=suma+precio[f][c];
        }
        prom=suma/5;//suma de todos los precios de dividido entre las presenatciones
    }
    printf("Sangria\t%.2f\n",prom);
    prom=0,suma=0;

    for(c=0;c<5;c++){//recorre columnas
        for(f=4;f<5;f++){// recorre fila COCA COLA
            suma=suma+precio[f][c];
        }
        prom=suma/5;//suma de todos los precios de dividido entre las presenatciones
    }
    printf("Sprite\t%.2f\n",prom);
    prom=0,suma=0;
    for(c=0;c<5;c++){//recorre columnas
        for(f=5;f<6;f++){// recorre fila COCA COLA
            suma=suma+precio[f][c];
        }
        prom=suma/5;//suma de todos los precios de dividido entre las presenatciones
    }
    printf("Mirinda\t%.2f\n",prom);
}
*/
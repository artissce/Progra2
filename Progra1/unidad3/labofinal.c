#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

//#include <conio.h>
//#include <windows.h>
//#define color SetConsoleTextAttribute //variable de color

//COLORES
#define UGRN "\e[4;32m"
#define GRNB "\e[42m"
#define BMAG "\e[1;35m"
#define WHT "\e[0;37m"
#define BBLU "\e[1;34m"

//DECLARACION FUNCIONES
void encabezado();
//semana 1
void genera(float precio[6][5]);
//void desM(char marca[][7]);
//void desP(char presentacion[][5]);
//void desPr(float precio[6][5]);
void despliega(float precio[6][5]);
void margen();//error por la funcion gotoxy
void gotoxy(int x, int y){//error, todavia no se muy bien como usarlo
    printf("\e[%i;%iH",x,y);
}

//semana 2
void porPresentacion(float precio[6][5],char presentacion[5][5],char marca[6][8]);
void unLitro(float precio[6][5], char marca[6][8]);
void porProducto(float precio[6][5],char marca[6][8]);


//FUNCION PRINCIPAL
int main(){
    //variables
    float precio[6][5];
    char marca[6][8]={"Coca","Pepsi","Fanta","Sangria","Sprite","Mirinda"};
    char presentacion[5][5]={"LATA","500ML","600ML","1LT","2LT"};

    encabezado();//imprime mis datos
    genera(precio);//genera los numeros aleaotorios
    despliega(precio);//imprime con tabulacion, la tabla
    
    porPresentacion(precio,presentacion,marca);
    unLitro(precio, marca);
    porProducto(precio,marca);
    return 0;
}

//FUNCIONES
//👍🏼
void encabezado(){
    
	printf(BMAG"177932 - Ana Karen Cuenca Esquivel\n");//mis datos
    printf("LABORATORIO DE PROGRAMACION 1 - GRUPO:C\n");
    printf("SEMESTRE 2 - PRAC 15 - 10/05/22\n");
    printf("\nEnter para continuar"WHT);
    getchar();//cambiar para windows
    system("clear");//limpia la terminal
    printf(BBLU"\t\tTABLA DE REFRESCOS\n\n");
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

/* SUBFUNCIONES DEL DESPLIEGUE
void desP(char presentacion[][5]){
    int x=11,y=2,i;
    x=17;
	y=2;
	for (i=0;i<5;i++){ //imprimimos el tipo de producto mediante un ciclo for
		gotoxy(x,y);
		printf("%s", presentacion[i]); //se imrpime 
		x=x+8; //cambia la coordenada
	}
    
    for(i=0;i<5;i++){
        gotoxy(x,y);
        printf("\n%s",presentacion[i]);//im[rime]
        x=x+7;//coordenada
    }
}
void desM(char marca[][7]){
    int x=2,y=4,i;
	for (i=0; i<6; i++){ //ciclo que cambia entre marca
		gotoxy(x,y);
		printf ("%s\t", marca[i]);//im[rime]
		y=y+2;
	}

    for(i=0;i<6;i++){
        gotoxy(x,y);
        printf("%s\t",marca[i]);
        x=x+2;//coordenada
    }
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
	x=7,y=3;
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
	}while (y<13);
}*/

//👍🏼
/*TEMPORAL - Funcion que imprime los datos en formato de tabla mediante ciclos*/
void despliega(float precio[6][5]){
    //margen();
    //desP(presentacion);
    //desPr(precio);
    //desM(marca);
    int f,c,x;
    printf(BBLU"\tLATA\t500ML\t600ML\t1LT\t2LT\n"WHT);//encabezados
    x=0;
    do{
        printf(BBLU"_"WHT);
        x++;
    }while(x!=45);
    printf(BBLU"\nCoca"WHT);//encabezado fila
    for(f=0;f<1;f++){// recorre fila
        for(c=0;c<5;c++)//recorre columna
            printf("\t%.1f",precio[f][c]);//imprime el valor asigando
        printf("\n");
    }
    x=0;
    do{
        printf(BBLU"_"WHT);
        x++;
    }while(x!=45);
    printf(BBLU"\nPepsi"WHT);//encabezado fila
    for(f=1;f<2;f++){// recorre fila
        for(c=0;c<5;c++)//recorre columna
            printf("\t%.1f",precio[f][c]);//imprime el valor asigando
        printf("\n");
    }
    x=0;
    do{
        printf(BBLU"_"WHT);
        x++;
    }while(x!=45);
    printf(BBLU"\nFanta"WHT);//encabezado fila
    for(f=2;f<3;f++){// recorre fila
        for(c=0;c<5;c++)//recorre columna
            printf("\t%.1f",precio[f][c]);//imprime el valor asigando
        printf("\n");
    }
    x=0;
    do{
        printf(BBLU"_"WHT);
        x++;
    }while(x!=45);
    printf(BBLU"\nSangria"WHT);//encabezado fila
    for(f=3;f<4;f++){// recorre fila
        for(c=0;c<5;c++)//recorre columna
            printf("\t%.1f",precio[f][c]);//imprime el valor asigando
        printf("\n");
    }
    x=0;
    do{
        printf(BBLU"_"WHT);
        x++;
    }while(x!=45);
    printf(BBLU"\nSprite"WHT);//encabezado fila
    for(f=4;f<5;f++){// recorre fila
        for(c=0;c<5;c++)//recorre columna
            printf("\t%.1f",precio[f][c]);//imprime el valor asigando
        printf("\n");
    }
    x=0;
    do{
        printf(BBLU"_"WHT);
        x++;
    }while(x!=45);
    printf(BBLU"\nMirinda"WHT);//encabezado fila
    for(f=5;f<6;f++){// recorre fila
        for(c=0;c<5;c++)//recorre columna
            printf("\t%.1f",precio[f][c]);//imprime el valor asigando
        printf("\n");
    }
    x=0;
    do{
        printf(BBLU"_"WHT);
        x++;
    }while(x!=45);
}
//👍🏼
void porPresentacion(float precio[6][5],char presentacion[5][5],char marca[6][8]){
    int f,c,op,proM,auxdei=0;
    float mayor;
    printf(UGRN"\n\n\tPRESENTACIONES"WHT);
    //char op[5];
    printf("\n1.LATA");
    printf("\t2.500ML");
    printf("\t3.600ML");
    printf("\t4.1LT");
    printf("\t5.2LT");
    //fgets(op,5,stdin);
    printf(UGRN"\nINSERTE CUAL PRESENTACION DESEA CONSULTAR:"WHT);
    
    do{
        scanf(" %i",&op);
        switch(op){
            case 1:
                auxdei=1;
                c=0;//cambia presentacion
                mayor=precio[0][c];//asignamos la primera opcin
                for(f=0;f<6;f++){// recorre fila
                    if(precio[f][c]>mayor){//validamos q la coordenada sea mayor q la variable mayor
                        mayor=precio[f][c];//asigna el mayor por intercambio
                        proM=f;//poscion en marca
                    }
                }
                printf(WHT"\nLa marca con mayor precio:"GRNB"%s"WHT,marca[proM]);
 
                break;
            case 2:
                auxdei=1;
                c=1;//cambia presentacion
                mayor=precio[0][c];//asignamos la segunda opcin
                for(f=0;f<6;f++){// recorre fila                   
                    if(precio[f][c]>mayor){//validamos q la coordenada sea mayor q la variable mayor
                        mayor=precio[f][c];//asigna el mayor por intercambio
                        proM=f;//poscion en marca
                    }
                }
                printf(WHT"\nLa marca con mayor precio:"GRNB"%s"WHT,marca[proM]);
               
                break;
            case 3:
                auxdei=1;
                c=2;//cambia presentacion
                mayor=precio[0][c];//asignamos la tercera opcin
                for(f=0;f<6;f++){// recorre fila                    
                    if(precio[f][c]>mayor){//validamos q la coordenada sea mayor q la variable mayor
                        mayor=precio[f][c];//asigna el mayor por intercambio
                        proM=f;//poscion en marca
                    }
                }
                printf(WHT"\nLa marca con mayor precio:"GRNB"%s"WHT,marca[proM]);
                
            case 4:
                auxdei=1;
                c=3;
                mayor=precio[0][c];//asignamos la cuarta opcin
                for(f=0;f<6;f++){// recorre fila
                    if(precio[f][c]>mayor){//validamos q la coordenada sea mayor q la variable mayor
                        mayor=precio[f][c];//asigna el mayor por intercambio
                        proM=f;//poscion en marca
                    }
                }
                printf(WHT"\nLa marca con mayor precio:"GRNB"%s"WHT,marca[proM]);
                break;
            case 5:
                auxdei=1;
                c=4;//cambia presentacion
                mayor=precio[0][c];//asignamos la quinta opcin
                for(f=0;f<6;f++){// recorre fila
                    if(precio[f][c]>mayor){//validamos q la coordenada sea mayor q la variable mayor
                        mayor=precio[f][c];//asigna el mayor por intercambio
                        proM=f;//poscion en marca
                    }
                }
                printf(WHT"\nLa marca con mayor precio:"GRNB"%s"WHT,marca[proM]);
                break;
            default:
                printf("ERROR - ESCOGE UNA OPCION VALIDA\n");
                auxdei=0;
                break;

        }
    
        
    }while(auxdei==0);
    getchar();
}
//👍🏼
void unLitro(float precio[6][5], char marca[6][8]){
    int f,c,marc1,marc2,auxdei;
	float m2,m1,leo;
	printf(UGRN"\n\nPRESENTACION DE UN LITRO:\n"WHT);
	c=3;
	m2=precio[0][3];
	marc2=0;
	for(f=0;f<6;f++){
	    if(precio[f][c] >= m2){//validamos el segundo mas grande
	   		m2 = precio[f][c];
        	marc2 = f;
			if(m2 >= m1){//validar el primero mas grande
				leo=m2;//el aux se le asigna el valor del segundo mayor
				m2=m1;//sengundo mayor se le asigna del primer mayor
				m1=leo;//precio mayor se le asinga el valor(intercambio de valores)
                
				auxdei=marc2;//el aux se le asigna el valor del segundo mayor
				marc2=marc1;;//sengundo mayor se le asigna del primer mayor
				marc1=auxdei;//precio mayor se le asinga el valor(intercambio de valores)
		    }
        }    
	}
    printf("\n%s",marca[marc1]);//imprime el primer mayor
    printf("\n%s",marca[marc2]);//imprime el segundo mayor
    
    getchar();
}
//👍🏼
void porProducto(float precio[6][5],char marca[6][8]){
    float prom[6],sum=0,aux=0,p;int f,c,burbuja=0;char leo[20];
    printf(UGRN"\nPROMEDIO POR PRODUCTO\n"WHT);
    //ciclo para sacar promedio por marca, por eso fue MEJOR mandar la cadena marca
    for(f=0;f<6;f++){// recorre fila 
        sum=0;
        for(c=0;c<5;c++){//recorre columnas
            sum=sum+precio[f][c];//guarda la suma
        }
        prom[f]=sum/5;//suma de todos los precios de dividido entre las presenatciones
        printf("%s\t%.2f\n",marca[f],prom[f]);
    }
    //ciclo para calcular marca con menor promedio//ordenar e imrpime el pirmero q seria el menor
    while(burbuja==0){//Entra al ciclo burbuja para ordenamiento
		burbuja=1;//Nos da el valor de burbuja como uno por si ya no hay promedios que ordenar
		for(f=0;f<5;f++){//mueve por coordenada
			if(prom[f]>prom[f+1]){				
				p=prom[f];
				prom[f]=prom[f+1];
				prom[f+1]=p;//cambio de variables
				
				strcpy(leo,marca[f]);//copia cadena aux a la marca
				strcpy(marca[f],marca[f+1]);
				strcpy(marca[f+1],leo);//cambio de varibales
				burbuja=0;//le damos el valor de 0 para confirmar q no hay lugares para mover
			}
		}
	}
    printf(UGRN"\nEL PROMEDIO MAS BAJO:"WHT"%s", marca[0]);
}
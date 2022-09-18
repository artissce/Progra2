#include <stdio.h>//librerias
#include <conio.h>
#include <stdlib.h>
#include <time.h>


//declaracion funciones
void encabezado();

void iniciar();//inicializa el arreglo en ceros
void aleatorio();//numeros aleaotrios del 1 al 45 sin que se repita
void zigzag(int arreglo[5][4]);//impresion de abajo a arriba por columna

//funcion principal
int main(){
	int arreglo[5][4];
	encabezado();
	//filas - columnas
	iniciar();
	srand(time(NULL));
	aleatorio();
	//zigzag();
	
}
/*

SEMANA 1

int aux[45]={0}
	for i
		for j
			do{
				num=1*rand()%45;
				if(aux[num]==0){
					aux[num]=1;
					arreglo[i][j]=num;
					v++;
				}
			}while(v!=20); //o aux[num]!0; MAL  //boleana
			
SEMANA 2	

& direccion			
ptm=pTR ->*ptm =&y
printf("%x",&y);//direccion
a* esclavo
int y=5, x=3, *ptr, *ptm
1003	1001	ptm
1002	1001	ptr	
1001	5	y
1000	3	x

ptr=&y
x=*ptr
x=5

p(*ptr)=5
p(ptr)=1001
p(&ptr)=1002

int *array

array=(int *)malloc(5*sizeof(int));
	cast->casteo, conversion

*/
//funciones
void encabezado(){
	printf("\tMatricula: 177932");
	printf("\n\tNombre: Cuenca Esquivel Ana Karen");
	printf("\n\tProgramacion 2");
	printf("\n\tGrupo:A");
	printf("\n\t16/08/2022\n");
	printf("\t________________________________\n\n");
}

void iniciar(){
	//int x=0;
	printf("\t- INICIALIZACION EN CEROS -\n");
	int arreglo[5][4];
	for(int i=0;i<5;i++){//filas
		for(int j=0;j<4;j++){//columnas
			//scanf("%d",&arreglo[i][j]);
			arreglo[i][j]=0;
			printf(" %d ",arreglo[i][j]);
		}
	}
}
void aleatorio(){
	printf("\n\t- NUMEROS ALEATORIOS -\n");
	int arreglo[5][4], aux[45]={0}, num=0;//arreglo aux para descartar numeros que han salido, inicializado en cero
	bool band=true;
	//int num=1+rand()%45;
	for(int i=0;i<5;i++){//filas
		for(int j=0;j<4;j++){//columnas
			do{
				num=1*rand()%45;
				if(aux[num]==0){
					aux[num]=1;
					arreglo[i][j]=num;
					band=true;
				}
				else{
					band=false;
				}
			}while(band==false); //boleana
			//printf("\n%d\t",arreglo[i][j]);
		}
	}
	zigzag(arreglo);
}

void zigzag(int arreglo[5][4]){
	//columnas impares de arriba a abajo - columnas pares de abajo a arriba
	for(int i=0;i<1;i++){//filas
		for(int j=0;j<4;j++){//columnas
			printf("\t%d",arreglo[i][j]);
		}
		printf("\n");
	}
	
	for(int i=1;i<2;i++){//filas
		for(int j=4;j>0;j--){//columnas
			printf("\t%d",arreglo[i][j]);
		}
		printf("\n");
	}
	for(int i=2;i<3;i++){//filas
		for(int j=0;j<4;j++){//columnas
			printf("\t%d",arreglo[i][j]);
		}
		printf("\n");
	}
	for(int i=3;i<4;i++){//filas
		for(int j=4;j>0;j--){//columnas
			printf("\t%d",arreglo[i][j]);
		}
		printf("\n");
	}
	for(int i=4;i<5;i++){//filas
		for(int j=0;j<4;j++){//columnas
			printf("\t%d",arreglo[i][j]);
		}
		printf("\n");
	}
	
	
}

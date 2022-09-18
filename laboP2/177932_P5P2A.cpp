//Librerias
#include <stdio.h>
#include <time.h>
#include <conio.h>
#include <windows.h>

//ESTRUCTURA
typedef struct{//estructura con la informacion de los alumnos
 char nom_al[20];//nombre del inscrito
 int edad;//edad del inscrito
 int id_al;//id unico para el inscrito
}TipoAl; 

int n, numIns;//declaracion de variables globales

//DECLARACION DE FUNCIONES
void capturaIns(TipoAl **grupos_insc, int n,int a[],char clases[5][15]);
void generaID(TipoAl **grupos_insc, int n,int a[],char clases[5][15]);
void impresionUno(TipoAl **grupos_insc, int n);
void encabezado();

//FUNCION PRINCIPAL
int main(){
	encabezado();
	//arreglo estatico para definir las materias/clases
	char clases[5][15]={{"PROGRAMACION"},{"ELECTRONICA"},{"ARTES"},{"DIBUJO"},{"COSTURA"}}; 
	srand(time(NULL));//semilla para numero aleaotorio
	n=2+rand()%4;//variables enteras para el numero aleaotrorio con el rango seleccionado
	//n sera para las cantidades aleaotorias de clases, de la cual se podra saber la cantidad de memoria para reservar
	int a[n]={0};//arreglo auxiliar
	printf("Grupos creados: %d\n",n);
	//grupos_inst = (TipoAl **)malloc( n * sizeof(TipoAl *));
	TipoAl *(grupos_insc);//definir el apuntador
	for(int i=0; i<n; i++){
		//doble apuntador que representa los grupos por alumno del tipo de la estructura
		grupos_insc = (TipoAl *)malloc(sizeof(TipoAl));//reserva de memoria con el doble apuntador global
	}
	
	//capturaIns(grupos_insc, n,a,clases);
	//impresionUno(grupos_insc,n,a);
	
	return 0;
}

//FUNCIONES
//funcion con datos del alumno
void encabezado(){
	printf("\tAna Karen Cuenca Esquivel\n");
	printf("\tProgramacion 2\n");
	printf("\tGrupo: A\n");
	printf("\t13/09/2022\n");
	printf("\t---------------------------\n");
}
/*
//funcion encargada del llenado de los datos
void capturaIns(TipoAl **grupos_insc, int n,int a[],char clases[5][15]){
	for(int i=0; i<n; i++){//ciclo para llenar hasta las n grupos
		numIns=2+rand()%4;
		a[i]=numIns;//numIns es para la cantidad de inscritos en cada grupo
		(*grupos_insc+i) = (TipoAl *)malloc(a[i]*sizeof(TipoAl));
		for(int j=0;j<a[i];j++){
			int rand=12+rand%24;//genera num aleaotorio
			printf("Nombre: ");scanf("%s",(*grupos_insc[i][j]).nombre);//apuntador apuntando a la variable nombre para guardar info
			(*grupos_insc[i][j]).edad=rand;//edad asignado al numero aleaotoriio
			generaID(grupos_insc,a,clases);//llama a la funcion para tener el id
		}	
	}
}

//funcion para generar el id de acuerdo al grupo
void generaID(TipoAl **grupos_insc, int n,int a[],char clases[5][15]){
	//zzzz ay no se que hacer:c
	int id=0;
	for(int i=0; i<n; i++){
		for(int j=0;j<a[i];j++){
			if(clases[i][j]=="PROGRAMACION"){
				id=100+rand%12;
				(*grupos_insc[i][j]).id_al=id;
			}
			if(clases[i][j]=="ELECTRONICA"){
				id=120+rand%12;
				(*grupos_insc[i][j]).id_al=id;
			}
			if(clases[i][j]=="ARTES"){
				id=140+rand%12;
				(*grupos_insc[i][j]).id_al=id;
			}
			if(clases[i][j]=="DIBUJO"){
				id=160+rand%12;
				(*grupos_insc[i][j]).id_al=id;
			}
			if(clases[i][j]=="COSTURA"){
				id=180+rand%12;
				(*grupos_insc[i][j]).id_al=id;
			}
		}
	}
}

//funcion encargada de imprimir los n grupos con sus datos
void impresionUno(TipoAl **grupos_insc, int n,int a[]){
	for(int i=0; i<n; i++){
		for(int j=0;j<a[i];j++){
			printf("%s\t", (*grupos_insc[i][j]).nombre);	
			printf("%d\t",(*grupos_insc[i][j]).edad);	
			printf("%d\t", (*grupos_insc[i][j]).id_al);
		}		
	}
}*/

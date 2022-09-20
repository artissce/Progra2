#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <windows.h>

typedef struct{//creamos una estructura
	char nombre[20];//nombre del inscrito
	int edad;//edad del inscrito
	int id;//id unico para el inscrito
}TipoAl; 

int clase;//variable de claseassases
int ins;//variable de inscritos
int tam[5];//arreglo auxiliar para imprimir
char clases[5][15]={{"PROGRAMACION"},{"ELECTRONICA"},{"ARTES"},{"DIBUJO"},{"COSTURA"}};
TipoAl group[5][5]; //le asignamos el arreglo bidi a la esctructura

void encabezado(){
	printf("177691\n");
	printf("Rosales Rodriguez Carlos Mauricio\n");
	printf("Programacion 2\n");
	printf("Grupo A\n");
	printf("Fecha: 13/09/2022\n");
	printf("--------------------------------------\n");
}

int genid(){//funcion para generar la ID
	int aux[11], id, num;
	bool bandera = true;
	for(int i=0; i<clase; i++){
		switch(i){
			case 0:
				do{
					num = rand()%12;
					if(aux[num] == 0){
						aux[num] = 1;
						id = 100 + num;
						bandera = true;
					}else {
						bandera = false;
					}
				}while(bandera == false);
			break;
			case 1:
				do{
					num = rand()%12;
					if(aux[num] == 0){
						aux[num] = 1;
						id = 120 + num;
						bandera = true;
					}else {
						bandera = false;
					}
				}while(bandera == false);
			break;
			case 2:
				do{
					num = rand()%12;
					if(aux[num] == 0){
						aux[num] = 1;
						id = 140 + num;
						bandera = true;
					}else {
						bandera = false;
					}
				}while(bandera == false);
			break;
			case 3:
				do{
					num = rand()%12;
					if(aux[num] == 0){
						aux[num] = 1;
						id = 160 + num;
						bandera = true;
					}else {
						bandera = false;
					}
				}while(bandera == false);
			break;
			case 4:
				do{
					num = rand()%12;
					if(aux[num] == 0){
						aux[num] = 1;
						id = 180 + num;
						bandera = true;
					}else {
						bandera = false;
					}
				}while(bandera == false);
			break;
		}
	}
	return id;
}

void capturaIns(){//funcion para capturar los datos
	int num=1;
	for(int i=0; i<clase; i++){//ciclaseo para recorrer las filas del arreglo
		for(int j=0; j<tam[i]; j++){//ciclaseo para las columnas segun la variable ins
			printf("\nIngresa el nombre del alumno %d: ", num);
			gets(group[i][j].nombre);
			group[i][j].edad = 12+rand()%24; 
			group[i][j].id = genid();
			num++;
		}
	}
}

void impresionUno(){ //funcion para imprimir los datos
	system("cls");
	printf("\t\tGRUPOS CREADOS: %d\n", clase);
	for(int i=0; i<clase; i++){//recorre el arreglo de las claseases para imprimir los alumnos
		printf("\t %s - INSCRITOS: %d\n", clases[i], tam[i]);//imprime las claseases
		printf("Nombre \tEdad \tID");
		printf("\n_______________________\n");
		for(int j=0; j<tam[i]; j++){
			//puts(group[i][j].nombre);
			printf("%s", group[i][j].nombre);
			printf("\t%d", group[i][j].edad);//imprime los datos
			printf("\t%d\n", group[i][j].id);
		}
		printf("\n");
	}
}

int main(){
	srand(time(NULL));
	clase=2+rand()%4;
	for(int i=0;i<clase;i++){
		tam[i]=2+rand()%4; //variable auxiliar para imprimir 
	}
	encabezado();//invocamos el encabezado
	capturaIns();
	impresionUno();
}


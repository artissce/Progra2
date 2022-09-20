//Librerias
#include <stdio.h>
#include <time.h>
#include <conio.h>
#include <windows.h>
#include <iostream>
#include <iomanip>
#include <stdlib.h>
using namespace std;

//ESTRUCTURA
typedef struct{//estructura con la informacion de los alumnos
 char nom_al[20];//nombre del inscrito
 int edad;//edad del inscrito
 int id_al;//id unico para el inscrito
}TipoAl; 

//VARIABLES GLOBALES	
int n;//variable aleaotoria que se usara en la cantidad de grupos
int t[5];//auxiliar
//arreglo estatico para definir las materias/clases
char clases[5][15]={{"PROGRAMACION"},{"ELECTRONICA"},{"ARTES"},{"DIBUJO"},{"COSTURA"}};
TipoAl grupos[5][5]; //arreglo bidi de la estructura

//DECLARACION DE FUNCIONES
void capturaIns();
int generaID();
void impresionUno();
void encabezado();

//FUNCION PRINCIPAL
int main(){
	encabezado();//funcion que imprime mis datos
	srand(time(NULL));//semilla para numero aleaotorio
	n=2+rand()%4;//GENERA EL NUMERO DE GRUPOS	
	for(int i=0;i<n;i++){//sigue el cilco hasta el numero de grupos
		t[i]=2+rand()%4;//genera columnas
	}
	capturaIns();//llama a funcion para ingresar datos del alumno
	impresionUno();//imprime los datos capturados
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

//funcion encargada del llenado de los datos
void capturaIns(){
	int num=1;
	for(int i=0; i<n; i++){//ciclo para llenar hasta las n grupos
		for(int j=0;j<t[i];j++){//columnas
			cout<<endl<<"Ingresa nombre del alumno: ";
			gets(grupos[i][j].nom_al);//imprime nombre almuno
			grupos[i][j].edad=12+rand()%24;//imprime la edad entre el rango de 12 a 25 
			grupos[i][j].id_al=generaID();//llama a la funcion generaID para darle el valor a la variable id
		}	
	}
}

//funcion para generar el id de acuerdo al grupo
int generaID(){
	int aux[11], id, num;
	bool bandera = true;
	for(int i=0; i<n; i++){//hace el ciclo de acuerdo al tamano de filas
		switch(i){
			case 0:
				do{
					num = 100+rand()%12;
					if(aux[num] == 0){
						aux[num] = 1;
						id = num;//creo que el error esta aca
						bandera = true;
					}else {
						bandera = false;
					}
				}while(bandera == false);
			break;
			case 1:
				do{
					num = 120+rand()%12;
					if(aux[num] == 0){
						aux[num] = 1;
						id = num;
						bandera = true;
					}else {
						bandera = false;
					}
				}while(bandera == false);
			break;
			case 2:
				do{
					num = 140 + rand()%12;
					if(aux[num] == 0){
						aux[num] = 1;
						id = num;
						bandera = true;
					}else {
						bandera = false;
					}
				}while(bandera == false);
			break;
			case 3:
				do{
					num = 160 + rand()%12;
					if(aux[num] == 0){
						aux[num] = 1;
						id = num;
						bandera = true;
					}else {
						bandera = false;
					}
				}while(bandera == false);
			break;
			case 4:
				do{
					num = 180+ rand()%12;
					if(aux[num] == 0){
						aux[num] = 1;
						id = num;
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

//funcion encargada de imprimir los n grupos con sus datos
void impresionUno(){
	cout<<endl<<"\t\t"<<"GRUPOS CREADOS: "<<n;
	for(int i=0; i<n; i++){//respeta el ciclo hasta la cantidad de grupos
		cout<<endl<<"Materia: "<<clases[i]<<"\tInscriptos: "<<t[i];
		cout<<endl<<"Nombre\tEdad\tID\n"<<n;
		for(int j=0;j<t[i];j++){//imprime hasta el tamano de las columnas
			cout<<grupos[i][j].nom_al;
			cout<<"\t"<<grupos[i][j].edad;
			cout<<"\t"<<grupos[i][j].id_al<<endl;
		}		
		cout<<endl;
	}
}

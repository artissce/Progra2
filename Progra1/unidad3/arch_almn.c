/*Estructura llamada Alumno, en la cual se tendrán los siguientes
Campos: Nombre, edad, y promedio.Definir un arreglo llamado alumnos.
Pedir datos al usuario para 3 alumnos, desplegar 
los datos en forma de tabla.*/
//Ana Karen Cuenca Esquivel - 14/05/2022
#include<stdio.h>
#include "color.h"//libreira q cree para color

// Defino la estructura Alumno con tres campos:
struct Alumno{
	char nombre[50];
	int edad;
	float promedio;
}alumnos[50]; //Arreglo de estructura

//DECLARACION FUNCIONES
void lectura();
void archivo();

int main(){
    archivo();
    lectura();
}

//funciones
void archivo(){
    //Pedir los datos para 3 alumnos
	printf("Ingres los datos de 3 alumnos:\n");
	for(int i=0;i<3;i++){
		//fflush(stdin);
		printf("Alumno %i:",i);
		printf("\nNombre: ");fgets(alumnos[i].nombre,50,stdin);//cambiado pq es cadena
		printf("\nEdad: ");scanf(" %i",&alumnos[i].edad);
		printf("\nPromedio: ");scanf(" %f",&alumnos[i].promedio);
        getchar();//para que el salto de linea no afecte al ingreos de datos
		printf("\n");
	}
//Guardamos los datos de los alumnos en un archivo:
	printf("Grabando datos:\n");
	FILE * archivo; //apuntador a archivo
	archivo = fopen ("alumnos.txt","w"); 
	for(int i=0;i<3;i++){
		fprintf(archivo,"%s\n",alumnos[i].nombre);
		fprintf(archivo,"%i\n",alumnos[i].edad);
		fprintf(archivo,"%f\n",alumnos[i].promedio);
	}
	fclose(archivo);
}

void lectura(){
    int i;
    //Leyendo los datos del archivo:
	printf("Resumen de datos:\n");
	FILE * archivo; //apuntador a archivo
	archivo = fopen ("alumnos.txt","r");
	i=0;
	do{
		printf("Alumno: %i :",i);
		printf("\n");
		fscanf(archivo,"%s",alumnos[i].nombre);//ERROR Si uso &
		fscanf(archivo,"%i",&alumnos[i].edad);
		fscanf(archivo,"%f",&alumnos[i].promedio);
		puts(alumnos[i].nombre);
		printf("%i\n",alumnos[i].edad);
		printf("%.2f\n",alumnos[i].promedio);
		i++;
	}while(!feof(archivo));
	fclose(archivo);
}
/*Estructura llamada Alumno, en la cual se tendr�n los siguientes
Campos: Nombre, edad, y promedio.Definir un arreglo llamado alumnos.
Pedir datos al usuario para 3 alumnos, desplegar 
los datos en forma de tabla.*/
//Guillermo Garc�a Haro 21/04/2021
#include<stdio.h>
// Defino la estructura Alumno con tres campos:
struct Alumno{
	char nombre[50];
	int edad;
	float promedio;
}alumnos[3]; //Arreglo de estructura
int main(){
//Pedir los datos para 3 alumnos
	printf("Ingres los datos de 3 alumnos:\n");
	for(int i=0;i<3;i++){
		fflush(stdin);
		printf("Alumno %i:",i);
		printf("\nNombre: ");gets(alumnos[i].nombre);
		printf("\nEdad: ");scanf("%i",&alumnos[i].edad);
		printf("\nPromedio: ");scanf("%f",&alumnos[i].promedio);
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

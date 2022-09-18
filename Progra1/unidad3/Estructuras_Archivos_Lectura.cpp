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
int i;
//Leyendo los datos del archivo:
	printf("Resumen de datos:\n");
	FILE * archivo; //apuntador a archivo
	archivo = fopen ("alumnos.txt","r");
	i=0;
	do{
		printf("Alumno: %i :",i);
		printf("\n");
		fscanf(archivo,"%s",&alumnos[i].nombre);
		fscanf(archivo,"%i",&alumnos[i].edad);
		fscanf(archivo,"%f",&alumnos[i].promedio);
		puts(alumnos[i].nombre);
		printf("%i\n",alumnos[i].edad);
		printf("%f\n",alumnos[i].promedio);
		i++;
	}while(!feof(archivo));
	fclose(archivo);
}

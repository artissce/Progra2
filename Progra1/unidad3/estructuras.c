#include <stdio.h>
#include <time.h>
#include <stdlib.h>

struct Alumno{
    char nombre[10];
    int edad;
    float promedio;
}alumnos[3];

int main(){
    //pedir los datos para tres alumnos
    printf("Ingrese los datos de tres alumnos:\n");
    for(int i=0;i<3;i++){
        printf("Alumno %i: ",i);
        printf("\nNombre: "); fgets(alumnos[i].nombre,10,stdin);
        printf("\nEdad: ");scanf("%i",&alumnos[i.edad]);
        printf("\nPromedio: "); scanf("%f",&alumnos[i].promedio);
    }
    //imprimirmos los datos de los alumnos en tabla
    printf("RESUMEN DE DATOS:\n");
    printf("\nAlumnos\t\tEdad\t\tPromedio\n");
    for(int i=0;i<3;i++){
        printf("%s",alumnos[i].nombre);
        printf("\t\t%i",alumnos[i].edad);
        printf("\t\t%f\n",alumnos[i].promedio);
    }
}

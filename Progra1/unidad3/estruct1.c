#include <stdlib.h>
#include <stdio.h>
/*Ana Karen Cuenca Esquivel - 177932
Programa con estructuras donde captura datos y envia el mejor y peor promedio
30/04/2022
*/
struct fecha{
	int dia;
	int mes;
	int anio;
};
struct Alumno{
	char nombre[20];
	int edad;
	float promedio;
	struct fecha f_nac;
}*alumno; //variable global apuntador , la puedo usar como arreglo
//Función para ingresar los datos del arreglo
void ingresa_datos(int n_alumnos){
	int i;
	for (i=0;i<n_alumnos;i++)
	{
	printf("\nDATOS DEL ALUMNO %d \n\n",i);
	printf("Ingresa el nombre del alumno: ");
	scanf(" %[^\n]",alumno[i].nombre);//scanf("%s",&alumno[i].nombre);//fgets(alumno[i].nombre,20,stdin);//fflush(stdin);
	printf("Ingresa la edad: ");scanf("%d",&alumno[i].edad);
	printf("Ingresa el promedio: ");scanf("%f",&alumno[i].promedio);
	printf("Ingresa el dia: ");scanf("%i",&alumno[i].f_nac.dia);
	printf("Ingresa el mes: ");scanf("%i",&alumno[i].f_nac.mes);
	printf("Ingresa el anio: ");scanf("%i",&alumno[i].f_nac.anio);
    }
};
//función par desplrgar los datos del arreglo
void despliega_datos(int n_alumnos){
	int i;
	for (i=0;i<n_alumnos;i++){
	printf("\n DATOS DEL ALUMNO %d \n",i);	
	printf("\n Nombre %s",alumno[i].nombre);
	printf("\n Edad: %d",alumno[i].edad);
	printf("\n Promedio: %.2f",alumno[i].promedio);
	printf("\n Fecha de nacimiento: %d/%d/ %d",alumno[i].f_nac.dia,alumno[i].f_nac.mes,alumno[i].f_nac.anio);
    }
}
//función par desplrgar los datos del arreglo
void posicion(int posicion){
	printf("\n Datos del alumno: %i\n",posicion);
	printf("\n Nombre %s",alumno[posicion].nombre);
	printf("\n Edad: %d",alumno[posicion].edad);
	printf("\n Promedio: %.2f",alumno[posicion].promedio);
	printf("\n Fecha de nacimiento: %d/%d/ %d",alumno[posicion].f_nac.dia,alumno[posicion].f_nac.mes,alumno[posicion].f_nac.anio);
    
}
//Mediante una función que calcule con ciclos y regrese la posición del alumno con el mejor promedio y despliegalo
int mayor(int n_alumnos){
	float ma=0.0;
	int num=0;
	for (int i=0;i<n_alumnos;i++){
		if(alumno[i].promedio>ma){
			ma=alumno[i].promedio;
			num=i;
		}
	}
 	return num; 
}
int menor(int n_alumnos){
	float me=alumno[0].promedio;
	int num=0;
	for (int i=1;i<n_alumnos;i++){
		if(alumno[i].promedio<me){;
			me=alumno[i].promedio;
			num=i;
		}
	}
 	return num; 
}


//Programa principal
int main(){
	int n;
	printf("Ingresa el numero de alumnos: ");
	scanf("%d",&n);
	alumno = (struct Alumno *) malloc(n * sizeof(struct Alumno));  //asigna bytes de memoria de acuerdo al tamaño.
    if(alumno == NULL) {
        printf("Fallo la asignación de memoria\n");
        return 1;
    }
	ingresa_datos(n);
	getchar(); //pausa
	printf("\n");
	despliega_datos(n);
	printf("\n\nEl alumno con el mejor promedio es:");
	posicion(mayor(n));
	printf("\n\nEl alumno con el menor promedio es:");
	posicion(menor(n));
	return 0;
}
//Captura en tu arreglo de estructura al menos tres alumnos
//Mediante una función que calcule con ciclos y regrese la posición del alumno con el mejor promedio y despliegalo
//Mediante una función que calcule con ciclos y regrese la posición del alumno con el mayor promedio y despliegalo
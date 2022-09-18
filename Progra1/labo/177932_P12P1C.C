/*----------------------------------------------------------------/  
    Con base al siguiente cascaron complemente las funciones      / 
    con las acciones indicadas en cada una, complemente la        /
	sintaxis propuesta, utilice las sentencias de su preferencia  /
	siempre y cuando respete la estructura aqui presentada        /
	no debera modificar el orden de invocación a las funciones,   /
	muestre en pantalla las impresiones solicitadas, utilizando   /
	un formato legible y ordenado, recuerde agregar encabezado y  /                      
	docuemntar correctamente su código.                            /
-----------------------------------------------------------------*/
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
//PROTOTIPO DE FUNCIONES
//declaracion de fucniones
void encabezado();
void llena(int num[4][5]);
void imprimir(int num[4][5]);
int sumando(int num[4][5]); //!!!La funcion solo pide un arreglo ❗
void reemplaza(int num[4][5]);

int main(){
	//Declaración de variables
	int num[4][5],sum_num=0,sum=0;
	
	//Llamada/invocación a las funciones
	encabezado(); //funcion q imprime datos
	llena(num); //funcion que llena los valores del arreglo
	printf("\n\nLLENADO DEL ARREGLO\n");
	imprimir(num); //funcion que imprime el arreglo
	sum_num=sumando(num);//guarda los valores de la funcion en una variable
	printf("\n\nSUMA DE LOS ELEMENTOS DEL ARREGLO: %d\n\n\n",sum_num);//mal
	reemplaza(num); 
	
}
//------------DESARROLLO DE FUNCIONES-----------------------------

//👍
/*Funcion que llena un arreglo con numeros aleatorios entre 1 y 50*/
void llena(int num[4][5]){
    srand (time(NULL)); //Generar semilla en base al tiempo
	int i,j,ale=0;//variables
    for(i=0;i<4;i++){//ciclos donde se guarda el valor en la posicion del arreglo
        for(j=0;j<5;j++){
            ale=1+rand()%(51-1);//marca el rango del 1 al 50
            num[i][j]=ale;//guarda el valor de ale en la psocion de num
        }
    }
}
//👍
/*Funcion que verifica si un número es multiplo de 5, entonces lo reemplaza por un -1*/
void reemplaza(int num[4][5]){
	//imprimir(num); agregado por la maestra
    int i,j;
    for(i=0;i<4;i++){//ciclos recorre los espacios del arreglo 
        for(j=0;j<5;j++){
			if (num[i][j]%5==0){
				num[i][j]=-1;//remplaza el valor por -1 en el caso de que sea multiplo de 5
				printf("%d\t",num[i][j]);
			}
			else
				printf("%d\t",num[i][j]);		
			}
		printf("\n");
    }
}

//❗ bye
/*Funcion que recorre el arreglo, suma todos sus elementos y regresa el resultado
para ser impreso desde el main*/
int sumando(int num[4][5])//!!!!! La funcion pide una variable y un arrelgo
{
	int i,j,sumaa=0;
	for(i=0;i<4;i++){
		for(j=0;j<5;j++){
			sumaa=sumaa+num[i][j];
		}
		printf("\n");
	}
	return(sumaa);
}

//👀
/*Funcion para recorrer el arreglo elemento por elemento y mostrarlo en pantalla
en forma de matriz, si hay elementos menores a 10 debera agregar un cero a la 
izquierda para mostrarlo en pantalla*/
void imprimir(int num[4][5]){
	int i,j;
	for(i=0;i<4;i++){//se imprime el arreglo con los numero aleatorios
			for(j=0;j<5;j++){
				if(num[i][j]<10){
					printf("%02d\t",num[i][j]);
				}
				else{
					printf("%d\t",num[i][j]);
				}		
			}
			printf("\n");
		}
	/*
	for (int i=0; i<4; i++) {//recorre por fila
		for (int j=0; j<5; j++)//recorre por columna
			//printf("\t%d",num[i][j]);//imprime por la posicion en la que esta
			
				Para imprimir los 0s, podemos usar la funcion dentro de printf
			
			printf("%02i", num[i][j]);
			Imprimir el numero en 2 digittos (numeros
				mayor o iguales a 10 tienen dos digitos, so, lo que hace el 0 antes del 2
				es rellenar los espacios vacios con 0s)
				EJ:
			~		01
					05
					09
					10
					20
					66
			*/
		
}

/*Funcion que imprime los datos del alumno en pantalla de ejecución
se incluye: nombre, matricula, materia, grupo de laboratorio, semestre, fecha*///listo
void encabezado(){
	printf("177932 - Ana Karen Cuenca Esquivel\n");//mis datos
    printf("LABORATORIO DE PROGRAMACION 1 - GRUPO:C\n");
    printf("SEMESTRE 2 - PRAC 11 - 05/04/22\n");
}
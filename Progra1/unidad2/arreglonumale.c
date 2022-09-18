/*
Programa con arreglo que genera numeros aleatorios y los ordena inversamente
Ana Karen Cuenca Esquivel - 177932
25/02/2022*/
#include <stdio.h>
//#include <ncurses.h> para linux
#include <stdlib.h>
#include <time.h>

int main(){
	int i,arreglo[100];//define arreglo
	srand (time(NULL));

	printf("Ingresa los elementos del arreglo\n");
	for(i=0;i<99;i++){
		arreglo[i]=-100+rand()%201; 
    	printf("%d \t",arreglo[i]);
	}
	printf("\n\nOrden inverso de los elementos del arreglo:\n\n");
	for(i=99;i>=0;i--)
		printf("%d \t",arreglo[i]);
	getchar;
}
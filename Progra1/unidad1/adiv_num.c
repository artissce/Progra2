/* Ana Karen Cuenca Esquivel - 177932
11/02/2022
Programa que genera numero aleatorio y usuario adivina*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	int num, x, cont=0;
	
	printf("\tBIENVENIDO");
	srand(time(NULL));
	x = 1 + rand()%(100);
	//x=1+rand()%100;
	while(num !=x){
		printf("\nEscribe un numero: ");
		scanf("%i", &num);
		if(num>x){
			printf("\nEscribe un numero MENOR: \n");
		}
		if(num<x){
			printf("\nEscribe un numero MAYOR: \n");
		}
		cont++;
	}
	printf("\nFELICIDADES! adivinaste el numero");
	printf("\nNumero de intentos: %d", cont);

	return 0;
}
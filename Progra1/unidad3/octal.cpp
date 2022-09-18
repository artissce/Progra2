//Programa que convierte un n�mero entero base 10 a octal
//Ana Karen Cuenca Esquivel 22/04/2022
#include <stdio.h>
#include <math.h>
int main() {
	int i=0,j,n,digitos,*datos,*aux;
	printf("Ingresa el numero en base 10: ");
	scanf("%d",&n);
	digitos =log(n)/log(8)+1; //Calcula cuantos d�gitos se necesitan 
	printf("Se necesitan %i digitos\n",digitos);
	datos = (int *) malloc(sizeof(int)*digitos); //Define el arreglo en base el n�mero de digitos
	// Realiza la conversi�n a base 8//
	aux=datos;
	while (n!=0) {
		*datos = n%8;//genera los bits
		n = int(n/8);
		datos++;
	}
	//acomoda los digitos
    printf("El numero en octal es: ");
	do{
		datos--;
		printf("%d",*datos);
	}while(datos!=aux);

	return 0;
}


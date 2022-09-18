//Programa que convierte un n�mero entero base 10 a binario
//Guillermo Garc�a Haro 11/03/2021
#include <stdio.h>
#include <math.h>
int main() {
	int i=0,j,n,digitos,*datos,*aux;
	printf("Ingresa el numero en base 10: ");
	scanf("%d",&n);
	digitos =log(n)/log(8)+1; //Calcula cuantos d�gitos se necesitan 
	printf("Se necesitan %i digitos\n",digitos);
	datos = (int *) malloc(sizeof(int)*digitos); //Define el arreglo en base el n�mero de digitos
	// Realiza la conversi�n a base 2//
	aux=datos;
	while (n!=0) {
		*datos = n%8;//genera los bits
		n = (int)(n/8);
		datos++;
	}
	//acomoda los digitos
	do{
		datos--;
		printf("%d",*datos);
	}while(datos!=aux);
	// acomoda los digitos //
	/*printf("En numero en binario es: ");
	for (j=i-1;j>=0;j--) {
		printf("%d",datos[j]);
	}*/
	return 0;
}


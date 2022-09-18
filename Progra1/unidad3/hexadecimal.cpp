//Programa que convierte un n�mero entero base 10 a hexadecimal
//Ana Karen Cuenca Esquivel 22/04/2022
#include <stdio.h>
#include <math.h>
int main() {
	int i=0,j,n,digitos,*datos,*aux;
	printf("Ingresa el numero en base 10: ");
	scanf("%d",&n);
	digitos =log(n)/log(16)+1; //Calcula cuantos d�gitos se necesitan 
	printf("Se necesitan %i digitos\n",digitos);
	datos = (int *) malloc(sizeof(int)*digitos); //Define el arreglo en base el n�mero de digitos
	// Realiza la conversi�n a base 16//
	aux=datos;
	while (n!=0) {
		*datos = n%16;//genera los bits
		n = int(n/16);
		datos++;
	}
	//acomoda los digitos
    printf("El numero en hexadecimal es: ");
	do{
		datos--;
		switch(*datos){
            case 10:
                printf("A");
                break;
            case 11:
                printf("B");
                break;
            case 12:
                printf("C");
                break;
            case 13:
                printf("D");
                break;
            case 14:
                printf("E");
                break;
            case 15:
                printf("F");
                break;
            default:
				printf ("%d", *datos);
			break;
        }
	}while(datos!=aux);
    free(datos);
	return 0;
}


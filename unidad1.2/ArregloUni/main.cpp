#include "libreria.h"

int main(){
	int num, *x;
	num=validaEntero("Valor: ");
	x = (int *) malloc(num* sizeof(int));
	
	inicializa(num,x);
	imprime(num,x);
	//modifica(num,x);
	//imprime(num,x);
	free(x);
	return 0;
}

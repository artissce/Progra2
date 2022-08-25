#include "libreria.h"

int main(){
	int n =validaEntero("No. Registro: ");
	Dato **dato = (Dato **)malloc(n * sizeof(Dato *));//columnas
	
	for(int i=0; i<n; i++){
		*(dato + i) = (Dato *)malloc(sizeof(Dato));
	}
	recibe(dato,n);
	imprime(dato,n);
	free(dato);
	
	return 0;
}

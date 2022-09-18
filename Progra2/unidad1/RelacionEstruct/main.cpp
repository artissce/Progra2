#include "libreria.h"

int main(){
	
	int n =validaEntero("No. Registro: ");
	Relacion **info = (Relacion **)malloc(n * sizeof(Relacion *));//columnas
	
	for(int i=0; i<n; i++){
		*(info + i) = (Relacion *)malloc(sizeof(Relacion));
	}
	
	recibe(info,n);
	imprime(info,n);
	free(info);
	
	return 0;
}

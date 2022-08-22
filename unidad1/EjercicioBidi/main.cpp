#include "libreria.h"

int main(){
	int **bidi = NULL;;
	
	f = validaEntero("Filas = ");
	bidi=(int **)malloc(f*sizeof(int *));
	
	inicializaBidi(bidi);
	
	return 0;
}

#include "libreria.h"

int main(){
	int **bidi;
	
	f= validaEntero("Filas = ");
	c= validaEntero("Columnas = ");
	bidi=(int **)malloc(f*sizeof(int *));
	
	inicializaBidi(bidi);
	imprimeBidi(bidi);
	modificaBidi(bidi);
	imprimeBidi(bidi);
	free(bidi);
	return 0;
}

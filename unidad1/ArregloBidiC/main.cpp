#include "libreria.h"

int main(){
	char **bidi;
	
	f=validaEntero("NUMERO DE CADENAS QUE DESEAS: ");
	
	bidi=(char **)malloc(f*sizeof(char *));
	
	registroCadenas(bidi);
	imprimeCadenas(bidi);
	free(bidi);
	return 0;
	
}

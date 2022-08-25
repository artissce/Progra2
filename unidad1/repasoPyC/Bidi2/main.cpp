#include "libreria.h"
/*Ana Karen Cuenca Esquivel -177932
Programacion 2
Carrera ITI
cLASE 9-10
bidimensionales dinamicos de estructuras
*/
int main(){
	
	f=validaEntero("No. Apuntadores: ");
	Relacion **dato=(Relacion **)malloc(f*sizeof(Relacion *));
	
	c=validaEntero("No. Registros: ");
	
	for(int i=0; i<f; i++){
		*(dato + i) = (Relacion *)malloc(c*sizeof(Relacion));
	}
	
	recibe(dato);
	imprime(dato);
	free(dato);
	
	return 0;
}

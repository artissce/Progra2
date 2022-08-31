#include "libreria.h"
/*Ana Karen Cuenca Esquivel -177932
Programacion 2
Carrera ITI
cLASE 9-10
bidimensionales dinamicos de estructuras
*/
int main(){
	
	f=validaEntero("No. Apuntadores: ");
	Personal **dato=(Personal **)malloc(f*sizeof(Personal *));
	Catalogo **info=(Catalogo **)malloc(f*sizeof(Catalogo *));
	Venta **sell=(Venta **)malloc(f*sizeof(Venta *));
	//Venta **dato=(Venta **)malloc(f*sizeof(Venta *));
	

	/*
	c=validaEntero("No. Registros: ");
	
	for(int i=0; i<f; i++){
		*(dato + i) = (Relacion *)malloc(c*sizeof(Relacion));
	}*/
	
	registro(dato,info,sell);
	imprime(dato,info,sell);
	free(dato,info,sell);
	
	return 0;
}


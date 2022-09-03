#include "libreria.h"
/*
int main(){
	int n = validaEntero("No. registros");
	Dato *dato = (Dato *)malloc(n *sizeof(Dato));
	
	inicializaUni(dato,n);
	imprimeUni(dato,n);
	seleccionUni(dato,n),
	//inserccionUni(dato,n);
	//burbujaUni(dato,n);
	cout<<endl<<endl;
	imprimeUni(dato,n);
	
	return 0;e
	
}*/

int main(){
	f = validaEntero("No. registros");
	Dato **dato = (Dato **)malloc(f *sizeof(Dato *));
	
	inicializaBidi(dato);
	imprimeBidi(dato);
	//seleccionUni(dato),
	//inserccionUni(dato,n);
	//burbujaUni(dato,n);
	
	free(dato);
	return 0;
}




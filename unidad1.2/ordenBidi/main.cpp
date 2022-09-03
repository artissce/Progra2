#include "libreria.h"

int main(){
	int **enteros;
	f=validaEntero("Filas: ");
	c=validaEntero("Columnas: ");
	
	enteros=(int **)malloc(f*sizeof (int *));
	
	inicializaBidi(enteros);
	cout<<endl<<endl;
	imprimeBidi(enteros);
	cout<<endl<<endl<<"Seleccion"<<endl;
	seleccionBidi(enteros);
	imprimeBidi(enteros);
	
	inicializaBidi(enteros);
	cout<<endl<<endl;
	imprimeBidi(enteros);
	cout<<endl<<endl<<"Insercion"<<endl;
	insercionBidi(enteros);
	imprimeBidi(enteros);
	
	inicializaBidi(enteros);
	cout<<endl<<endl;
	imprimeBidi(enteros);
	cout<<endl<<endl<<"Burbuja"<<endl;
	burbujaBidi(enteros);
	imprimeBidi(enteros);
	
	return 0;
}

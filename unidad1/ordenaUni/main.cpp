#include "libreria.h"

int main(){
	int a[]={23,67,89,12,6,34,9,31,2,0};
	int b[]={23,67,89,12,6,34,9,31,2,0};
	int c[]={23,67,89,12,6,34,9,31,2,0};
	
	ordenaBurbuja(a);
	ordenaSeleccion(b);
	ordenaInsercion(c);
	
	imprimeUni(a, "BURBUJA");
	imprimeUni(b, "SELECCION");
	imprimeUni(c, "INSERCION");
	return 0;
}

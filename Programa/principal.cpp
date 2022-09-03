#include "libreria.h"
/*Saúl Cervantes Candia -177927
Programacion 2
Carrera ITI
Clase 9-10
bidimensionales dinamicos de estructuras
*/
int main(){
	
	f = validaEntero("Cuantos datos desea registrar: ");
	Personal **info = (Personal **)malloc(f * sizeof(Personal *));
	Catalogo **dato1 = (Catalogo **)malloc(f * sizeof(Catalogo *));
	Venta **dato = (Venta **)malloc(f * sizeof(Venta *));
	
	recibe(info,dato1);
	imprimeEmp(info);
	imprimeCat(dato1);
	ventas(dato,info,dato1);
	imprimeVen(dato);
	
	free(info);
	free(dato1);
	free(dato);
	
	return 0;
}

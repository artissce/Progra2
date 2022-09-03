#include "libreria.h"
/*Ana Karen Cuenca Esquivel -177932
Programacion 2
Carrera ITI
cLASE 9-10
bidimensionales dinamicos de estructuras
*/
int main(){
	//void tamanoInfo();
	sE=validaEntero("No. de personal: ");
	Personal **dato=(Personal **)malloc(sE*sizeof(Personal *));
	int a[sE]={0};
	recibeEmpleado(dato,a);
	
	sC=validaEntero("No. de catalogo: ");
	Catalogo **info=(Catalogo **)malloc(sC*sizeof(Catalogo *));
	int b[sC]={0};
	recibeCatalogo(info,b);
	
	sV=validaEntero("No. de ventas: ");
	Venta **sell=(Venta **)malloc(sV*sizeof(Venta *));
	int c[sV]={0};
	
	imprimeEmpleado(dato,a);
	imprimeCatalogo(info,b);
	//venta();
	recibeVenta(sell,c);
	divi();
	imprimeVenta(sell,c);
	
	ordenVentas(dato,a, info,b, sell,c);
	
	free(dato);
	free(info);
	free(sell);
	
	return 0;
}


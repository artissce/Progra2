#include "libreria.h"
/*Ana Karen Cuenca Esquivel -177932
Programacion 2
Carrera ITI
CLASE 9-10
estrcuturas sin enlazar y ordenadas
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
	recibeVenta(dato,a, info,b, sell,c);
	imprimeVenta(dato,a, info,b, sell,c);
	ordenVentas(dato,a, info,b, sell,c);
	
	free(dato);
	free(info);
	free(sell);
	
	return 0;
}


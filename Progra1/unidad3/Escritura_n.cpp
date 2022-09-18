/*Trabajando con archivos 
Guillermo Garc�a Haro 02/05/2021*/ 
#include <stdio.h>
int main()
{
	FILE *puntero;
	puntero=fopen("prueba.txt","w"); //abre nuevo archivo (borra existente)
	fprintf(puntero,"1\n");
	fprintf(puntero,"2\n"); 
	fclose(puntero);
	puntero=fopen("prueba.txt","a");// abre archivo sin borrar el existente
	fprintf(puntero,"3\n");
	fprintf(puntero,"4"); 
	fclose(puntero);
	printf("Archivo creado");
}
	

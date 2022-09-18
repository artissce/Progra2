#include <stdio.h>
#include <string.h>

int main(){
    printf("177932 - Ana Karen Cuenca Esquivel\n");
    printf("PRAC 11 - 05/04/22\n");
	char pal[10][10]={"nada","perro","salamanca","gato","cinco","computo","Pedro","jauria","sol","registros"};
	int x=0,i,j;
	
	for(i=0; i<10; i++){//Ciclo para leer e imprimir fila por fila
		printf("\nPalabra %d: %s", i+1, pal[i]);//Número de palabra más la impresión de la palabra
		x=strlen(pal[i]);//guarda tamano de palabra
		printf("\nEl numero de caracteres de la palabra es: %d",x);//imprime # caracteres
        for(j=0; j<strlen(pal[i]); j++){//Ciclo lee letra por letra de la palabra
			if(pal[i][j]=='a' || pal[i][j]=='e' || pal[i][j]=='i' || pal[i][j]=='o' || pal[i][j]=='u' || pal[i][j]=='A' || pal[i][j]=='E' || pal[i][j]=='I' || pal[i][j]=='O' || pal[i][j]=='U' ){
				//si es vocal, min o may, cambiarla por caracter x
				pal[i][j]='x';
			}
		}	
		printf("\nPalabra modificada: %s", pal[i]);//imprime la palabra modificada
        printf("\n\n");
    }
}

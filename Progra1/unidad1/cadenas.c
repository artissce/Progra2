// Funciones con cadenas
//Guillermo García Haro 22/02/2022

#include <stdio.h>
#include <ctype.h>
#include <string.h>
int main(){
char cadena[10];
int t;
printf("Ingresa una palabra \n");
gets(cadena);
for(int i=0; i < strlen(cadena);i++)
{
	t = isalnum(cadena[i]);//devuelve cero cuando no es letra
    printf("%d ",t);
	if (t!=0) 
		printf ("%c es letra o digito \n",cadena[i]);
	else
		printf ("%c no es letra o digito \n",cadena[i]);
}
}
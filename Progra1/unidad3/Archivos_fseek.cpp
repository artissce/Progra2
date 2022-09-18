/* Funciones ftell, fwind,fseek */
/* Guillermo Garc�a Haro 18/05/2021 */
#include <stdio.h>
int main()
{
	int pos;
	char car;
	FILE * archivo =fopen("prueba.txt","r");
	pos=ftell(archivo); //regresa la posici�n en bytes actual del archivo
	printf("La posicion es: %i\n",pos);
	do{ //recorremos el archivo
		pos=ftell(archivo); //regresa la posici�n actual
		car=fgetc(archivo);//lee un caracter del archivo
		if (car!=EOF) //revisa si no es fin de archivo
			printf("%c %i\n",car,pos); //edespliega caracter y posici�n en bytes
		else
			printf("%i fin de archivo\n",pos);
	}while(!feof(archivo));
	printf("\n");
	rewind(archivo);//regresa al inicio del archivo
	pos=ftell(archivo); //regresa la posici�n actual
	printf("La posicion inicial es: %i\n",pos);
	car=fgetc(archivo);//lee un caracter del archivo
	printf("Caracter inicial: %c\n ",car);
	printf("\n");
	fseek(archivo,3,SEEK_SET); //3 bytes hacia adelante
	pos=ftell(archivo); //regresa la posici�n actual
	car=fgetc(archivo);//lee un caracter del archivo
	printf("Caracter en posicion %i es: %c\n",pos,car);
	printf("\n");
	fseek(archivo,0,SEEK_END); //manda al final del archivo
	pos=ftell(archivo); 
	printf("La posicion final es: %i\n",pos);
	car=fgetc(archivo);//lee un caracter del archivo
	printf("Caracter en posicion: %i %c\n",pos,car);
	fseek(archivo,-1,SEEK_CUR); //una posici�n antes
	pos=ftell(archivo); 
	car=fgetc(archivo);//lee un caracter del archivo
	printf("Caracter en posicion antes del final: %i %c\n",pos,car);
	fclose(archivo);
}

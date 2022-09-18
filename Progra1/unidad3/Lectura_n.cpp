/* Trabajando con archivos 
Ana Karen Cuenca Esquivel 14/05/2022*/    
#include <stdio.h>
#include <stdlib.h>
int main(){
//lo mismo pero en float
	/*{
		system ("kate archivo.txt");//abre block de notas llamado kate
		float dato[10];
		int n=0;
		FILE* archivo = fopen("archivo.txt","a+");//si no existe lo crea

		do{
			fscanf(archivo,"%f\n",&dato[n]);
			printf("%.2f\n",dato[n]);
			n++;
		}while(!feof(archivo));
		fclose (archivo); //cierra archivo

		printf("Hay %i datos en el arreglo de 0 a %i",n,n-1);//a la variable dato el contenido
	}*/

//lo mismo pero en char
	{
		system ("kate archivo.txt");//abre bloc de notas llamado kate
		char dato[10][10];int n=0;
		FILE* archivo = fopen("archivo.txt","a+");//si no existe lo crea
		do{
			fscanf(archivo,"%s\n",dato[n]);
			puts(dato[n]);
		}while(!feof(archivo));

		/*while(fscanf(archivo,"%s\n",dato[n])){
			puts(dato[n]);
			n++;
		}*/
		fclose (archivo); //cierra archivo
	}
	/*
	{
		system ("kate archivo.txt");//abre bloc de notas llamado kate
		char dato[10][10];int n=0;//use arreglo bidi pq me funciono asi
		FILE* archivo = fopen("archivo.txt","a+");//si no existe lo crea
		
		do{
			fgets(dato,10,archivo);
			puts(dato);
			fscanf(archivo,"%s\n",dato[n]);
			printf("%s\n",dato[n]);
			n++;
		}while(!feof(archivo));
		fclose (archivo); //cierra archivo
		printf("Hay %i datos en el arreglo de 0 a %i",n,n-1);//a la variable dato el contenido
	}*/

	
	/*
	float dato;
	//system ("code prueba.txt");//abre block de notas
	FILE * archivo; //apuntador a archivo
	archivo = fopen ("numeros.txt","a+"); //abro para lectura en la ruta especificada//lectura
	do{
 //el apuntador a la posici�n del archivo copia 
   		printf("%.2f\n",dato);//a la variable dato el contenido
	}while (fscanf(archivo, "%f\n", &dato) != EOF); //repite el ciclo mientras no sea FIN DE ARCHIVO (end of file)
	fclose (archivo); //cierra archivo*/

/*
	float dato[10];int n=0;
	system ("Nota prueba.txt");//abre block de notas
	FILE * apuntador; //apuntador a archivo
	apuntador = fopen ("prueba.txt","r"); //abro para lectura en la ruta especificada//lectura
	do{
   		fscanf(apuntador,"%f",&dato[n]); //el apuntador a la posici�n del archivo copia 
   		printf("%.2f\n",dato[n]);//a la variable dato el contenido
		n++;
	}while (!feof(apuntador)); //repite el ciclo mientras no sea FIN DE ARCHIVO (end of file)
	fclose (apuntador); //cierra archivo
	printf("Hay %i datos en el aregglo de 0 a %i",n,n-1);//a la variable dato el contenido
	
	for(int i=0;i<n;i++){
		printf("%.2f\n",dato[i]);//a la variable dato el contenido
	}*/
}



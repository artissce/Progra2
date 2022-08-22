#include "libreria.h"
/*Ana Karen Cuenca Esquivel - 177932*/
int main(){
	HANDLE hConsole = GetStdHandle( STD_OUTPUT_HANDLE );
	/*registro cliente, *pCliente;
	pCliente = &cliente; //los apuntadores guadra ubi de memoria
	*/
	lugares *info;
	info = (lugares *)malloc(sizeof(lugares));
	color(hConsole,1);
	printf("\tBIENVENIDOS A PRIMERA PLUS");
	color(hConsole,7);
	printf("\n\td e s t i n o s\n");	//xilitla, real de catorce,ciudad valles, tamasopo, rio verde

	createFile();
	regis_Viajes();
	
	color(hConsole,1);
	printf("\nGracias por usar nuestro programa, vuelva pronto!");
	color(hConsole,7);
	getchar();
	/*
	registro *pCliente; //principio para las listas //declaracion de apuntadores
	pCliente = (registro *)malloc(sizeof(registro));//tamano del registro de acuerdo a la estructura
	registro_cliente(pCliente);
	getchar();
	*/
	return 0;
}



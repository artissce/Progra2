#include <stdio.h> //FILE
#include <time.h>
#include <stdlib.h>
#include <ctype.h> //isdigit -> retorna cero si no es digito
#include <string.h> //strlen -> tama�o de cadena
#include <locale.h>
#include <windows.h>

//estructuras
typedef struct { //nombre de la estructura
	int dia;
	int mes;
	int anio;
}fecha; //nombre variable

typedef struct{
	int id_trabajador;
	char nombre[20];
	fecha f_nac;
} registro;
#include "validaciones.h"
#include "archivo.h"



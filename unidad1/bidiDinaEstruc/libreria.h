#include <stdio.h> //FILE
#include <time.h>
#include <stdlib.h>
#include <string.h> //strlen -> tama?o de cadena
#include <conio.h>
#include <windows.h>

typedef struct{
	int matricula;
	char nombre[20];
	int edad;
	char carrera[20];
	float calif[3];
}Dato;

FILE *arch = NULL;

#include "vali.h"
#include "funciones.h"

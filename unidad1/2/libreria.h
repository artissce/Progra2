#include <stdio.h> //FILE
#include <time.h>
#include <stdlib.h>
#include <string.h> //strlen -> tama?o de cadena
#include <conio.h>
#include <windows.h>

typedef struct{
	char nomH[20];
	char calle[50];
	int num;
}hospital;

typedef struct{
	char nomP[20];
	int edad;
	char sint[45];
	hospital lugar;
}paciente;

typedef struct{
	char nomM[20];
	int idM;
	paciente persona;
}medico;
#include "vali.h"
#include "archivo.h"

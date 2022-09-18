#include <stdio.h> //FILE
#include <time.h>
#include <stdlib.h>
#include <string.h> //strlen -> tama?o de cadena
#include <conio.h>
#include <windows.h>
#include <iostream>
#include <iomanip>

using namespace std;
#define T 10

int f=0,c=0,tam[25];
typedef struct{
	int matricula;
	char nombre[20];
	int edad;
	char carrera[20];
	float calif[3];
}Dato;

#include "vali.h"
#include "ordenaUni.h"
#include "ordenaBidiEstruct.h"

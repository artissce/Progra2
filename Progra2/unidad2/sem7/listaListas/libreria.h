#include <stdio.h>//
#include <iostream>//
#include <stdlib.h>
#include <iomanip>//
#include <time.h>//
#include <conio.h>//
#include <ctype.h>//
#include <locale.h>//
#include <windows.h>//
#include <string.h>//
#include <string>//
#include <istream>
#include <fstream>//
#include <sstream>

using namespace std;
FILE *arch = NULL;

struct Empleado{
	int idEmpleado;
	//char nombre[30];
	string nombre;
	string puesto;
	float salario;
	struct Empleado *sig;//guarda la ubicacion  del mismo tipo de la estrcutura - siguiente SE PUEDE ELIMITAR LA LEYENDA STRUCT
}*primero, *ultimo;

struct Listas{
	Empleado *lista;//PRIMER NODO DE LA SUBLISTA
	Listas *sig;//GUARDA EL SIGUIENTE NODO
}*primLista,*ultLista;//sin flechas
int unico =0;

#include "validacion.h"
#include "borrar.h"
#include "archivo.h"
#include "funciones.h"


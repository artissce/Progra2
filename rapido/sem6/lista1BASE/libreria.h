#include <iostream>
#include <stdlib.h>
#include <iomanip>
#include <locale.h>
#include <windows.h>
#include <string.h>

using namespace std;

struct Empleado{
	int idEmpleado;
	//char nombre[30];
	string nombre;
	string puesto;
	float salario;
	struct Empleado *sig;//guarda la ubicacion  del mismo tipo de la estrcutura - siguiente SE PUEDE ELIMITAR LA LEYENDA STRUCT
}*primero, *ultimo;

struct Listas{
	Empleado *lista;
	Listas *sig;
}*primLista,*ultLista;

#include "vali.h"
#include "funciones.h"

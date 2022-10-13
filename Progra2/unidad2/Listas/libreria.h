#include <iostream> //cout, cin, fixed, endl
#include <stdlib.h> //malloc
#include <iomanip> //setw
#include <locale.h> //setlocale
#include <windows.h> //SetConsole
#include <string> //string
using namespace std;

FILE *arch = NULL;
struct Empleado{
	int idEmpleado;
	//char nombre[30];
	//char puesto[30];
	string nombre;
	string puesto;
	float salario;
	struct Empleado *sig; //siguiente; se le puede omitir ponerle struct
	struct Empleado *ant;//anterior
}*primero, *ultimo;

int unico = 0;

#include "validacion.h"
#include "borrar.h"
#include "funciones.h"


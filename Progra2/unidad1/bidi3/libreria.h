#include <stdio.h> //FILE
#include <time.h>
#include <stdlib.h>
#include <string.h> //strlen -> tama?o de cadena
#include <conio.h>
#include <windows.h>
#include <iostream>
#include <iomanip>

using namespace std;

int f,c,tam[25];

struct Empresa{
	int idEmpresa;
	char razonSocial[20];
};

struct Departamento{
	int idDepto;
	char nomDepto[20];
	char asig[20];//proyecto asignado
	int cant;//cant de integrantes del equipo del trabajo
};
struct Empleado{
	int idEmpleado;
	char nombre[20];
	float sueldo;
};

struct Relacion{
	int idRelacion;
	Empleado emp;
	Departamento depto;
	Empresa empr;
	
};

#include "vali.h"
#include "archivo.h"

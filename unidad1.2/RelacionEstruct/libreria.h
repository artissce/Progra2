#include <stdio.h> //FILE
#include <time.h>
#include <stdlib.h>
#include <string.h> //strlen -> tama?o de cadena
#include <conio.h>
#include <windows.h>

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
	int idEmpleado;
	Empleado emp;
	Departamento depto;
	Empresa empr;
};

#include "vali.h"
#include "archivo.h"

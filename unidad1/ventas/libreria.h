#include <stdio.h> //FILE
#include <time.h>
#include <stdlib.h>
#include <string.h> //strlen -> tama?o de cadena
#include <conio.h>
#include <windows.h>
#include <iostream>
#include <iomanip>

using namespace std;

int f,c,tam[25],tam2[25],tam3[25];

typedef struct{
	int idEmpleado;
	char nombre[20];
	char apellidos[25];
	char correo[30];
	int telefono;
	char direccion[30];
}Personal;

typedef struct{
	int idModelo;
	float precio;
	char descripcion[40];
}Catalogo;

typedef struct{
	int idVenta;
	int idEmpleado;
	int idModelo;
}Venta;
/*
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
*/
#include "vali.h"
#include "func.h"


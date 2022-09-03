#include <conio.h> //getch()
#include <iostream> //cout, cin, endl, fixed
#include <iomanip> //setw, setprecision
#include <stdlib.h> //malloc, free
#include <string.h> //strlen -> tamaño de cadena
#include <stdio.h> //FILE
#include <locale.h>
#include <windows.h>

using namespace std;

typedef struct{
	int idEmpleado;
	char nombre[20];
	char apellidos[30];
	char correo[20];
	char telefono[11];
	char direccion[30];
}Personal;

typedef struct{
	int idModelo;
	float precio;
	char desc[20];
}Catalogo;

typedef struct{
	int idVenta;
	int idEmpleado;
	int idModelo;
}Venta;

int f,c;
int tam[]={0};
int tam2[]={0};
int tam3[]={0};

#include "validaciones.h"
#include "ordena.h"
#include "act1.h"


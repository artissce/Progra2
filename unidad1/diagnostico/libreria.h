#include <stdio.h> //FILE
#include <time.h>
#include <stdlib.h>
#include <string.h> //strlen -> tama?o de cadena
#include <conio.h>
#include <windows.h>

#define color SetConsoleTextAttribute
//lugares
typedef struct{
	int pos;
	char lugar[25];
}lugares;

lugares info[]={
	{1, "Xilitla"},
	{2, "Real de Catorce"},
	{3, "Ciudad Valles"},
	{4, "Tamasopo"},
	{5, "Rio Verde"},
};
//fechas disponibles
typedef struct {
	int pos2;
	char fecha[19];
}fecha;

fecha infor[]{
	{1, "15/08/2022 - 13:00"},
	{2, "15/08/2022 - 15:00"},
	{3, "15/08/2022 - 16:00"},
	{4, "15/08/2022 - 19:00"},
	{5, "15/08/2022 - 21:00"},
};
//costos
typedef struct{
	int pos3;
	char pos4[4];
	char cost[100];
}costos;
	
costos inform[]={
	{1, "01", "$900"},
	{2, "01", "$800"},
	{3, "01", "$850"},
	{4, "01", "$930"},
	{5, "01", "$780"},
};

/*
typedef struct{
	char nombre[20];
	fecha f_visita;
	float precio;
} registro;*/

FILE *arch = NULL;
FILE *arch2 = NULL;
FILE *arch3 = NULL;

#include "valida.h"
#include "archivo.h"

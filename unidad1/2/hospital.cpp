#include <stdio.h> //FILE
#include <time.h>
#include <stdlib.h>
#include <string.h> //strlen -> tama?o de cadena
#include <conio.h>
#include <windows.h>

#include "vali.h"
#include "archivo.h"
typedef struct{
	char nomH[20];
	char calle[50];
	int num;
}hospital;

typedef struct{
	char nomP[20];
	int edad;
	char sint[45];
}paciente;

typedef struct{
	char nomM[20];
	int idM;
}medico;

int main(){
	registro *pHospital; //principio para las listas
	pHospital = (hospital *)malloc(sizeof(hospital));
	
	registro *pMedico; //principio para las listas
	pMedico = (medico *)malloc(sizeof(medico));
	
	registro *pPaciente; //principio para las listas
	pPaciente = (paciente *)malloc(sizeof(paciente));
	
	registro_hospital(pHospital);
	registro_medico(pMedico);
	registro_paciente(pPaciente);

	getchar();
	
	
}

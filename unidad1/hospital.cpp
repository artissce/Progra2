#include <stdio.h> //FILE
#include <time.h>
#include <stdlib.h>
#include <string.h> //strlen -> tama?o de cadena
#include <conio.h>
#include <windows.h>

#include "validaciones.h"
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
	
	void registro_hospital(registro *pHospital){
	setlocale(LC_CTYPE, "Spanish");
	SetConsoleCP(1252); //STDIN codificacion de windows 1252
	SetConsoleOutputCP(1252); //STDOUT
	
	printf("\t\nREGISTRO HOSPITAL\n");
	//pPaciente->id_trabajador = validaEntero("Id Trabajador: ");
	validaCadena("Nombre del hospital: ", pHospital->nomH);
	validaCadena("Ingrese calle: ", pHospital->calle);
	pHospital->num, = validaEntero("Ingrese numero: ");
	
	printf("\nDATOS DEL HOSPITAL\n");
	printf("%s\t", pHospital->nomH);
	printf("%s\t", pHospital->calle);
	printf("%d\t", pHospital->num);
	}
	void registro_medico(registro *pMedico){
	setlocale(LC_CTYPE, "Spanish");
	SetConsoleCP(1252); //STDIN codificacion de windows 1252
	SetConsoleOutputCP(1252); //STDOUT
	
	printf("\t\nREGISTRO MEDICO\n");
	
	printf("Identifiquese como medico\n");
	//pPaciente->id_trabajador = validaEntero("Id Trabajador: ");
	validaCadena("Nombre: ", pMedico->nomM);
	pMedico->idM = validaEntero("Ingrese su ID: ");
	
	printf("\nDATOS DEL MEDICO\n");
	printf("%d\t", pMedico->nomM);
	printf("%s\t", pMedico->idM);
	}
	
	void registro_paciente(registro *pPaciente){
	setlocale(LC_CTYPE, "Spanish");
	SetConsoleCP(1252); //STDIN codificacion de windows 1252
	SetConsoleOutputCP(1252); //STDOUT
	
	printf("\t\nREGISTRO PACIENTE\n");
	
	printf("ingrese los datos del paciente\n");
	//pPaciente->id_trabajador = validaEntero("Id Trabajador: ");
	validaCadena("Nombre: ", pPaciente->nomP);
	pPaciente->edad = validaEntero("Dia de nacimiento: ");
	pPaciente->sint = validaCadena("Sintomas: ");
	
	printf("\nDATOS REGISTRADOS DEL PACIENTE\n");
	printf("%d\t", pPaciente->nomPr);
	printf("%s\t", pPaciente->edad);
	printf("%d\t", pPaciente->sint);
	}
}

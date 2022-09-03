#include "libreria.h"

int main(){
	hospital *pHospital; 
	pHospital = (hospital *)malloc(sizeof(hospital));
	
	medico *pMedico;
	pMedico = (medico *)malloc(sizeof(medico));
	
	paciente *pPaciente;
	pPaciente = (paciente *)malloc(sizeof(paciente));
	
	registro_hospital(pHospital);
	registro_medico(pMedico);
	registro_paciente(pPaciente);

	getchar();
	
}

void registro_hospital(hospital *pHospital){
	//setlocale(LC_CTYPE, "Spanish");
	SetConsoleCP(1252); //STDIN codificacion de windows 1252
	SetConsoleOutputCP(1252); //STDOUT
	
	printf("\t- REGISTRO HOSPITAL -\n\n");
	//pPaciente->id_trabajador = validaEntero("Id Trabajador: ");
	validaCadena("Nombre del hospital: ", pHospital->nomH);
	validaCadena("Ingrese calle: ", pHospital->calle);
	pHospital->num = validaEntero("Ingrese numero: ");
	
	printf("\n\tDATOS DEL HOSPITAL\n");
	printf("%s\t", pHospital->nomH);
	printf("%d\t", pHospital->calle);
	printf("%d\t", pHospital->num);
	}

void registro_medico(medico *pMedico){
	//setlocale(LC_CTYPE, "Spanish");
	SetConsoleCP(1252); //STDIN codificacion de windows 1252
	SetConsoleOutputCP(1252); //STDOUT
	
	printf("\n\n\t - REGISTRO MEDICO -\n");
	
	printf("Identifiquese como medico\n");
	//pPaciente->id_trabajador = validaEntero("Id Trabajador: ");
	validaCadena("Nombre: ", pMedico->nomM);
	pMedico->idM = validaEntero("Ingrese su ID: ");
	
	printf("\n\tDATOS DEL MEDICO\n");
	printf("%s\t", pMedico->nomM);
	printf("%d\t", pMedico->idM);
}
	
void registro_paciente(paciente *pPaciente){
	//setlocale(LC_CTYPE, "Spanish");
	SetConsoleCP(1252); //STDIN codificacion de windows 1252
	SetConsoleOutputCP(1252); //STDOUT
	
	printf("\n\n\t - REGISTRO PACIENTE -\n");
	
	printf("ingrese los datos del paciente\n");
	//pPaciente->id_trabajador = validaEntero("Id Trabajador: ");
	validaCadena("Nombre: ", pPaciente->nomP);
	pPaciente->edad = validaEntero("Dia de nacimiento: ");
	validaCadena("Sintomas del paciente: ", pPaciente->sint);
	//pPaciente->sint = validaCadena("Sintomas del paciente entrevistado: ");
	
	printf("\n\tDATOS REGISTRADOS DEL PACIENTE\n");
	printf("%s\t", pPaciente->nomP);
	printf("%d\t", pPaciente->edad);
	printf("%s\t", pPaciente->sint);
	}

/*void registro_cliente(registro *pCliente){
	setlocale(LC_CTYPE, "Spanish");
	SetConsoleCP(1252); //STDIN codificacion de windows 1252
	SetConsoleOutputCP(1252); //STDOUT
	
	printf("\tBIENVENIDOS A PRIMERA PLUS\n");
	printf("VIAJES DISPONIBLES\n");
	
	/*
	printf("INGRESE LOS DATOS\n");
	pCliente->id_trabajador = validaEntero("Id Trabajador: ");
	validaCadena("Nombre: ", pCliente->nombre);
	pCliente->f_nac.dia = validaEntero("Dia de nacimiento: ");
	pCliente->f_nac.mes = validaEntero("Mes de nacimiento: ");
	pCliente->f_nac.anio = validaEntero("A?o de nacimiento: ");
	
	printf("\nDATOS REGISTRADOS\n");
	printf("%d\t", pCliente->id_trabajador);
	printf("%s\t", pCliente->nombre);
	printf("%d\t", pCliente->f_nac.dia);
	printf("%d\t", pCliente->f_nac.mes);
	printf("%d\t", pCliente->f_nac.anio);
}*/
void createFile(){
	//LUGARES
	if(!(arch=fopen("lugares.txt", "w"))){//problemas con el archivo
		printf("ERROR - no se ha podido crear el archivo lugares.txt ");
		exit(1);
	}
	
	for(int i=0; i<5; i++){//recorre el arreglo para Aagregar los datos
		fprintf(arch, "%d\t", info[i].pos);
		fprintf(arch, "%s\n", info[i].lugar);
	}
	
	fclose(arch);
	//FECHAS
		if(!(arch2=fopen("fechas.txt", "w"))){//problemas con el archivo
		printf("ERROR - no se ha podido crear el archivo lugares.txt ");
		exit(1);
	}
	
	for(int i=0; i<5; i++){//recorre el arreglo para Agregar los datos
		fprintf(arch, "%d\t", infor[i].pos2);
		fprintf(arch, "%s\n", infor[i].fecha);
	}
	
	fclose(arch2);
	//COSTOS
	if(!(arch3=fopen("costos.txt", "w"))){
		printf("ERROR - no se ha podido crear el archivo lugares.txt ");
		exit(1);
	}
	
	for(int i=0; i<10; i++){
		fprintf(arch, "%d\t", inform[i].pos3);
		fprintf(arch, "%s\t", inform[i].pos4);
		fprintf(arch, "%s\n", inform[i].cost);
	}
	fclose(arch3);
}


void regis_Viajes(){
	lugares dato={};
	
	if(!(arch=fopen("lugares.txt", "r"))){//checa si hay error al leer el archivo
		printf("ERROR - No se puede leer el archivo");
		exit(1);
	}
	while(!feof(arch)){
		fscanf(arch, "%d\t", &dato.pos);
		fscanf(arch, "%[^\n]\n", &dato.lugar);
		
		printf("%d\t", dato.pos);
		printf("%s\n", dato.lugar);
	}
	
	////
	int op = validaEntero("\nQuieres mas informes? 1-> Si 2->No ");
	while(op==1){
		op=0;
		
		int selec = validaEntero("\nLugar deseado: ");
		if(!(arch=fopen("lugares.txt", "r"))){
			printf("ERROR - No se puede leer el archivo");
			exit(1);
		}
		while(!feof(arch)){
			fscanf(arch, "%d\t", &dato.pos);
			fscanf(arch, "%[^\n]\n", &dato.lugar);
			
			if(dato.pos == selec){
				printf("\n%s\n", dato.lugar);
			}
		}
		////////
		fecha datos={};
		if(!(arch2=fopen("fechas.txt", "r"))){
			printf("ERROR - No se puede leer el archivo");
			exit(1);
		}
		printf("\nFECHAS\n");
		while(!feof(arch2)){
			fscanf(arch2, "%d\t", &datos.pos2);
			fscanf(arch2, "%[^\n]\n", &datos.fecha);
			//error	
			if(datos.pos2 == selec){
				printf("%s\n", datos.fecha);
			}
		}
		///////
		costos datos2={};
		if(!(arch3=fopen("costos.txt", "r"))){
			printf("ERROR - No se puede leer el archivo");
			exit(1);
		}
		printf("\nCOSTOS\n");
		while(!feof(arch3)){
			fscanf(arch3, "%d\t", &datos2.pos3);
			fscanf(arch3, "%s\t", &datos2.pos4);
			fscanf(arch3, "%[^\n]\n", &datos2.cost);
			
			if(datos2.pos3 == selec){
				printf("%s\n", datos2.cost);
			}
		}
	}
	
	fclose(arch);
	fclose(arch2);
	fclose(arch3);
	
}


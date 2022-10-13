int validaId(const char mensaje[]){
	int id = 0;
	int c = 0;
	do{
		Empleado *auxiliar=primero;
		Empleado *auxiliar2=primero;
		c = 0;
		printf("\n%s",mensaje);
		scanf("%d",&id);
		while(auxiliar!=NULL){
			if(id == auxiliar->idEmpleado){
				c++;
				printf("El ID ya existe");
			}
			auxiliar = auxiliar->sig;
			if(auxiliar == auxiliar2){
				break;
			}
		}
	}while (c!=0);
	return id;
}
float validaFlotante(const char mensaje[]){
	int continuar;
	float flotante=0;
	
	do{
		printf("%s", mensaje);
		continuar = scanf("%f", &flotante);
		fflush(stdin);
	}while (continuar != 1);
	
	return flotante;
}
int validaEntero(const char mensaje[]){
	int continuar=0;
	int entero=0;
	
	do{
		printf("%s",mensaje);
		continuar = scanf("%d", &entero);
		fflush(stdin);
	}while (continuar != 1);
	
	return entero;
}
void validaCadena(const char mensaje[], char cadena[]){ //cadena pasa por referencia
	//setlocale(LC_CTYPE, "Spanish");
	SetConsoleCP(1252);
	SetConsoleOutputCP(1252);
	bool bandera = true;
	
	while(bandera){
		//system("cls");
		printf("%s", mensaje);
		scanf("%[^\n]", cadena);
		//scanf("%s", cadena);
		//gets(cadena);
		fflush(stdin);
		if(strlen(cadena)>30){
			//printf("Tamaño cadena -> %d \n", strlen(cadena));
			continue;
			//break
		}else{
			for(int i = 0; i<strlen(cadena); i++){
				if(isalpha(cadena[i]) || cadena[i]==' ' || isdigit(cadena[i])){
					if (i== (strlen(cadena)-1)){
						bandera=false;
					}
				}else{
					break;
				}
			}
		}	
	}
}

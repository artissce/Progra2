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
	//SetConsoleCP(1252);
	//SetConsoleOutputCP(1252);
	bool bandera = true;
	
	while(bandera){
		//system("cls");
		printf("%s", mensaje);
		scanf("%[^\n]", cadena);
		//scanf("%s", cadena);
		//gets(cadena);
		fflush(stdin);
		if(strlen(cadena)>29){
			//printf("Tama?o cadena -> %d \n", strlen(cadena));
			continue;
			//break
		}else{
			for(int i = 0; i<strlen(cadena); i++){
				if(isalpha(cadena[i]) || cadena[i]==' '){
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

bool checarCorreo(const char mensaje[], const char *mail ) {
  mail = strchr( mail, '@' );
  if( mail == NULL ) return false;
  return strchr( mail, '.' ) != NULL;
}

int validaId(const char mensaje[],Empleado *primero){
	int entero=0;
	int c2=0;
	do{
		Empleado *auxiliar=primero;
		c2=0;
		printf("\n%s",mensaje);
		scanf("%d",&entero);
		while(auxiliar!=NULL){
			if(entero==auxiliar->id_emple){
			c2++;
			printf("error vuelva a intentar");
			}
			auxiliar=auxiliar->sig;	
		}
	}while (c2!=0);

	return entero;
}



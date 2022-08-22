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

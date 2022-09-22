int validaid(const char mensaje[],Empleado *primero){
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

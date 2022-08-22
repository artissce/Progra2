void recibe(Dato **dato, int n){
	for(int i=0; i<n; i++){
		//dato[i]->matricula=validaEntero("Matrciula: "); SI FUERA ESTATICO, USAMOS PUNTO dato[i].matricula=validaEntero("Matrciula: ");
		//(*datos[i]).matricula=validaEntero("Matricula: ");
		
		(*(dato+i))->matricula=validaEntero("Matricula: ");
		validaCadena("Nombre: ", (*(dato+i))->nombre);
		(*(dato+i))->edad=validaEntero("Edad: ");
		validaCadena("Carrera: ", (*(dato+i))->carrera);
		(*(dato+i))->calif[0]=validaFlotante("Calificacion primer parcial: ");
		(*(dato+i))->calif[1]=validaFlotante("Calificacion segundo parcial: ");
		(*(dato+i))->calif[2]=validaFlotante("Calificacion terce parcial: ");
		system("cls");	
	}
	
}
void imprime(Dato **dato, int n){
	
	for(int i=0; i<n; i++){
		printf("%d\t", (*(dato+i))->matricula);	
		printf("%s\t", (*(dato+i))->nombre);	
		printf("%d\t", (*(dato+i))->edad);	
		printf("%s\t", (*(dato+i))->carrera);	
		printf("%.2f\t", (*(dato+i))->calif[0]);
		printf("%.2f\t", (*(dato+i))->calif[1]);
		printf("%.2f\n", (*(dato+i))->calif[2]);	
	}
}



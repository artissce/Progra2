void imprimeBidi(Dato **dato){
	cout<<setw(15)<<"Fila"<<setw(15)<<"Matricula"<<setw(15)<<"Nombre"<<setw(10)<<"Edad"<<endl;
	for(int i=0;i<f;i++){
		for(int j=0;j<tam[i];j++){
			cout<<setw(10)<<"["<<i<<"]["<<j<<"]";
			cout<<setw(15)<<(*(dato+i)+j)->matricula;
			cout<<setw(15)<<(*(dato+i)+j)->nombre;
			cout<<setw(15)<<(*(dato+i)+j)->edad<<endl;
			
		}
		cout<<endl;
	}
}

void inicializaBidi(Dato **dato){
	for(int i=0;i<f;i++){
		c = validaEntero("No. nodos: ");
		*(dato +i ) = (Dato *)malloc(c *sizeof(Dato));
		tam[i]=c;
		for(int j=0; j<c; j++){
			(*(dato+i)+j)->matricula = validaEntero("Matricula: ");
			validaCadena("Nombre: ", (*(dato+i)+j)->nombre);
			(*(dato+i)+j)->edad = validaEntero("Edad: ");
		}
		//seleccionUniE((*(dato+i)),c);
		system("cls");
	}
	imprimeBidi(dato);
	for(int i=0; i<f;i++){
		seleccionUni((*(dato+i)),tam[i]);
	}
}


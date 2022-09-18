void recibe(Relacion **dato){
	for(int i=0; i<f; i++){
		c=validaEntero("No. Registros: ");
		*(dato + i) = (Relacion *)malloc(c*sizeof(Relacion));
		tam[i]=c;
		for(int j=0; j<c; j++){
			(*(dato+i)+j)->idRelacion=validaEntero("Id relacion: ");
			validaCadena("Nombre:  ", (*(dato+i)+j)->emp.nombre);
			validaCadena("Nombre del departamento:  ", (*(dato+i)+j)->depto.nomDepto);
			validaCadena("Razon social:  ", (*(dato+i)+j)->empr.razonSocial);
		}
	}
	system("cls");
}

void imprime(Relacion **dato){
	for(int i=0; i<f; i++){	
		for(int j=0; j<tam[i]; j++){
			cout<<"Fila ["<<i<<"]["<<j<<"]"<<setw(10)<<"Ubicacion de memoria"<<*(dato+i)+j;
			cout<<setw(10)<<(*(dato+i)+j)->idRelacion;
			cout<<setw(10)<<(*(dato+i)+j)->emp.nombre;
			cout<<setw(10)<<(*(dato+i)+j)->depto.nomDepto;
			cout<<setw(10)<<(*(dato+i)+j)->empr.razonSocial;
			cout<<endl;
		}
		cout<<endl;
	}
}


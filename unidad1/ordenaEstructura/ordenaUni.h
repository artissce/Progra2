void inicializaUni(Dato *dato, int n){
	for(int i=0;i<n;i++){
		(*(dato+i)).matricula = validaEntero("Matricula: ");
		validaCadena("Nombre: ", (*(dato+i)).nombre);
		(*(dato+i)).edad = validaEntero("Edad: ");
	}

	
}

void imprimeUni(Dato *dato, int n){
	for(int i=0;i<n;i++){
		cout<<(*(dato+i)).matricula<<"\t";
		cout<<(*(dato+i)).nombre<<"\t";
		cout<<(*(dato+i)).edad<<endl;
	}
}

void seleccionUni(Dato *dato, int n){
	Dato aux;
	int min=0;
	for(int i=0; i<n; i++){
		min=i;
		for(int j=i+1; j<n; j++){
			if((*(dato+min)).matricula > (*(dato+j)).matricula){//de menor a mayor
				min = j;
			}
		}
		aux = *(dato+i);
		*(dato+i) = *(dato+min);
		*(dato+min)= aux;
	}
}

void burbujaUni(Dato *dato, int n){
	Dato aux;
	for(int i=1; i<n; i++){
		for(int j=0; j<n-i; j++){
			if((*(dato+j)).matricula>(*(dato+(j+1))).matricula){//de menor a mayor
				aux =*(dato+j);
				*(dato+j) = *(dato+(j+1));
				*(dato+(j+1)) = aux;
			}
		}
	}
}

void insercionUni(Dato *dato, int n){
	int j;
	Dato aux;
	for(int i=1; i<n; i++){
		aux=(*(dato+i));
		j=i-1;
		while((*(dato+j)).matricula > aux.matricula && (j>=0)){
			*(dato+(j+1)) = *(dato+j);
			j--;
		}
		*(dato+(j+1))=aux;
	}
}


void imprimeUni(int v[], const char orden[]){
	cout<<endl<<endl<<orden<<endl<<endl<<setw(4);
	for(int i=0;i<T;i++){
		cout<<v[i]<<setw(4);
	}
}

void ordenaBurbuja(int v[]){
	int aux=0;
	for(int i=1; i<=T; i++){
		for(int j=0; j<T-i; j++){
			if(v[j]>v[j+1]){//de menor a mayor
				aux = v[j];
				v[j] = v[j+1];
				v[j+1] = aux;
			}
		}
	}
}
void ordenaSeleccion(int v[]){
	int aux=0, min=0;
	for(int i=0; i<=T; i++){
		min=i;
		for(int j=i+1; j<T; j++){
			if(v[min]>v[j]){//de menor a mayor
				min = j;
			}
		}
		aux = v[i];
		v[i] = v[min];
		v[min]= aux;
	}
}
void ordenaInsercion(int v[]){
	int j,aux;
	for(int i=1; i<=T; i++){
		aux=v[i];
		j=i-1;
		while((v[j]>aux) && (j>=0)){
			v[j+1] = v[j];
			j--;
		}
		v[j+1] =aux;
	}
}

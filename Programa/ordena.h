void seleccionEmp(Personal *info, int f){
	Personal aux;
	int min = 0;
	for (int i=0; i<f; i++){
		min = i;
		for (int j=i+1; j<f; j++){
			if((*(info+min)).idEmpleado > (*(info+j)).idEmpleado){
				min = j;
			}
		}
		aux = (*(info+i));
		(*(info+i)) = (*(info+min));
		(*(info+min)) = aux;
	}
}
void burbujaCat(Catalogo *dato1, int f){
	Catalogo aux;
	for (int i=1; i<f; i++){
		for (int j=0; j<f-1; j++){
			if( (*(dato1+j)).idModelo > (*(dato1+(j+1))).idModelo ){
				aux = *(dato1+j);
				*(dato1+j) = *(dato1+(j+1));
				*(dato1+(j+1)) = aux;
			}		
		}
	}
}
void insercionVen(Venta *dato, int f){
	int j=0;
	Venta aux;
	for (int i=1; i<f; i++){
		aux = (*(dato+i));
		j = i - 1;
		while ( (*(dato+j)).idVenta > aux.idVenta && j >= 0){
			*(dato+(j+1)) = *(dato+j);
			j--;
		}
		*(dato+(j+1)) = aux;
	}
}

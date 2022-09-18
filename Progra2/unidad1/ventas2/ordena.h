//METODOS DE ORDENAMIENTO
void seleccionUni(Personal *dato, int n){//METODO PARA PERSONAL
	Personal aux;
	int min=0;
	for(int i=0; i<n; i++){
		min=i;
		for(int j=i+1; j<n; j++){
			if((*(dato+min)).idEmpleado > (*(dato+j)).idEmpleado){//de menor a mayor
				min = j;
			}
		}
		aux = *(dato+i);
		*(dato+i) = *(dato+min);
		*(dato+min)= aux;
	}
}
void burbujaUni(Catalogo *info, int n){//METODO PARA CATALOGO
	Catalogo aux;
	for(int i=1; i<n; i++){
		for(int j=0; j<n-i; j++){
			if((*(info+j)).idModelo>(*(info+(j+1))).idModelo){//de menor a mayor
				aux =*(info+j);
				*(info+j) = *(info+(j+1));
				*(info+(j+1)) = aux;
			}
		}
	}
}
void insercionUni(Venta *sell, int n){//METODO PARA VENTA
	int j;
	Venta aux;
	for(int i=1; i<n; i++){
		aux=(*(sell+i));
		j=i-1;
		while((*(sell+j)).idVenta > aux.idVenta && (j>=0)){
			*(sell+(j+1)) = *(sell+j);
			j--;
		}
		*(sell+(j+1))=aux;
	}
}
//FUNCIONES QUE LLAMAN A CADA METODO PARA CADA ESTRUCTURA
void ordenEmpleado(Personal **dato, int a[]){
	//recibeEmpleado(Personal **dato, int a[]);
	//imprimeBidi(dato);
	for(int i=0; i<sE;i++){
		seleccionUni((*(dato+i)),a[i]);
	}
}
void ordenCatalogo(Catalogo **info, int b[]){
	//recibeEmpleado(Personal **dato, int a[]);
	//imprimeBidi(info);
	for(int i=0; i<sC;i++){
		burbujaUni((*(info+i)),b[i]);
	}
}
void ordenVenta(Venta **sell, int c[]){
	//recibeEmpleado(Personal **dato, int a[]);
	//imprimeBidi(dato);
	for(int i=0; i<sV;i++){
		insercionUni((*(sell+i)),c[i]);
	}
}


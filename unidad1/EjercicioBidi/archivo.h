void inicializaBidi(int **bidi){
	for(int i=0; i<f; i++){
		c=validaEntero("\nColumnas para filas ");
		*(bidi + i) =(int *)malloc((c+1)*sizeof(int ));
		//bidi[i] =(int *)malloc)c*sizeof(int );
		int suma=0;
		for(int j=0; j<c; j++){
			*(*(bidi+i)+j)=validaEntero("\nValor: ");
			
			suma+= *(*(bidi+i)+j);
		}
		*(*(bidi+i)+c) = suma;
		for(int j=0; j<c+1; j++){
			printf("%d\t",*(*(bidi+i)+j));
		}
		printf("\n");
	}
}

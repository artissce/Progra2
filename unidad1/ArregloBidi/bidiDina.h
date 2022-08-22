void inicializaBidi(int **bidi){
	for(int i=0;i <f; i++){
		*(bidi + i) = (int *)malloc(c*sizeof(int));
		//bidi[i] = (int *)malloc(c*sizeof(int));
		for(int j=0;i <f; j++){
			*(*(bidi+i)+j)=rand()%100+1;
			//bidi[i][j]=rand()%100+1;
		}
	}
}
void imprimeBidi(int **bidi){
	for(int i=0; i<f; i++){
		for(int j=0;j<c; j++){
			printf("%d\t", *(*(bidi+i)+j));
			//printf("%d\t",bidi[i][j]);
		}
		printf("\n");
	}
}
void modificaBidi(int **bidi){
	for(int i=0; i<f; i++){
		for(int j=0;j<c; j++){
			(*(*(bidi+i)+j))++;
			//bidi[i][j]++;
		}
	}
}

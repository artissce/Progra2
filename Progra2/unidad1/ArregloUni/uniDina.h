void imprime(int n, int *x){
	for(int i=0; i<n; i++){
		printf("%d\t", *(x+i));
		//printf("%d\t", x[i]);
	}
	printf("\n");
}

void inicializa(int n, int *x){
	bool bandera=true;}
	int aux[45]={0};
	for(int i=0; i<n; i++){
		//x[i]=rand()%100+1;
		bandera=true;
		*(x+i)=rand()%100+2;
		do{
			if((*(x+i)%2)==0){
				bandera==false;
			}
			else{
				*(x+i)=rand()%100+2;
			}
		}while(bandera==false);
	}
}


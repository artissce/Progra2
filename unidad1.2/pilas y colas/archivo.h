int apila(int lim, int arr[]){
	//system("cls");
	if(lim<10){
		printf("\nIngresa elemento del arreglo: ");
		scanf("%d", &arr[lim]);
		lim++;
	}else{
		printf("Arreglo lleno");
	}
	getch();
	return lim;
}

int desapila(int lim, int arr[]){
	//system("cls");
	if(lim>0){
		printf("\n\nDESAPILANDO ARREGLO...\n");
		lim--;
		for(int j=0;j<lim;j++){
			printf("%d\n", arr[j]);
		}
	}else{
		printf("Arreglo vacio");
	}
	getch();
	return lim; 
}

int desencola(int lim, int arr[]){
	//system("cls");
	if(lim>0){
		arr[0]=0;
		for(int j=1;j<10;j++){
			arr[j-1]=arr[j];
		}
		arr[lim-1]=0;
		lim--;
		printf("\n\nDESENCOLANDO ARREGLO\n");
		for(int j=0;j<lim;j++){
			printf("%d\n", arr[j]);
		}
	}else{
		printf("Arreglo vacio");
	}
	getch();
	return lim;
}


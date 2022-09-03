void registroCadenas(char **bidi){
	for(int i=0; i<f; i++){
		
		c=validaEntero("\nDE QUE TAMANO QUIERES LAS CADENAS? ");
			*(bidi + i) = (char *)malloc((c+1)*sizeof(char));
		//bidi[i]=(char *)malloc(20*sizeof(char ));
			validaCadena("Escribe: ",*(bidi+i));
		//validaCadena(bidi[i]
	}
}

void imprimeCadenas(char **bidi){
	/*for(int i=0; i<f; i++){
		for(int j=0; j<c; j++){
			printf("%s\t",*(*(bidi+i)+j) );
			//printf("%d\t",bidi[i][j]);
		}
		printf("\n");
	}*/
	
	printf("\n");
	for(int i=0; i<f; i++){
		printf("%s\n", *(bidi+i));
		//print("%s\n",bidi[i]);
	}
}

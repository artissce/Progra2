void inicializaBidi(int ** enteros){
	for(int i=0; i<f; i++){
		*(enteros+i)=(int *)malloc(c*sizeof(int));
		for(int j=0; j<c; j++){
			*(*(enteros+i)+j) = rand()%100+1;
		}
	}
}

void imprimeBidi(int **enteros){
	cout<<endl<<endl<<"Enteros en el arreglo"<<endl;
	for(int i=0; i<f; i++){
		for(int j=0; j<c; j++){
			cout<<setw(10)<<*(*(enteros+i)+j);
		}
		cout<<endl;
	}
}
void burbujaBidi(int **enteros){
	int aux = 0;
	for(int fila=0; fila<f; fila++){
		for(int i=1; i<=c; i++){
			for(int j=0; j<c-1;j++){
				if (*(*(enteros+fila)+j) > *(*(enteros+fila)+(j+1))){
					aux = *(*(enteros+fila)+j);
					*(*(enteros+fila)+j)=*(*(enteros+fila)+(j+1));
					*(*(enteros+fila)+(j+1))=aux;
				}
			}	
		}
	}
}

void seleccionBidi(int **enteros){
	int aux=0, min=0;
	for(int fila=0; fila<f; fila++){
		for(int i=0; i<c; i++){
			min=i;
			for(int j=i+1; j<c; j++){
				if(*(*(enteros+fila)+min) > *(*(enteros+fila)+j)){
					min=j;
				}
			}
			aux = *(*(enteros+fila)+i);
			*(*(enteros+fila)+i) = *(*(enteros+fila)+min);
			*(*(enteros+fila)+min) = aux;
		}
	}
}

void insercionBidi(int **enteros){
	int j=0, aux=0;
	for(int fila=0; fila<f;fila++){
		for(int i=1; i<c; i++){
			aux = *(*(enteros+fila)+i);	
			j=i-1;
			while(*(*(enteros+fila)+j)>aux && j>=0){
				*(*(enteros+fila)+(j=1)) = *(*(enteros+fila)+j);
				j--;
			}
			*(*(enteros+fila)+(j+1))=aux;
		}		
	}
}

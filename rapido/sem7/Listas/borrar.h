void borrarPrimero(){
	Empleado *tem = primero;
	if(primero=NULL){
		cout<<"No hay elementos en la lista";
	}
	else{
		primero = primero->sig;
		primero->ant=NULL;
		free(tem);
		getchar();
	}
}
void borrarUltimo(){
	Empleado *aux;
	if(primero=NULL){
		cout<<"No hay elementos en la lista";
	}
	else{
		aux=ultimo;
		ultimo=ultimo->ant;
		ultimo->sig=NULL;
		free(aux);
		getchar();
	}
	/*Empleado *actual, *previo;
	actual = primero;
	while(actual != ultimo){
		previo = actual;
		actual = actual->sig;
	}
	previo->sig = NULL;
	ultimo = previo;
	free(actual);
	getchar();*/
}

void eliminar(Empleado *aux){
	int ref=0;
	if(aux==primero) ref=1;
	else ref=2;
	
	if(primero==NULL){
		cout<<"No hay elementos en la lista";
	}
	else{
		if(ref==1){
			primero=primero->sig;
			primero->ant=NULL;
		}
		else{
			ultimo=ultimo->ant;
			ultimo->sig=NULL;
		}
		free(aux);
		getchar();
	}
}

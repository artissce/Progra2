void borrarPrimero(Empleado *primero){
	Empleado *tem = primero;
	primero = primero->sig;
	//cout<<endl<<endl<<primero<<setw(20)<<primero->sig<<endl;
	free(tem);
	getchar();
}
void borrarUltimo(Empleado *primero){
	Empleado *actual, *previo;
	actual = primero;
	while(actual != ultimo){
		previo = actual;
		actual = actual->sig;
	}
	previo->sig = NULL;
	ultimo = previo;
	free(actual);
	actual = primero;
	getchar();
}
int eliminarPosicion(Empleado *primero, int pos){ //agregar para que funcione en listas de listas
	Empleado *actual, *previo;
	pos = 0;
	int i = 0;
	cout<<endl<<endl;
	if(primero == NULL){
		cout<<"No hay elementos en la lista";
	}else{
		pos = validaEntero("Posicion a borrar: ");
		if(pos == 1){
			borrarPrimero(primero);
		}else{
			actual = primero;
			while(actual != NULL && i != (pos-1)){
				previo = actual;
				actual = actual->sig;
				i++;
			}
			if(actual != NULL){
				previo->sig = actual->sig;
				if(actual == ultimo){
					ultimo = previo;
					free(actual);
				}
			}
		}
	}
    getchar();
    return pos;
}
void borrarId(Empleado *primero){ //agregar para que funcione en listas de listas
	Empleado *actual, *previo;
	int id;
	cout<<endl<<endl;
	if(primero==NULL){
		cout<<"No hay elementos en la lista";
	}else{
		id = validaEntero("Id a eliminar: ");
		if(id==primero->idEmpleado){  
			borrarPrimero(primero); 
		}else{
			actual = primero;
			while(actual != NULL && actual->idEmpleado!=id){ 
				previo=actual;
				actual=actual->sig;
			}
			if(actual!=NULL){
				previo->sig=actual->sig;
				if(actual==ultimo){
					ultimo=previo;
					free(actual);
				}
			}
		}
	}
}

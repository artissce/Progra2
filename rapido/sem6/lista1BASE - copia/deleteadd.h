void agregarFinal(){
	Empleado *nuevo = registro();
	if(primero == NULL){
		primero = nuevo;
		ultimo = nuevo;
	}else{
		ultimo -> sig = nuevo;
		ultimo = nuevo;
	}
}

void agregarInicio(){
	struct Empleado *nuevo = registro();//memoria que reserva considerando que es un string
	//evalua si se guardo el espacio de memoria
	if(primero == NULL){
		primero = nuevo;
		ultimo = nuevo;
	}
	else{
		nuevo->sig=primero;
		primero=nuevo;
	}
}

void agregarPosicion(){
	Empleado *aux = primero;
	bool bandera=true;
	int pos = 0, i = 1;
	pos = validaEntero("Posición: ");
	if(pos==1){
		agregarInicio();
		getchar();
	}else{
		while(aux!=NULL){
			if(i == (pos-1) ){
				Empleado *nuevo = registro();
				nuevo->sig = aux->sig;
				aux->sig = nuevo;
				bandera=false;
				break;	
			}else{
				aux = aux->sig;
				i++;
			}
		}
		if(bandera){
			cout<<"La posición NO existe, el nodo se agrega al final de la lista"<<endl;
			agregarFinal();
		}
	}
	getchar();
}
void borrarPrimero(){
	Empleado *tem = primero;
	primero = primero->sig;
	free(tem);
}
void borrarUltimo(){
	Empleado *actual, *previo;
	actual = primero;
	while(actual != ultimo){
		previo = actual;
		actual = actual->sig;
	}
	previo->sig = NULL;
	ultimo = previo;
	free(actual);
}
void borrarPosicion(){
	Empleado *actual = primero, *previo, *aux;
	bool bandera=true;
	int pos = 0, i = 1;
	pos = validaEntero("Posición: ");
	pos=pos+1;
	previo=actual;
	if(pos==1){
		borrarPrimero();
		getchar();
	}else{
		while(actual!=NULL){
			if(i == (pos-1) ){
				aux=actual->sig;
				previo->sig=aux;
				free(actual);
				bandera=false;
				break;	
			}else{
				previo=actual;
				actual=previo->sig;
				i++;
			}
		}
		if(bandera){
			cout<<"La posición NO existe, el nodo se eliminara al final de la lista"<<endl;
			borrarUltimo();
		}
	}
	getchar();
}
void borrarID(){
	//agregar funcion faltante
}
/*
AGREGAR MODIFICACIONES
imprime las listas
en que nodo
que informacion quiere modificar
*/
void modificarId(Empleado *mod->idEmpleado){
	Empleado *actual=primero, *previo;
	bool bandera=true;
	int id = 0,i=1; //i = 1;
	id = validaEntero("Id a actualizar: ");
	while(actual!=NULL){
		if(id==actual->idEmpleado){
			previo->sig=actual->sig;
			registroActual(actual);
			bandera=false;
			break;
		}else{
			previo=actual;
			actual=actual->sig;	
		}
		if(actual!=NULL){
		printf("Id no existe");	
		}
	}
}
/*
ORDENAMIENTO
CIRCULAR DOBLEMENTE ENLAZADA
*/
void ordenaSeleccion(Empleado *primero){
	Empleado *aux =primero;
	Empleado *actual,*min;
	Empleado *pivote1 =new Empleado;
	Empleado *pivote2 =new Empleado;
	while(aux != NULL){
		min = aux;
		actual = aux->sig;
		while(actual != NULL){
			if(min->idEmpleado > actual->idEmpleado){
				min=actual;
			}
			actual=actual->sig;
		}
		pivote1->idEmpleado=aux->idEmpleado;
		pivote1->nombre=aux->nombre;
		pivote1->puesto=aux->puesto;
		pivote1->salario=aux->salario;
		
		pivote2->idEmpleado=min->idEmpleado;
		pivote2->nombre=min->nombre;
		pivote2->puesto=min->puesto;
		pivote2->salario=min->salario;
		
		min->idEmpleado=pivote1->idEmpleado;
		min->nombre=pivote1->nombre;
		min->puesto=pivote1->puesto;
		min->salario=pivote1->salario;
		
		aux->idEmpleado=pivote2->idEmpleado;
		aux->nombre=pivote2->nombre;
		aux->puesto=pivote2->puesto;
		aux->salario=pivote2->salario;
		
		aux=aux->sig;
	}
}
/*
TAREA
Crear archivo
crear la lista en base del archivo
Sino hay archivo, crearlo;
*/

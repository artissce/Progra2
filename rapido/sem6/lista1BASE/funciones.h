Empleado *registro(){
	struct Empleado *nuevo=new Empleado;
	int num, aux[20];
	bool band=true;
	do{
		num=validaEntero("Id del Empleado: ");
		if(aux[num]==0){
			aux[num]=1;
			nuevo->idEmpleado = num;
			band=true;
		}
		else{
			cout<<"\nYa existe ese id\n";
			band=false;
		}
	}while(band==false);
	cout<<"Nombre: ";
	cin>>nuevo->nombre;
	cout<<"Puesto: ";
	cin>>nuevo->puesto;
	nuevo->salario = validaFlotante("Salario: ");
	nuevo->sig=NULL;
	return nuevo;
}
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
	Empleado *actual, *previo;
	int pos, i =0;
	if(primero==NULL){
		cout<<"No hay elementos en la lsita";
	}
	else{
		pos=validaEntero("Posicion a borrar: ");
		if(pos ==1){
			borrarPrimero();
		}
		else{
			actual=primero;
			while(actual!=NULL && i !=(pos-1)){
				previo=actual;
				actual=actual->sig;
				i++;
			}
			if(actual != NULL){
				previo->sig=actual->sig;
				if(actual==ultimo){
					ultimo=previo;
					free(actual);
				}
			}
		}
	}
	/*Empleado *actual = primero, *previo, *aux;
	bool bandera=true;
	int pos = 0, i = 1;
	pos = validaEntero("Posición a borrar: ");
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
	getchar();*/
}
void borrarID(){
	Empleado *actual=primero,*previo,*otro;
	bool bandera=true;
	int id=0;
	id=validaEntero("Id a borrar: ");
	previo=actual;
	while(actual!=NULL){
		if(id==actual->idEmpleado){
			previo->sig=actual->sig;//otro=actual->sig;
			//previo->sig=otro;
			free(actual);
			bandera=false;
			break;
		}else{
			previo=actual;
			actual=previo->sig;
		}
	}
	if(bandera){
			cout<<"El id no existe"<<endl;
		}
	getchar();
}
/*
void agregar_elemento(){
	//struct Empleado *nuevo =(struct Empleado*)malloc (sizeof(struct Empleado));
	struct Empleado *nuevo =new Empleado;//memoria que reserva considerando que es un string
	if(nuevo== NULL){//evalua si se guardo el espacio de memoria
		cout<<"No hay memoria disponible";
	}
	else{
		Empleado nodo = registro();//creo variable nodo con el valor de la funcion registro, tiene que ser del mismo TIPO	
		nuevo->idEmpleado = nodo.idEmpleado;
		nuevo->nombre = nodo.nombre;
		nuevo->puesto = nodo.puesto;
		nuevo->salario = nodo.salario;
		nuevo->sig = nodo.sig;
	}
	//algoritmo de las listas
	if(primero==NULL){
		//doa apuntadores para saber cual es el primero y ultimo
		// primero y ultimo tienen la misma direccion de la variable nuevo
		primero= nuevo;
		ultimo= nuevo;
	}
	else{
		//reasigno, actualizo la memoria
		ultimo->sig=nuevo;
		ultimo=nuevo;
	}
}
*/
void mostrar_lista(){
	
	struct Empleado *auxiliar = primero;//primer direccion de memoria
	cout<<"Mostrando la lista completa"<<endl;
	cout<<"Ubicacion"<<setw(10);
	cout<<"idEmpleado"<<setw(10);
	cout<<"Nombre"<<setw(10);
	cout<<"Puesto"<<setw(10);
	cout<<"Salario"<<setw(10);
	cout<<"Siguiente"<<endl;
	
	while(auxiliar!=NULL){
		//while(auxiliar!=0)
		cout<<auxiliar<<setw(10);
		cout<<auxiliar->idEmpleado<<setw(10);
		cout<<auxiliar->nombre<<setw(10);
		cout<<auxiliar->puesto<<setw(10);
		cout<<auxiliar->salario<<setw(10);
		cout<<auxiliar->sig<<endl;
		auxiliar = auxiliar->sig;
	}
	cout<<endl<<"Primer nodo: "<<primero;
	cout<<endl<<"Ultimo nodo: "<<ultimo<<endl;
	
}

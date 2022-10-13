Empleado *registro(){
	Empleado *nuevo = new Empleado; //se puede omitir el struct
	nuevo->idEmpleado=validaId("id Empleado: ");
	cout<<"Nombre: ";
	cin>>nuevo->nombre;
	cout<<"Puesto: ";
	cin>>nuevo->puesto;
	nuevo->salario = validaFlotante("Salario: ");
	nuevo->sig=NULL;
	unico=1;
	return nuevo;
}

void agregarCircularDoble(int ref){
	Empleado *nuevo = registro();
	if(primero==NULL){
		nuevo->sig=nuevo;
		nuevo->ant=nuevo;
		primero=nuevo;
		ultimo=nuevo;
	}
	else{
		nuevo->sig=primero;
		nuevo->ant=ultimo;
		primero->ant=nuevo;
		ultimo->sig=nuevo;
		if(ref==1) primero =nuevo;
		else ultimo=nuevo;
	} 
}

void agregarCircularSimple(int ref){
	Empleado *nuevo = registro();
	if(primero==NULL){
		nuevo->sig=nuevo;
		primero=nuevo;
		ultimo=nuevo;
	}
	else{
		nuevo->sig=primero;
		ultimo->sig=nuevo;
		if(ref==1) primero =nuevo;
		else ultimo=nuevo;
	} 
}

void mostrarListaDoble(Empleado *aux){
	int ref=0;
	Empleado *aux2=aux;
	if(aux==primero) ref=1;
	else ref=2;
	
	cout<<endl<<endl<<"Mostrando la lista completa"<<endl;
	cout<<"Ubicacion"<<setw(10);
	cout<<"idEmpleado"<<setw(10);
	cout<<"Nombre"<<setw(10);
	cout<<"Puesto"<<setw(10);
	cout<<"Salario"<<setw(10);
	cout<<"Anterior"<<setw(10);
	cout<<"Siguiente"<<endl;
	while(aux!=NULL){
//	while(auxiliar!=0){	
		cout<<aux<<setw(10);
		cout<<aux->idEmpleado<<setw(10);
		cout<<aux->nombre<<setw(10);
		cout<<aux->puesto<<setw(10);
		cout<<aux->salario<<setw(10);
		//No es necesario, es importante para comprender que se guarda la memoria del siguiente nodo (referencia a la siguiente l�nea)
		cout<<aux->ant<<setw(10);
		cout<<aux->sig<<endl;
		if(ref==1) aux=aux->sig;
		else aux = aux->ant;
		if(aux==aux2) break;
	}
	
	cout<<endl<<"Primer NODO: "<<primero;
	cout<<endl<<"Ultimo NODO: "<<ultimo;
}
void mostrarListaSimple(){
	int ref=0;
	Empleado *aux=primero, *aux2=primero;
	
	cout<<endl<<endl<<"Mostrando la lista completa"<<endl;
	cout<<"Ubicacion"<<setw(10);
	cout<<"idEmpleado"<<setw(10);
	cout<<"Nombre"<<setw(10);
	cout<<"Puesto"<<setw(10);
	cout<<"Salario"<<setw(10);
	cout<<"Anterior"<<setw(10);
	cout<<"Siguiente"<<endl;
	while(aux!=NULL){
//	while(auxiliar!=0){	
		cout<<aux<<setw(10);
		cout<<aux->idEmpleado<<setw(10);
		cout<<aux->nombre<<setw(10);
		cout<<aux->puesto<<setw(10);
		cout<<aux->salario<<setw(10);
		//No es necesario, es importante para comprender que se guarda la memoria del siguiente nodo (referencia a la siguiente l�nea)
		cout<<aux->sig<<endl;
		aux=aux->sig;
		if(aux==aux2) break;
	}
	
	cout<<endl<<"Primer NODO: "<<primero;
	cout<<endl<<"Ultimo NODO: "<<ultimo;
}

void agregarFinal(){ //ya funciona
	Empleado *nuevo = registro();
	nuevo->sig=NULL;
	if(primero == NULL){
		nuevo->ant=NULL;
		primero = nuevo;
		ultimo = nuevo;
	}else{
		nuevo->ant=ultimo;
		ultimo->sig=nuevo;
		ultimo=nuevo;
	/*
		ultimo->sig = nuevo;
		ultimo->ant=ultimo;
		ultimo=nuevo;
		ultimo->sig=NULL;
		//ultimo = nuevo;*/
	}
}
void agregarInicio(){ //ya funciona
	Empleado *nuevo = registro();
	nuevo->ant=NULL;
	if(primero == NULL){
		nuevo->sig=NULL;
		primero = nuevo;
		ultimo = nuevo;
	}else{
		nuevo->sig=primero;
		primero->ant=nuevo;
		primero = nuevo;
		//primero->ant=NULL;
	}
}
void agregarPosicion(){ //ya funciona
	Empleado *aux = primero;
	bool bandera=true;
	int pos = 0;
	int i = 1;
	pos = validaEntero("Posici�n: ");
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
			cout<<"La posici�n NO existe, el nodo se agrega al final de la lista"<<endl;
			agregarFinal();
		}
	}
	getchar();
}
void eliminarPosicion(){ 
	Empleado *actual, *previo;
	int pos = 0;
	int i = 0;
	cout<<endl<<endl;
	if(primero == NULL){
		cout<<"No hay elementos en la lista";
	}else{
		pos = validaEntero("Posicion a borrar: ");
		if(pos == 1){
			borrarPrimero();
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
}
void borrarId(){ 
	Empleado *actual, *previo,*aux;
	//previo->sig=actual->sig; aux=actual->sig, aux->ant=actual->ant; free actual;
	int id;
	cout<<endl<<endl;
	if(primero==NULL){
		cout<<"No hay elementos en la lista";
	}else{
		id = validaEntero("Id a eliminar: ");
		if(id==primero->idEmpleado){  
			borrarPrimero(); 
		}else{
			actual = primero;
			while(actual != NULL && actual->idEmpleado != id){ 
				previo=actual;
				actual=actual->sig;
			}
			if(actual != NULL){
				previo->sig=actual->sig;
				aux=actual->sig;
				aux->ant=actual->ant;
				//free(actual);
				if(actual==ultimo){
					ultimo=previo;
					free(actual);
				}
			}
		}
	}
}
void actualizarDato(){
	Empleado *actual = new Empleado;
	int s = 0, m = 0, id = 0;
	cout<<endl<<endl;
	s = validaEntero("Desea modificar algun dato? 1..SI, otro..NO: ");
	while(s==1){
		//mostrar_lista(primero);
		cout<<endl<<endl;
		id = validaEntero("Ingrese el ID del Empleado: ");
		bool bandera = true;
		while(bandera){
			struct Empleado *auxiliar = primero;
			while(auxiliar!=NULL){
				if(id != auxiliar->idEmpleado){
					auxiliar = auxiliar->sig;
					bandera = false;
				}else{
					bandera = true;
					m = validaEntero("Que desea modificar? 1..PUESTO, otro..SALARIO: ");
					if(m==1){
						cout<<"Modifica el nuevo puesto: ";
						cin>>auxiliar->puesto;
					}else{
						auxiliar->salario = validaFlotante("Nuevo salario: ");
					}
					break;
				}
			}
			if(bandera==false){
				cout<<endl<<"El id no existe"<<endl;
			}else{
				bandera=false;
				s=2;
			}
		}
		s = validaEntero("Desea modificar otro dato? 1..SI, otro..NO: ");
	}
}

void agregar_elemento(){
	//struct Empleado *nuevo = (struct Empleado*) malloc (sizeof(struct Empleado));
	struct Empleado *nuevo = new Empleado; //al utilizar el string, se utiliza para almacenar la direcci�n de memoria
	if(nuevo==NULL){
		cout<<"No hay memoria disponible"<<endl;
	}else{
		Empleado *nodo = registro();
		nuevo->idEmpleado = nodo->idEmpleado;
		nuevo->nombre = nodo->nombre;
		nuevo->puesto = nodo->puesto;
		nuevo->salario = nodo->salario;
		nuevo->sig = nodo->sig;
		
		if(primero==NULL){
			primero = nuevo;
			ultimo = nuevo;
		}else{
			ultimo->sig=nuevo;
			ultimo=nuevo;
		}
	}
}

void mostrar_lista(Empleado *aux){
	//struct Empleado *auxiliar = ultimo;
	int ref=0;
	if (aux==primero)ref=1;
	else ref=2;
	system("cls");
	cout<<endl;
	cout<<"Mostrando la lista completa"<<endl;
	cout<<"Ubicacion"<<setw(10);
	cout<<"idEmpleado"<<setw(10);
	cout<<"Nombre"<<setw(10);
	cout<<"Puesto"<<setw(10);
	cout<<"Salario"<<setw(10);
	cout<<"Anterior"<<setw(10);
	cout<<"Siguiente"<<endl;
	while(aux!=NULL){
//	while(auxiliar!=0){	
		cout<<aux<<setw(10);
		cout<<aux->idEmpleado<<setw(10);
		cout<<aux->nombre<<setw(10);
		cout<<aux->puesto<<setw(10);
		cout<<aux->salario<<setw(10);
		//No es necesario, es importante para comprender que se guarda la memoria del siguiente nodo (referencia a la siguiente l�nea)
		cout<<aux->ant<<setw(10);
		cout<<aux->sig<<endl;
		if(ref==1) aux=aux->sig;
		else aux = aux->ant;
	}
	
	cout<<endl<<"Primer NODO: "<<primero;
	cout<<endl<<"Ultimo NODO: "<<ultimo;
}

/*
Primero		Ultimo
aux= primero, primero=primero->sig,primero->ant=NULL, free aux
aux=ubi ultimo,. ultimo=anterior, ultimo->sig=null, free aux

previo y actual por ID
pedir id, movernos con un actual, el previo y  actual junto hasta unir al siguiente nodo
previo->sig=actual->sig; aux=actual->sig, aux->ant=actual->ant; free actual;

Modicificaion
busco un dato, edito y muestro el antes y despues


*sig-> -> ->NULL
<-*ant<- <- <-
*/

Empleado *registro(){
	struct Empleado *nuevo=new Empleado;
	int num, aux[20];
	bool band=true;
	num=validaId("Id del Empleado: ");
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
void mostrar_lista(Empleado *primero){
	struct Empleado *auxiliar = primero; //Saber por donde empezaremos asignando el valor del apuntador primero al apuntador auxiliar 
	cout << endl << "Mostrando la lista completa: " << endl;
	cout << "Ubicacion: " << setw(10);
	cout << "IdEmpleado: " << setw(10);
	cout << "Nombre: " << setw(10);
	cout << "Puesto: " << setw(10);
	cout << "Salario: " << setw(10);
	cout << "Siguiente: " << endl;
	
	while(auxiliar != NULL){
		cout << auxiliar << setw(10);
		cout << auxiliar->idEmpleado << setw(10);
		cout << auxiliar->nombre << setw(10);
		cout << auxiliar->puesto << setw(10);
		cout << auxiliar->salario << setw(10);
		cout << auxiliar->sig << endl; // No es necesario escribir esto en los códigos, pero es importante comprender que se está guardando la memoria del siguiente nodo dentro de las listas generadas a lo largo de nuestro código y la creación de nodos en el ejercicio
		ultimo=auxiliar;
		auxiliar = auxiliar->sig;//me muevo por esta linea
	}
	cout << endl << "PRIMER NODO: " << primero;
	cout << endl << "ULTIMO NODO: " << ultimo;
}

void mostrarListas(){
	system("cls");
	cout << endl<< endl;
	struct Listas *aux = primLista; //Saber por donde empezaremos asignando el valor del apuntador primero al apuntador auxiliar 
	cout << "Ubicacion Lista: " << setw(20);
	cout << "Lista (primer nodo): " << setw(20);
	cout << "Siguiente: " << endl;
	
	while(aux != NULL){
		cout << aux << setw(20);
		cout << aux->lista << setw(20);
		cout << aux->sig << endl; // No es necesario escribir esto en los códigos, pero es importante comprender que se está guardando la memoria del siguiente nodo dentro de las listas generadas a lo largo de nuestro código y la creación de nodos en el ejercicio
		aux = aux->sig;
	}
	cout << endl << "PRIMER LISTA: " << primLista;
	cout << endl << "ULTIMA LISTA: " << ultLista;
	
	aux = primLista;
	while(aux != NULL){
		mostrar_lista(aux->lista);
		aux = aux->sig;
	}
}
void agregarLista(){
	Listas *nuevo = new Listas;
	int sigue = 1,sigue2=1,sigue3=1;
	
	primero = NULL;
	ultimo = NULL;

		cout << endl << "OPCIONES";
		cout << endl << "1-. Agregar inicio";
		cout << endl << "2-. Agregar final";
		cout << endl << "3-. Agregar en otra posicion";
		cout << endl << "4-. Salir del menu"<<endl;
	while(sigue == 1 ){
		int op=0;
		op=validaEntero("Escribe tu opcion: ");
		switch(op){
			case 1: 
				agregarInicio();
			break;
			case 2: 
				agregarFinal();
			break;
			case 3: 
				agregarPosicion();
			break;
			case 4: 
				cout << "Finalizacion de modificacion de lista"<<endl;
				sigue=2;
			break;
		}
		sigue = validaEntero("\n\nTeclea 1 para agregar otro: ");
	}
	sigue=1;
	sigue2 = validaEntero("Teclea 1 para eliminar nodo: ");
	if(sigue2==1){
		cout << endl << "OPCIONES";
		cout << endl << "1-. Eliminar inicio";
		cout << endl << "2-. Eliminar final";
		cout << endl << "3-. Eliminar en otra posicion";
		cout << endl << "4-. Eliminar por ID";
		cout << endl << "5-. Salir del menu"<<endl;
		while(sigue == 1 ){
			int op=0;
			op=validaEntero("Escribe tu opcion: ");
			switch(op){
				case 1: 
					borrarPrimero();
					mostrar_lista(primero);
				break;
				case 2: 
					borrarUltimo();
					mostrar_lista(primero);
				break;
				case 3: 
					borrarPosicion();
					mostrar_lista(primero);
				break;
				case 4:
					borrarID();
					mostrar_lista(primero);
				break;
				case 5: 
					cout << "Finalizacion de modificacion de lista"<<endl;
					sigue=2;
				break;
			}
			sigue = validaEntero("\n\nTeclea 1 para seguir borrando: ");
		}
	}
	sigue=1;
	//Empleado *mod->idEmpleado;
	do{
		sigue3 = validaEntero("Teclea 1 para actualizar nodo por ID: ");
		if(sigue3==1){
			modificarId(mod->idEmpleado);
		}
		sigue = validaEntero("Teclea 1 para seguir actualizando: ");
	}while(sigue=1);
	
	cout<<endl<<"Lista ordenada: "<<endl;
	ordenaSeleccion(primero);
	
	nuevo->sig = NULL;
	nuevo->lista = primero;
	if(primLista == NULL){
		primLista = nuevo;
		ultLista = nuevo;
	}else{
		ultLista->sig=nuevo;
		ultLista = nuevo;
	}
}

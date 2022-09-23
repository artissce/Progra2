Empleado *registro(){//ya esta
	Empleado *nuevo = new Empleado;
	bool bandera = true;
	
	while(bandera){
		nuevo->idEmpleado = validaEntero("\nidEmpleado: ");
		if(unico != 0){
			struct Empleado *auxiliar = primero;
			while(auxiliar!=NULL){
				if(nuevo->idEmpleado != auxiliar->idEmpleado){
					auxiliar = auxiliar->sig;
					bandera = false;
				}else{
					cout<<"El ID ya existe"<<endl;
					bandera = true;
					break;
				}
			}
		}else{
			bandera=false;
		}
	}
	cout << "Nombre: ";
	//cin >> nuevo->nombre;
	getline(cin,nuevo->nombre);
	cout << "Puesto: ";
	//cin >> nuevo->puesto;
	getline(cin,nuevo->puesto);
	nuevo->salario = validaFlotante("Salario: ");
	nuevo->sig = NULL;
	unico=1;
	bandera=true;
	return nuevo;
}

void agregarFinal(){//listo
	Empleado *nuevo = registro();
	if(primero == NULL){
		primero = nuevo;
		ultimo = nuevo;
	}else{
		ultimo -> sig = nuevo;
		ultimo = nuevo;
	}
}
void agregarInicio(){//listo
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
void agregarPosicion(){//listo
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

void borrarPrimero(Empleado *primero){//checar
	Empleado *tem = primero;
	primero = primero->sig;
	free(tem);
}
void borrarUltimo(Empleado *primero){//checar
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
void borrarPosicion(Empleado *primero){//checar
	Empleado *actual = primero, *previo, *aux;
	bool bandera=true;
	int pos = 0, i = 1;
	pos = validaEntero("Posición: ");
	pos=pos+1;
	previo=actual;
	if(pos==1){
		borrarPrimero(primero);
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
			borrarUltimo(primero);
		}
	}
	getchar();
}
void borrarID(Empleado *nLista){//CHECAR
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
			while(actual != NULL && actual->idEmpleado != id){ 
				previo=actual;
				actual=actual->sig;
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
}
void actualizarDato(Empleado *primero){//CHECAR
	Empleado *actual = new Empleado;
	int s = 0, m = 0, id = 0;
	cout<<endl<<endl;
	s = validaEntero("Desea modificar alg?n dato? 1..SI, otro..NO: ");
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
					m = validaEntero("?Que desea modificar, 1..PUESTO, otro..SALARIO: ");
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

void ordenaSeleccion(Empleado *primero){//listo
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

void mostrar_lista(Empleado *primero){//Listo?
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

void mostrarListas(){//listo?
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
	int sigue = 1,sigue2=1,opc=0,op=0;
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
		sigue = validaEntero("Teclea 1 para agregar otro: ");
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
					borrarPrimero(primero);
					mostrar_lista(primero);
				break;
				case 2: 
					borrarUltimo(primero);
					mostrar_lista(primero);
				break;
				case 3: 
					borrarPosicion(primero);
					mostrar_lista(primero);
				break;
				case 4:
					borrarID(primero);
					mostrar_lista(primero);
				break;
				case 5: 
					cout << "Finalizacion de modificacion de lista"<<endl;
					sigue=2;
				break;
			}
			sigue = validaEntero("Teclea 1 para seguir borrando: ");
		}
	}
	ordenaSeleccion(primero);
	mostrar_lista(primero);
	sigue=1;
	opc = validaEntero("Desea borrar alg?n NODO?  1..SI, otro..NO: ");
	if(opc==1){
		while(sigue==1){
			borrarPosicion(primero);
			sigue=validaEntero("Teclea 1 para borrar otro: ");
		}
	}

	mostrar_lista(primero);
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
void buscarLista(){
	Empleado *nLista = primero;
	int cont, lista, sigue;
	cout<<endl<<endl;
	sigue = validaEntero("Desea modificar alguna lista? 1..SI, otro..NO:  ");
	while(sigue==1){
		struct Listas *aux = primLista; 
		bool bandera=false;
		cont=0;
		cout<<endl<<endl;
		lista = validaEntero("Que lista desea modificar: ");
		while(aux != NULL){
			cont++;
			if(cont == lista){
				nLista = aux->lista;
				bandera=true;
			}
			aux = aux->sig;
		}
		if(bandera==true){
			mostrar_lista(nLista); //no es necesario most
			borrarPrimero(nLista);
			mostrar_lista(nLista);
			
			borrarUltimo(nLista);
			mostrar_lista(nLista);
			
			borrarPosicion(nLista);  //primero
			mostrar_lista(nLista);
			
			borrarPosicion(nLista);  //ultimo
			mostrar_lista(nLista);
			
			borrarPosicion(nLista);  //interno
			mostrar_lista(nLista);
			
			borrarID(nLista);  //primer
			mostrar_lista(nLista);
			
			borrarID(nLista);  //ultimo
			mostrar_lista(nLista);
			
			borrarID(nLista);  //interno
			mostrar_lista(nLista);
			
			actualizarDato(nLista);
			mostrar_lista(nLista);
		}else{
			cout<<endl<<"Esa lista no existe";
		}
		cout<<endl;
		sigue = validaEntero("Desea modificar otra lista? 1..SI, otro..NO: ");
	}
}
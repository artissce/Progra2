Empleado *registro(){
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
void mostrar_lista(Empleado *primero){  //quitar el argumento en el proyecto de lista, tambien modificar para actualizar los datos
	struct Empleado *auxiliar = primero; //Saber por donde empezaremos asignando el valor del apuntador primero al apuntador auxiliar 
	cout << endl << endl;
	cout << "Mostrando la lista completa" << endl;
	cout << "Ubicaci?n" << setw(10);
	cout << "IdEmpleado" << setw(10);
	cout << "Nombre" << setw(10);
	cout << "Puesto" << setw(10);
	cout << "Salario" << setw(10);
	cout << "Siguiente" << endl;
	while(auxiliar != NULL){
		cout << auxiliar << setw(10);
		cout << auxiliar->idEmpleado << setw(10);
		cout << auxiliar->nombre << setw(10);
		cout << auxiliar->puesto << setw(10);
		cout << auxiliar->salario << setw(10);
		cout << auxiliar->sig << endl; // No es necesario escribir esto en los c?digos, pero es importante comprender que se est? guardando la memoria del siguiente nodo dentro de las listas generadas a lo largo de nuestro c?digo y la creaci?n de nodos en el ejercicio
		ultimo = auxiliar;
		auxiliar = auxiliar->sig;
	}
	cout << endl << "PRIMER NODO: " << primero;
	cout << endl << "ULTIMO NODO: " << ultimo;
}
void actualizarDato(Empleado *primero){
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

void agregarInicio(){ //ya funciona
	Empleado *nuevo = registro();
	if(primero == NULL){
		primero = nuevo;
		ultimo = nuevo;
	}else{
		nuevo->sig = primero;
		primero = nuevo;
	}
}
void agregarPosicion(){ //ya funciona
	Empleado *aux = primero;
	bool bandera=true;
	int pos = 0;
	int i = 1;
	pos = validaEntero("Posicion: ");
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
			cout<<"La posici?n NO existe, el nodo se agrega al final de la lista"<<endl;
		}
	}
	getchar();
}
void borrarPrimero(Empleado *primero){
	Empleado *tem = primero;
	primero = primero->sig;
	free(tem);
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
}

void eliminarPosicion(Empleado *primero){ //agregar para que funcione en listas de listas
	Empleado *actual, *previo;
	int pos = 0;
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

void mostrarListas(){
	system("cls");
	struct Listas *aux = primLista; //Saber por donde empezaremos asignando el valor del apuntador primero al apuntador auxiliar 
	cout << "Ubicacion Lista" << setw(20);
	cout << "Lista (primer nodo)" << setw(20);
	cout << "Siguiente" << endl;
	
	while(aux != NULL){
		cout << aux << setw(20);
		cout << aux->lista << setw(20);
		cout << aux->sig << endl; // No es necesario escribir esto en los c?digos, pero es importante comprender que se est? guardando la memoria del siguiente nodo dentro de las listas generadas a lo largo de nuestro c?digo y la creaci?n de nodos en el ejercicio
		aux = aux->sig;
	}
	cout << endl << "PRIMER LISTA: " << primLista;
	cout << endl << "ULTIMA LISTA: " << ultLista;
	
	aux = primLista;
	while(aux != NULL){
		mostrar_lista(aux->lista); //no es necesario most
		aux = aux->sig;
	}
}
void agregarLista(){
	Listas *nuevo = new Listas;
	int sigue = 1, opc=0, op=0;
	
	primero = NULL;
	ultimo = NULL;
	
	/*while(sigue == 1 ){
		agregarInicio();
		agregarFinal();
		agregarPosicion();
		cout<<endl<<endl;
		sigue = validaEntero("Teclea 1 para agregar otro: ");
	}
	mostrar_lista(primero);
	ordenaSeleccion(primero);
	archivoEscritura(primero);*/
	//cout<<endl<<"Mostrando Lista Ordenada"<<endl;
	ordenaSeleccion(primero);
	mostrar_lista(primero);
	sigue=1;
	opc = validaEntero("Desea borrar alg?n NODO?  1..SI, otro..NO: ");
	if(opc==1){
		while(sigue==1){
			eliminarPosicion(primero);
			sigue=validaEntero("Teclea 1 para borrar otro: ");
		}
	}
	primero = archivoLectura();
	mostrar_lista(primero);
	borrarUltimo(primero);
	ordenaSeleccion(primero);
	mostrar_lista(primero);
	archivoEscritura(primero);
	
	nuevo->sig = NULL;
	nuevo->lista = primero;
	
	//agregar las funciones
	
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
			
			eliminarPosicion(nLista);  //primero
			mostrar_lista(nLista);
			
			eliminarPosicion(nLista);  //ultimo
			mostrar_lista(nLista);
			
			eliminarPosicion(nLista);  //interno
			mostrar_lista(nLista);
			
			borrarId(nLista);  //primer
			mostrar_lista(nLista);
			
			borrarId(nLista);  //ultimo
			mostrar_lista(nLista);
			
			borrarId(nLista);  //interno
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


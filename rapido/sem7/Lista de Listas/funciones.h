Empleado *registro(){
	Empleado *nuevo=new Empleado;
	nuevo->idEmpleado=validaid("id Empleado: ");
	cout<<"Nombre: ";
	fflush(stdin);
	getline(cin,nuevo->nombre);
	//cin>>nuevo->nambre;
	cout<<"Puesto: ";
	fflush(stdin);
	getline(cin, nuevo->puesto);
	//cin>>nuevo->puesto;
	nuevo->salario=validaFlotante("Salario: ");
	nuevo->sig=NULL;
	return nuevo;
}
void actualizarDato(Empleado *primero){
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
			//ofstream archivo("nodos.xls");
			while(auxiliar!=NULL){
				if(id != auxiliar->idEmpleado){
					auxiliar = auxiliar->sig;
					bandera = false;
				}else{
					bandera = true;
					m = validaEntero("Que desea modificar, 1..PUESTO, otro..SALARIO: ");
					if(m==1){
						cout<<"Modifica el nuevo puesto: ";
						cin>>auxiliar->puesto;
					}else{
						auxiliar->salario = validaFlotante("Nuevo salario: ");
					}
					break;
				}
			}//archivo.close();
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

void agregarFinal(){ //ya funciona
	Empleado *nuevo = registro();
	if(primero == NULL){
		primero = nuevo;
		ultimo = nuevo;
	}else{
		ultimo->sig = nuevo;
		ultimo = nuevo;
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
			cout<<"La posicion NO existe, el nodo se agrega al final de la lista"<<endl;
		}
	}
	getchar();
}

void mostrar_lista(Empleado *primero){  //quitar el argumento en el proyecto de lista, tambien modificar para actualizar los datos
	struct Empleado *auxiliar = primero; //Saber por donde empezaremos asignando el valor del apuntador primero al apuntador auxiliar 
	cout << endl << endl;
	cout << "Mostrando la lista completa" << endl;
	cout << "Ubicacion" << setw(10);
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
		cout << auxiliar->sig << endl; // No es necesario escribir esto en los c�digos, pero es importante comprender que se est� guardando la memoria del siguiente nodo dentro de las listas generadas a lo largo de nuestro c�digo y la creaci�n de nodos en el ejercicio
		ultimo = auxiliar;
		auxiliar = auxiliar->sig;
	}
	cout << endl << "PRIMER NODO: " << primero;
	cout << endl << "ULTIMO NODO: " << ultimo;
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
		cout << aux->sig << endl; // No es necesario escribir esto en los c�digos, pero es importante comprender que se est� guardando la memoria del siguiente nodo dentro de las listas generadas a lo largo de nuestro c�digo y la creaci�n de nodos en el ejercicio
		aux = aux->sig;
	}
	cout << endl << "PRIMER LISTA: " << primLista;
	cout << endl << "ULTIMA LISTA: " << ultLista;
	
	aux = primLista;
	while(aux != NULL){
		ordenaSeleccion(aux->lista);
		mostrar_lista(aux->lista); //no es necesario mostrar la lista
		aux = aux->sig;
	}
}

void agregarLista(){
	Listas *nuevo = new Listas;
	cout<<"Agregando lista a la LISTA"<<endl;
	nuevo->idLista=validaEntero("id de la lista: ");
	int sigue=1, bornod=0, borid=0;
	
	primero=NULL;
	ultimo=NULL;
	
	primero = archivoLectura(nuevo->idLista);
	while(sigue==1){
		agregarInicio();
		mostrar_lista(primero);
		sigue = validaEntero("\nTecla 1 para agregar otro: ");
	}
	
//	agregarFinal();
	ordenaSeleccion(primero);
	mostrar_lista(primero);
	archivoEscritura(primero,nuevo->idLista);

	nuevo->sig = NULL;
	nuevo->lista = primero;
	
	if(primLista==NULL){
		primLista=nuevo;
		ultLista=nuevo;
	}else{
		ultLista->sig=nuevo;
		ultLista=nuevo;	
	}
	
}
void buscarLista(){
	int cont, lista, sigue;
	cout<<endl<<endl;
	sigue = validaEntero("Desea modificar alguna lista? 1..SI, otro..NO:  ");
	while(sigue==1){
		struct Listas *aux = primLista;
		Empleado *nLista = primero; 
		Empleado *guardar;
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
			guardar = primero->sig;
			borrarPrimero(nLista);
			nLista = guardar;
			guardar = primero->sig;
			mostrar_lista(nLista);
			
			borrarUltimo(nLista);
			mostrar_lista(nLista);
			
			int pos = 0;
			eliminarPosicion(nLista,pos);  //primero
			if(pos==1){
				nLista = guardar;
				guardar = primero->sig;
			}
			mostrar_lista(nLista);
			
			pos = 0;
			eliminarPosicion(nLista,pos);  //ultimo
			if(pos==1){
				nLista = guardar;
				guardar = primero->sig;
			}
			mostrar_lista(nLista);
			
			pos = 0;
			eliminarPosicion(nLista,pos);  //interno
			if(pos==1){
				nLista = guardar;
				guardar = primero->sig;
			}
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
		archivoEscritura(primero,aux->idLista);
	}
}

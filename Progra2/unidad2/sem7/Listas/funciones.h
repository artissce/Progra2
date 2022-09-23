Empleado *registro(){
	Empleado *nuevo = new Empleado; //se puede omitir el struct
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
	cout<<"Nombre: ";
	cin>>nuevo->nombre;
	cout<<"Puesto: ";
	cin>>nuevo->puesto;
	nuevo->salario = validaFlotante("Salario: ");
	nuevo->sig=NULL;
	unico=1;
	return nuevo;
}
/*void createFile(){
	Empleado *actual = new Empleado;//variable para irnos moviendo
	//LUGARES
	FILE *datos;
	datos = fopen( "listas.txt", "r" );
	fseek( datos, 0, SEEK_END );
	if (ftell( datos ) == 0 ){
	  datos=registro();
	}
	if(!(arch=fopen("listas.txt", "w"))){//problemas con el archivo
		printf("ERROR - no se ha podido crear el archivo listas.txt ");
		exit(1);
	}//n = tamano de listas
	if(arch=fopen("listas.txt","w")==0){
		
	}
	struct Empleado *auxiliar = primero;//saber el inicio de la lista
	while(auxiliar!=NULL){
		fprintf(arch, "%d\t", actual->idEmpleado);
		fprintf(arch, "%s\t", actual->nombre);
		fprintf(arch, "%s\t", actual->puesto);
		fprintf(arch, "%f\t", actual->salario);
		actual->sig=NULL;
	}
	fclose(arch);
	return actual;
}*/
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
	Empleado *actual, *previo;
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

void mostrar_lista(Empleado *primero){
	struct Empleado *auxiliar = primero;
	system("cls");
	cout<<endl;
	cout<<"Mostrando la lista completa"<<endl;
	cout<<"Ubicaci�n"<<setw(10);
	cout<<"idEmpleado"<<setw(10);
	cout<<"Nombre"<<setw(10);
	cout<<"Puesto"<<setw(10);
	cout<<"Salario"<<setw(10);
	cout<<"Siguiente"<<endl;
	while(auxiliar!=NULL){
//	while(auxiliar!=0){	
		cout<<auxiliar<<setw(10);
		cout<<auxiliar->idEmpleado<<setw(10);
		cout<<auxiliar->nombre<<setw(10);
		cout<<auxiliar->puesto<<setw(10);
		cout<<auxiliar->salario<<setw(10);
		//No es necesario, es importante para comprender que se guarda la memoria del siguiente nodo (referencia a la siguiente l�nea)
		cout<<auxiliar->sig<<endl;
		auxiliar = auxiliar->sig;
	}
	
	cout<<endl<<"Primer NODO: "<<primero;
	cout<<endl<<"�ltimo NODO: "<<ultimo;
}

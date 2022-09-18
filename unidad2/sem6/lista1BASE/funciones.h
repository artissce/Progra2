Empleado registro(){
	struct Empleado nuevo;
	nuevo.idEmpleado = validaEntero("idEmpleado: ");
	cout<<"Nombre: ";
	cin>>nuevo.nombre;
	cout<<"Puesto: ";
	cin>>nuevo.puesto;
	nuevo.salario = validaFlotante("Salario: ");
	nuevo.sig=NULL;
	return nuevo;
}

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
	cout<<endl<<"Ultimo nodo: "<<ultimo;
	
}

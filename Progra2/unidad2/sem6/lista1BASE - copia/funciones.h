Empleado *registro(){
	Empleado *nuevo = new Empleado;
	nuevo->idEmpleado = validaEntero("Ingresa el id del empleado: ");
	cout << "Nombre: ";
	cin >> nuevo->nombre;
	cout << "Puesto: ";
	cin >> nuevo->puesto;
	nuevo->salario = validaFlotante("Salario: ");
	nuevo->sig = NULL;
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
		auxiliar = auxiliar->sig;
	}
	cout << endl << "PRIMER NODO: " << primero;
	cout << endl << "ULTIMO NODO: " << ultimo;
}

void mostrarListas(){
	system("cls");
	
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
	int sigue = 1;
	
	primero = NULL;
	ultimo = NULL;
	while(sigue == 1 ){
		agregarInicio();
		sigue = validaEntero("Teclea 1 para agregar otro: ");
	}
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

void archivoEscritura(Empleado *primero){
	Empleado *aux=primero;
	ofstream archivo("nodos.xls");
	while(aux!=NULL){
		archivo<<aux->idEmpleado<<"\t";
		archivo<<aux->nombre<<"\t";
		archivo<<aux->puesto<<"\t";
		archivo<<aux->salario<<endl;
		ultimo=aux;
		aux=aux->sig;
	}
	archivo.close();
}
Empleado *archivoLectura(){
	Empleado *primero=NULL;
	Empleado *ultimo=NULL;
	Empleado *nuevo=NULL;
	Empleado nodo;

	ifstream arch("nodos.xls");
	string linea, c;

	if(arch.fail()) cerr<<"Error al abrir el archivo"<<endl;
	else{
		while(getline(arch,linea)){
			nuevo = new Empleado;
			stringstream lee(linea);

			lee>>nuevo->idEmpleado;
			getline(lee,c,'t');
			getline(lee,nuevo->nombre,'t');
			getline(lee,nuevo->puesto,'t');
			lee>>nuevo->salario;
			getline(lee,c,'n');

			nuevo->sig=NULL;
			if(primero==NULL){
				primero = nuevo;
				ultimo=nuevo;
			}else{
				ultimo->sig=nuevo;
				ultimo=nuevo;
			}
		}
	}
	arch.close();
	return primero;
}

Empleado *registro(){
	Empleado *nuevo = new Empleado;
	nuevo->idEmpleado= validaEntero("idEmpleado: ");
	cout<<"Nombre: ";
	getline(cin,nuevo->nombre);
	cout<<"Puesto: ";
	getline(cin, nuevo->puesto);
	nuevo->salario = validaFlotante("Salario: ");
	nuevo->sig=NULL;
	return nuevo;
}
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
void archivoEscritura(Empleado *primero){
	Empleado *aux = primero;
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
	
	ifstream archivo("nodos.xls");
	string linea,c;
	
	if(arch.fail()) cerr<<"Error al abrir el archivo"<<endl;
	else{
		while(getline(arch,linea)){
			nuevo = new Empleado;
			stringstream lee(linea);
			
			lee>>nuevo->idEmpleado;
			getline(lee,c,'\t');
			getline(lee,nuevo->nombre,'\t');
			getline(lee,nuevo->puesto,'\t');
			lee>>nuevo->salario;
			getline(lee,c,'\n');
			
			nuevo->sig=NULL;
			if(primero==NULL){
				primero=nuevo;
				ultimo=nuevo;
			}else{
				ultimo->sig=nuevo;
				ultimo=nuevo;
			}
		}
	}
}
/*
void createFile(){
	Empleado *actual = new Empleado;//variable para irnos moviendo
	//LUGARES
	FILE *datos;
	if(!(arch=fopen("listas.txt", "w"))){//problemas con el archivo
		printf("ERROR - no se ha podido crear el archivo listas.txt ");
		exit(1);
	}//n = tamano de listas
	datos = fopen( "listas.txt", "r" );
	fseek( datos, 0, SEEK_END );
	if (ftell( datos ) == 0 ){
	  datos=registro();
	}
	else{
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
	}
}*/

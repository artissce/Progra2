//listitas
void archivoEscritura(Empleado *primero,int id){
	Empleado *aux=primero;
	char arch[20];
	itoa(id,arch,10);//CONVERTIR UN ENTERO EN CADENA - lo que esta en id se pone en la variable arch
	strcat(arch,".txt");//concateno
	ofstream archivo(arch);//creame este archivo
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
Empleado *archivoLectura(int id){
	Empleado *primero=NULL;
	Empleado *ultimo=NULL;
	Empleado *nuevo=NULL;
	//Empleado nodo;
	char archivo[20];
	itoa(id,archivo,10);//CONVERTIR UN ENTERO EN CADENA - lo que esta en id se pone en la variable arch
	strcat(archivo,".txt");//concateno

	ifstream arch(archivo);
	string linea, c;

	//muestra las listitas
	cout<<id<<endl;
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

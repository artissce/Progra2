void escrituraLista(){
	Listas *aux = primLista;
	ofstream archivo("ListaDeListas.txt");
	while(aux!=NULL){
		archivo<<aux->idLista<<endl;
		aux=aux->sig;
	}
	archivo.close();
}

void lecturaLista(){
	Listas *nuevo=NULL;
	
	ifstream arch("ListaDeListas.txt");
	string linea, c;
	
	if(arch.fail()) cerr<<"No se encuentra ninguna lista"<<endl;
	else{
		while(getline(arch, linea)){
			nuevo=new Listas;
			stringstream lee(linea);//sacar informacion del archivo
			
			lee>>nuevo->idLista;
			getline(lee,c,'\n');
			
			nuevo->lista=archivoLectura(nuevo->idLista);
			
			nuevo->sig=NULL;
			
			if(primLista==NULL){
				primLista=nuevo;
				ultLista=nuevo;
			}
			else{
				ultLista->sig=nuevo;
				ultLista=nuevo;
			}
		}
	}
	arch.close();	
}

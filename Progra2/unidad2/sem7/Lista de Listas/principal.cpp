#include "libreria.h"
//Sa�l Cervantes Candia - 177927
//Programaci�n 2
//Hora clase 09:00 - 10:00 am
//Grupo T13B
//Lista de listas
int main(){
	//setlocale(LC_CTYPE, "Spanish");
	SetConsoleCP(1252); //STDIN codificaci�n de windows 1252
	SetConsoleOutputCP(1252); //STDOUT
	int sigue = 1;
	
	primLista = NULL;
	ultLista = NULL;
	
	while(sigue==1){
		agregarLista();
		cout<<endl<<endl;
		sigue = validaEntero("Teclea 1 para agregar otra lista: ");
		//ofstream archivo("nodos.txt");
		unico = 0;
	}
	mostrarListas();
	buscarLista();
	//archivoEscritura(primero);
	
	return 0;
}

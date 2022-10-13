#include "libreria.h"
//Saul Cervantes Candia - 177927 Ana Karen Cuenca Esquivel - 177932
//Programacion 2
//Grupo T13B
//Lista de listas
int main(){
	//setlocale(LC_CTYPE, "Spanish");
	SetConsoleCP(1252); //STDIN codificaci�n de windows 1252
	SetConsoleOutputCP(1252); //STDOUT
	int sigue = 1;
	
	primLista = NULL;
	ultLista = NULL;
	lecturaLista();
	getchar();
	
	//mostrarListas();
	while(sigue==1){
		agregarLista();
		cout<<endl<<endl;
		sigue = validaEntero("Teclea 1 para agregar otra lista: ");
		unico = 0;
	}
	escrituraLista();
	mostrarListas();
	//buscarLista();
	return 0;
}
/**/

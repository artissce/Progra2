#include "libreria.h"
/*Listas de listas
Ana Karen Cuenca Esquivel -177932
*/
int main(){
	SetConsoleCP(1252); 
	SetConsoleOutputCP(1252);
	int sigue = 1;
	
	primLista = NULL;
	ultLista = NULL;
	
	while(sigue==1){
		agregarLista();
		sigue = validaEntero("Teclea 1 para agregar otra lista: ");
	}
	mostrarListas();
	
	return 0;
}

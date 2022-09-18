#include "libreria.h"

int main(){
	SetConsoleCP(1252);
	SetConsoleOutputCP(1252);
	int sigue =1;
	primero=NULL;
	ultimo=NULL;
	
	while(sigue==1){
		agregar_elemento();
		sigue = validaEntero("Tecle 1 para agregar otro: ");
	}
	
	mostrar_lista();
	
	return 0;
}

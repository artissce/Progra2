#include "libreria.h"

int main(){
	SetConsoleCP(1252);
	SetConsoleOutputCP(1252);
	int sigue =1;
	primero=NULL;
	ultimo=NULL;
	
	while(sigue==1){
		agregarInicio();
		//agregarFinal();
		//agregarPosicion();
		//agregar_elemento();
		sigue = validaEntero("Tecle 1 para agregar otro: ");
	}
	
	mostrar_lista();
	
	borrarPrimero();
	mostrar_lista();
	
	borrarUltimo();
	mostrar_lista();
	
	borrarPosicion();
	mostrar_lista();
	
	borrarPosicion();
	mostrar_lista();
	
	borrarPosicion();
	mostrar_lista();
	
	borrarID();
	mostrar_lista();
	
	borrarID();
	mostrar_lista();
	
	borrarID();
	mostrar_lista();
	
	borrarID();
	mostrar_lista();	
	//modifica();
	//mostrar_lista();
	
	
	return 0;
}

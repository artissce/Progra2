#include "libreria.h"
//Ana Karen Cuenca Esquivel -177932
//Programación 2 - Grupo T13B LISTAS SIMPLES
int main(){
	SetConsoleCP(1252);
	SetConsoleOutputCP(1252);
	int sigue = 1;
	primero = NULL;
	ultimo = NULL;
	
	while(sigue==1){
		agregarInicio();
		//agregar_elemento();
		sigue = validaEntero("Teclea 1 para agregar otro: ");
	}
	mostrar_lista(primero);
	
	borrarPrimero();
	mostrar_lista(primero);
	
	borrarUltimo();
	mostrar_lista(primero);
	
	eliminarPosicion();  //primero
	mostrar_lista(primero);
	
	eliminarPosicion();  //ultimo
	mostrar_lista(primero);
	
	eliminarPosicion();  //interno
	mostrar_lista(primero);
	
	borrarId();  //primer
	mostrar_lista(primero);
	
	borrarId();  //ultimo
	mostrar_lista(primero);
	
	borrarId();  //interno
	mostrar_lista(primero);
	
	actualizarDato();
	mostrar_lista(primero);
	return 0;
}

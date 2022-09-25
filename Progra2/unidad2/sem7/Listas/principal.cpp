#include "libreria.h"
//Ana Karen Cuenca Esquivel -177932
//Programación 2 - Grupo T13B LISTAS SIMPLES
int main(){
	SetConsoleCP(1252);
	SetConsoleOutputCP(1252);
	int sigue = 1;
	primero = NULL;
	ultimo = NULL;
	
	primero=archivoLectura();
	while(sigue==1){
		agregarInicio();
		//agregar_elemento();
		sigue = validaEntero("Teclea 1 para agregar otro: ");
	}
	ordenaSeleccion(primero);
	mostrar_lista(primero);
	archivoEscritura(primero);
	
	mostrar_lista(primero);
	borrarPrimero();
	mostrar_lista(primero);
	borrarUltimo();
	mostrar_lista(primero);
	eliminarPosicion();  
	mostrar_lista(primero);
	eliminarPosicion();  
	mostrar_lista(primero);
	eliminarPosicion(); 
	mostrar_lista(primero);
	borrarId(); 
	mostrar_lista(primero);
	borrarId();  
	mostrar_lista(primero);
	borrarId();
	mostrar_lista(primero);
	actualizarDato();
	mostrar_lista(primero);
	return 0;
}

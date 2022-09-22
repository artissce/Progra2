#include "libreria.h"
//Saúl Cervantes Candia - 177927
//Programación 2
//Hora clase 09:00 - 10:00 am
//Grupo T13B
//Listas
int main(){
	//setlocale(LC_CTYPE, "Spanish");
	SetConsoleCP(1252); //STDIN codificación de windows 1252
	SetConsoleOutputCP(1252); //STDOUT
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

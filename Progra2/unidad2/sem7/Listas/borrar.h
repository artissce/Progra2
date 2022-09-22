void borrarPrimero(){
	Empleado *tem = primero;
	primero = primero->sig;
	free(tem);
	getchar();
}
void borrarUltimo(){
	Empleado *actual, *previo;
	actual = primero;
	while(actual != ultimo){
		previo = actual;
		actual = actual->sig;
	}
	previo->sig = NULL;
	ultimo = previo;
	free(actual);
	getchar();
}

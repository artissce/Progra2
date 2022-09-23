void borrarPrimero(Empleado *primero){
	Empleado *tem = primero;
	primero = primero->sig;
	free(tem);
}
void borrarUltimo(Empleado *primero){
	Empleado *actual, *previo;
	actual = primero;
	while(actual != ultimo){
		previo = actual;
		actual = actual->sig;
	}
	previo->sig = NULL;
	ultimo = previo;
	free(actual);
}


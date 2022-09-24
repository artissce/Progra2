void borrarPrimero(Empleado *primero){
	Empleado *tem = primero;
	primero = primero->sig;
	//cout<<endl<<endl<<primero<<setw(20)<<primero->sig<<endl;
	free(tem);
	getchar();
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
	actual = primero;
	getchar();
}

void ordenaSeleccion(Empleado *primero){
	Empleado *aux = primero;
	Empleado *actual,*min;
	Empleado *pivote1 = new Empleado;
	Empleado *pivote2 = new Empleado;
	cout<<endl<<endl<<"LISTA ORDENADA"<<endl;
	while(aux !=NULL){
		min = aux;
		actual = aux->sig;
		while(actual != NULL){
			if(min->idEmpleado > actual->idEmpleado){
				min = actual;
			}
			actual = actual->sig;
		}
		pivote1->idEmpleado = aux->idEmpleado;
		pivote1->nombre = aux->nombre;
		pivote1->puesto = aux->puesto;
		pivote1->salario = aux->salario;
		
		pivote2->idEmpleado = min->idEmpleado;
		pivote2->nombre = min->nombre;
		pivote2->puesto = min->puesto;
		pivote2->salario = min->salario;
		
		min->idEmpleado = pivote1->idEmpleado;
		min->nombre = pivote1->nombre;
		min->puesto = pivote1->puesto;
		min->salario = pivote1->salario;
		
		aux->idEmpleado = pivote2->idEmpleado;
		aux->nombre = pivote2->nombre;
		aux->puesto = pivote2->puesto;
		aux->salario = pivote2->salario;
		
		aux = aux->sig;
	}
}

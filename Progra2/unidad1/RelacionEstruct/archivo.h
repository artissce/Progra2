void recibe(Relacion **info, int n){
	for(int i=0; i<n; i++){
		//dato[i]->matricula=validaEntero("Matrciula: "); SI FUERA ESTATICO, USAMOS PUNTO dato[i].matricula=validaEntero("Matrciula: ");
		//(*datos[i]).matricula=validaEntero("Matricula: ");
		(*(info+i))->empr.idEmpresa=validaEntero("Id de la empresa: ");
		validaCadena("Razon social de la empresa: ", (*(info+i))->empr.razonSocial);
		
		(*(info+i))->depto.idDepto=validaEntero("Id del departamento: ");
		(*(info+i))->depto.idDepto=validaEntero("Numero de integrantes: ");
		validaCadena("Nommbre del departamento: ", (*(info+i))->depto.nomDepto);
		validaCadena("Proyecto asigando: ", (*(info+i))->depto.asig);
		
		
		validaCadena("Nommbre del empleado: ", (*(info+i))->emp.nombre);
		(*(info+i))->emp.idEmpleado=validaEntero("Id del empleado: ");
		(*(info+i))->emp.sueldo=validaFlotante("Sueldo: ");
		
	}
}

void imprime(Relacion **info, int n){
	for(int i=0; i<n; i++){
		printf("%d\t", (*(info+i))->empr.idEmpresa);
		printf("%s\t", (*(info+i))->empr.razonSocial);
		
		printf("%d\t", (*(info+i))->depto.idDepto);
		printf("%d\t", (*(info+i))->depto.cant);
		printf("%s\t", (*(info+i))->depto.nomDepto);
		printf("%s\t", (*(info+i))->depto.asig);
		
		printf("%s\t", (*(info+i))->emp.nombre);
		printf("%d\t", (*(info+i))->emp.idEmpleado);
		printf("%f\t", (*(info+i))->emp.sueldo);
	}
}

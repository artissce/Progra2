void registro(Personal **dato,Catalogo **info, Venta **sell){
	for(int i=0; i<f; i++){
		c=validaEntero("No. de empleados: ");
		*(dato + i) = (Personal *)malloc(c*sizeof(Personal));
		tam[i]=c;
		for(int j=0; j<c; j++){
			/*(*(sell+i)+j)->idVenta=validaEntero("Id de la venta: ");
			(*(sell+i)+j)->idEmpleado=validaEntero("Id del empleado: ");
			(*(sell+i)+j)->idModelo=validaEntero("Id del modelo: ");
			*/
			(*(dato+i)+j)->idEmpleado=validaEntero("Id del empleado: ");
			validaCadena("Nombre:  ", (*(dato+i)+j)->nombre);
			validaCadena("Apellidos:  ", (*(dato+i)+j)->apellidos);
			validaCadena("Correo:  ", (*(dato+i)+j)->correo);
			(*(dato+i)+j)->telefono=validaEntero("Telefono: ");
			validaCadena("Direccion:  ", (*(dato+i)+j)->direccion);
			
			(*(sell+i)+j)->idEmpleado=(*(dato+i)+j)->idEmpleado;
		}
		c=validaEntero("No. de modelos: ");
		*(info + i) = (Catalogo *)malloc(c*sizeof(Catalogo));
		tam2[i]=c;
		for(int j=0; j<c; j++){
			(*(info+i)+j)->idModelo=validaEntero("\nId del modelo: ");
			(*(info+i)+j)->precio=validaFlotante("Precio del modelo: ");
			validaCadena("Descripcion del modelo:  ", (*(info+i)+j)->descripcion);
			(*(sell+i)+j)->idModelo=(*(info+i)+j)->idModelo;
		}
	
	}
	system("cls");
}

void imprime(Personal **dato,Catalogo **info, Venta **sell){
	for(int i=0; i<f; i++){	
		c=validaEntero("No. de ventas: ");
		*(sell + i) = (Venta *)malloc(c*sizeof(Venta));
		tam3[i]=c;
		for(int j=0; j<tam3[i]; j++){
			cout<<"Fila ["<<i<<"]["<<j<<"]"<<setw(10)<<"Ubicacion de memoria"<<*(sell+i)+j;
			cout<<setw(10)<<(*(dato+i)+j)->idRelacion;
			cout<<setw(10)<<(*(dato+i)+j)->emp.nombre;
			cout<<setw(10)<<(*(dato+i)+j)->depto.nomDepto;
			cout<<setw(10)<<(*(dato+i)+j)->empr.razonSocial;
			cout<<endl;
		}
		cout<<endl;
	}
}


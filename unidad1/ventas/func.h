//FUNCIONES PARA LLENAR DATOS COMO EMPLEADO, CATALOGO, VENTA
void recibeEmpleado(Personal **dato, int a[]){
	for(int i=0; i<sE;i++){
		a[i]=validaEntero("No. registros empleados ");
		*(dato + i) = (Personal *)malloc(a[i]*sizeof(Personal));
		
		for(int j=0;j<a[i];j++){
			(*(dato+i)+j)->idEmpleado=validaEntero("Id del empleado: ");
			validaCadena("Nombre:  ", (*(dato+i)+j)->nombre);
			validaCadena("Apellidos:  ", (*(dato+i)+j)->apellidos);
			validaCadena("Correo:  ", (*(dato+i)+j)->correo);
			(*(dato+i)+j)->telefono=validaEntero("Telefono: ");
			validaCadena("Direccion:  ", (*(dato+i)+j)->direccion);
		}
		system("cls");
	}
}
void recibeCatalogo(Catalogo **info, int b[]){
	for(int i=0; i<sE;i++){
		b[i]=validaEntero("No. registros catalogo ");
		*(info + i) = (Catalogo *)malloc(b[i]*sizeof(Catalogo));
		for(int j=0;j<b[i];j++){
			(*(info+i)+j)->idModelo=validaEntero("\nId del modelo: ");
			(*(info+i)+j)->precio=validaFlotante("Precio del modelo: ");
			validaCadena("Descripcion del modelo:  ", (*(info+i)+j)->descripcion);
		}
		system("cls");
	}
}
void recibeVenta(Personal **dato,int a[],Catalogo **info, int b[], Venta **sell, int c[]){
		for(int i=0; i<sE;i++){
		c[i]=validaEntero("No. registros venta");
		*(sell + i) = (Venta *)malloc(c[i]*sizeof(Venta));
		//busqueda(dato,a info,b,sell,c);
		for(int j=0; j<c[i]; j++){
			(*(sell+i)+j)->idVenta=validaEntero("Id de la venta: ");
			(*(sell+i)+j)->idEmpleado=validaEntero("Id del empleado: ");
			(*(sell+i)+j)->idModelo=validaEntero("Id del modelo: ");
			
			//(*(sell+i)+j)->idEmpleado=(*(dato+i)+j)->idEmpleado;
			/*if((*(sell+i)+j)->idEmpleado == (*(dato+i)+j)->idEmpleado){
				//cout<<"IdEmpleado"<<setw(10)<<"Nombre"<<setw(10)<<"Apellidos"<<setw(10)<<"Correo"<<setw(10)<<"Telefono"<<setw(10)<<"Direccion";
					(*(sell+i)+j)->idEmpleado = (*(dato+i)+j)->idEmpleado;
			}
			cout<<endl;
			(*(sell+i)+j)->idModelo=validaEntero("Id del modelo: ");
			//(*(info+i)+j)->idModelo=validaEntero("Id del modelo: ");
			if((*(sell+i)+j)->idModelo == (*(info+i)+j)->idModelo){
				(*(sell+i)+j)->idModelo = (*(info+i)+j)->idModelo;
			}
		}*/
	/*	for(int j=0;j<c[i];j++){
			(*(sell+i)+j)->idVenta=validaEntero("id Venta: ");
			(*(sell+i)+j)->idEmpleado=validaEntero("id Empleado: ");
			(*(sell+i)+j)->idModelo=validaEntero("id Modelo: ");
		}*/
		getchar();
		system("cls");
	}
	}
}
//FUNCIONES PARA IMPRIMIR DATOS COMO EMPLEADO, CATALOGO, VENTA
void imprimeEmpleado(Personal **dato, int a[]){
	cout<<setw(10)<<" -EMPLEADOS- "<<endl;
	for(int i=0; i<sE;i++){
		for(int j=0;j<a[i];j++){
			//cout<<"Posicion["<<i<<"]["<<j<<"]";
			cout<<setw(10)<<"["<<i<<"]["<<j<<"]";
			cout<<setw(10)<<(*(dato+i)+j)->idEmpleado;
			cout<<setw(10)<<(*(dato+i)+j)->nombre;
			cout<<setw(10)<<(*(dato+i)+j)->apellidos;
			cout<<setw(10)<<(*(dato+i)+j)->telefono;	
			cout<<setw(10)<<(*(dato+i)+j)->correo;
			cout<<setw(10)<<(*(dato+i)+j)->direccion;
			cout<<endl;
		}
		cout<<endl;
	}
}
void imprimeCatalogo(Catalogo **info, int b[]){
	cout<<setw(10)<<" -CATALOGO- "<<endl;
	for(int i=0; i<sC;i++){
		for(int j=0;j<b[i];j++){
			cout<<setw(10)<<"["<<i<<"]["<<j<<"]";
			//cout<<"Posicion["<<i<<"]["<<j<<"]";
			cout<<setw(10)<<(*(info+i)+j)->idModelo;
			cout<<setw(10)<<(*(info+i)+j)->precio;
			cout<<setw(10)<<(*(info+i)+j)->descripcion;	
			cout<<endl;
		}
		cout<<endl;
	}
}
void imprimeVenta(Personal **dato,int a[],Catalogo **info, int b[], Venta **sell, int c[]){
	int aux[50]={0},num=0;
	bool band=true;
	cout<<setw(10)<<" -VENTAS- "<<endl;
	for(int i=0; i<sV;i++){
		for(int j=0;j<c[i];j++){
			cout<<setw(10)<<"["<<i<<"]["<<j<<"]";
			//cout<<"Posicion["<<i<<"]["<<j<<"]";
			cout<<setw(10)<<(*(sell+i)+j)->idVenta;
			cout<<setw(10)<<(*(sell+i)+j)->idEmpleado;
			cout<<setw(10)<<(*(sell+i)+j)->idModelo;
			//cout<<endl;
			
			/*for(int z=0; z<a[0];z++){
				//printf("%d\t\t",(*(dato+i)+z)->idEmpleado);
				if((*(dato+i)+j)->idEmpleado==(*(sell+i)+z)->idEmpleado){
					printf("%d\t\t",(*(dato+i)+z)->idEmpleado);
					printf("%s\t\t",(*(dato+i)+z)->nombre);
					printf("%s\t\t",(*(dato+i)+z)->apellidos);
					printf("%s\t",(*(dato+i)+z)->correo);
					printf("%s\t",(*(dato+i)+z)->telefono);
					printf("%s\n",(*(dato+i)+z)->direccion);
			}
			for(int z=0; z<b[0];z++){
				if((*(info+i)+j)->idModelo == (*(sell+i)+z)->idModelo){
					printf("%d\t\t",(*(info+i)+z)->idModelo);
					printf("%.2f\t\t",(*(info+i)+z)->precio);
					printf("%s\n",(*(info+i)+z)->descripcion);
				}
			}
		}*/
		cout<<endl;
	}
	getchar();
}
}
void ordenVentas(Personal **dato,int a[],Catalogo **info, int b[], Venta **sell, int c[]){
	system("cls");
	cout<<setw(10)<<"EMPLEADOS DESORDENADOS"<<endl;
	imprimeEmpleado(dato,a);
	
	cout<<setw(10)<<"EMPLEADOS ORDENADO"<<endl;
	ordenEmpleado(dato,a);
	imprimeEmpleado(dato,a);
	getchar();
	
	system("cls");
	cout<<setw(10)<<"CATALOGO DESORDENADOS"<<endl;
	imprimeCatalogo(info,b);
	
	cout<<setw(10)<<"CATALOGO ORDENADO"<<endl;
	ordenCatalogo(info,b);
	imprimeCatalogo(info,b);
	getchar();
	
	system("cls");
	cout<<setw(10)<<"VENTA DESORDENADOS"<<endl;
	imprimeVenta(dato,a, info,b, sell,c);
	
	cout<<setw(10)<<"VENTA ORDENADO"<<endl;
	ordenVenta(sell,c);
	imprimeVenta(dato,a, info,b, sell,c);
}


/*

void registro(Personal **dato,Catalogo **info, Venta **sell){
	for(int i=0; i<f; i++){
		c=validaEntero("No. de empleados: ");
		*(dato + i) = (Personal *)malloc(c*sizeof(Personal));
		tam[i]=c;
		for(int j=0; j<c; j++){
			(*(dato+i)+j)->idEmpleado=validaEntero("Id del empleado: ");
			validaCadena("Nombre:  ", (*(dato+i)+j)->nombre);
			validaCadena("Apellidos:  ", (*(dato+i)+j)->apellidos);
			validaCadena("Correo:  ", (*(dato+i)+j)->correo);
			(*(dato+i)+j)->telefono=validaEntero("Telefono: ");
			validaCadena("Direccion:  ", (*(dato+i)+j)->direccion);
			
			//(*(sell+i)+j)->idEmpleado=(*(dato+i)+j)->idEmpleado;
		}
		c=validaEntero("No. de modelos: ");
		*(info + i) = (Catalogo *)malloc(c*sizeof(Catalogo));
		tam2[i]=c;
		for(int j=0; j<c; j++){
			(*(info+i)+j)->idModelo=validaEntero("\nId del modelo: ");
			(*(info+i)+j)->precio=validaFlotante("Precio del modelo: ");
			validaCadena("Descripcion del modelo:  ", (*(info+i)+j)->descripcion);
			//(*(sell+i)+j)->idModelo=(*(info+i)+j)->idModelo;
		}
	
	}
	system("cls");
}

void imprime(Personal **dato,Catalogo **info, Venta **sell){
	for(int i=0; i<f; i++){	
		//printf("IdEmpleado\t\tNombre\t\tApellidos\t\tCorreo\t\tTelefono\t\tDireccion\n");
		//cout<<"IdEmpleado"<<setw(10)<<"Nombre"<<setw(10)<<"Apellidos"<<setw(10)<<"Correo"<<setw(10)<<"Telefono"<<setw(10)<<"Direccion";
		for(int j=0; j<tam[i]; j++){
			printf("Id del empleado: %d\n ",(*(dato+i)+j)->idEmpleado);
			printf("Nombre: %s\n ",(*(dato+i)+j)->nombre);
			printf("Apellidos: %s\n ",(*(dato+i)+j)->apellidos);
			printf("correo: %s\n ",(*(dato+i)+j)->correo);
			printf("telefono: %d\n ",(*(dato+i)+j)->telefono);
			printf("direccion: %s\n ",(*(dato+i)+j)->direccion);
			//cout<<"Fila ["<<i<<"]["<<j<<"]"<<setw(10)<<"Ubicacion de memoria"<<*(sell+i)+j;
			//cout<<setw(10)<<";
			//cout<<setw(10)<<"Nombre: "<<(*(dato+i)+j)->nombre;
			//cout<<setw(10)<<"Apellidos: "<<(*(dato+i)+j)->apellidos;
			//cout<<setw(10)<<"correo: "<<(*(dato+i)+j)->correo;
			//cout<<setw(10)<<"Telefono: "<<(*(dato+i)+j)->telefono;
		}	
		cout<<endl;
		
		//cout<<"IdMoidelo"<<setw(10)<<"Precio"<<setw(10)<<"Descripcion";
		for(int j=0; j<tam2[i]; j++){
			printf("Id del modelo: %d\n ",(*(info+i)+j)->idModelo);
			printf("Precio: %.2f\n ",(*(info+i)+j)->precio);
			printf("Descripcion: %d\n ",(*(info+i)+j)->descripcion);
			//cout<<setw(10)<<"Id del modelo: "<<(*(info+i)+j)->idModelo;
			//cout<<setw(10)<<"Precio: "<<(*(info+i)+j)->precio;
			//cout<<setw(10)<<"Descripcion: "<<(*(info+i)+j)->descripcion;	
		}
		cout<<endl;
		//c=validaEntero("No. de ventas: ");
		//cout<<setw(10)<<"numero de venta: "<<(*(sell+i))->idVenta;
		c=validaEntero("Numero de ventas: ");
		*(sell + i) = (Venta *)malloc(c*sizeof(Venta));
		tam3[i]=c;
		for(int j=0; j<tam3[i]; j++){
			(*(sell+i)+j)->idVenta=validaEntero("Id de la venta: ");
			(*(sell+i)+j)->idEmpleado=validaEntero("Id del empleado: ");
			//(*(sell+i)+j)->idEmpleado=(*(dato+i)+j)->idEmpleado;
			if((*(sell+i)+j)->idEmpleado == (*(dato+i)+j)->idEmpleado){
				//cout<<"IdEmpleado"<<setw(10)<<"Nombre"<<setw(10)<<"Apellidos"<<setw(10)<<"Correo"<<setw(10)<<"Telefono"<<setw(10)<<"Direccion";
				printf("Id del empleado: %d\n",(*(dato+i)+j)->idEmpleado);
				printf("Nombre: %s\n",(*(dato+i)+j)->nombre);
				printf("Apellidos: %s\n",(*(dato+i)+j)->apellidos);
				printf("Correo: %s\n",(*(dato+i)+j)->correo);
				printf("telefono: %d\n",(*(dato+i)+j)->telefono);
				printf("direccion: %s\n",(*(dato+i)+j)->direccion);
			}
			cout<<endl;
			(*(sell+i)+j)->idModelo=validaEntero("Id del modelo: ");
			//(*(info+i)+j)->idModelo=validaEntero("Id del modelo: ");
			if((*(sell+i)+j)->idModelo == (*(info+i)+j)->idModelo){
				printf("Id del modelo: %d\n",(*(info+i)+j)->idModelo);
				printf("Precio: %.2f\n",(*(info+i)+j)->precio);
				printf("Descripcion: %s\n",(*(info+i)+j)->descripcion);		
			}
		}
		cout<<endl;
	}
}
*/

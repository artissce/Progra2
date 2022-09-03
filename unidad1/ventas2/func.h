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
void recibeVenta(Venta **sell, int c[]){
	for(int i=0; i<sE;i++){
		c[i]=validaEntero("No. registros venta");
		*(sell + i) = (Venta *)malloc(c[i]*sizeof(Venta));
		for(int j=0;j<c[i];j++){
			(*(sell+i)+j)->idVenta=validaEntero("id Venta: ");
			(*(sell+i)+j)->idEmpleado=validaEntero("id Empleado: ");
			(*(sell+i)+j)->idModelo=validaEntero("id Modelo: ");
		}
		system("cls");
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
void imprimeVenta(Venta **sell, int c[]){
	cout<<setw(10)<<" -VENTAS- "<<endl;
	for(int i=0; i<sV;i++){
		for(int j=0;j<c[i];j++){
			cout<<setw(10)<<"["<<i<<"]["<<j<<"]";
			//cout<<"Posicion["<<i<<"]["<<j<<"]";
			cout<<setw(10)<<(*(sell+i)+j)->idVenta;
			cout<<setw(10)<<(*(sell+i)+j)->idEmpleado;
			cout<<setw(10)<<(*(sell+i)+j)->idModelo;
			cout<<endl;
		}
		cout<<endl;
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
	imprimeVenta(sell,c);
	
	cout<<setw(10)<<"VENTA ORDENADO"<<endl;
	ordenVenta(sell,c);
	imprimeVenta(sell,c);
	getchar();
}
void divi(){
	printf("----------------------\n");
}

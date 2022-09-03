void imprimeEmp(Personal **info){
	printf("IdEmpleado\tNombre\t\tApellidos\t\tCorreo\t\tTelefono\tDirecci�n\n");
	for (int i=0; i<f; i++){
		for(int j=0; j<tam[i]; j++){
			printf("%d\t\t",(*(info+i)+j)->idEmpleado);
			printf("%s\t\t",(*(info+i)+j)->nombre);
			printf("%s\t\t",(*(info+i)+j)->apellidos);
			printf("%s\t",(*(info+i)+j)->correo);
			printf("%s\t",(*(info+i)+j)->telefono);
			printf("%s\n",(*(info+i)+j)->direccion);
		}
		cout<<endl;
	}
}
void imprimeCat(Catalogo **dato1){
	printf("IdModelo\tPrecio\t\tDescripci�n\n");
	for (int i=0; i<f; i++){
		for(int j=0; j<tam2[i]; j++){
			cout<<setw(5)<<(*(dato1+i)+j)->idModelo;
			cout<<setw(20)<<(*(dato1+i)+j)->precio;
			cout<<setw(15)<<(*(dato1+i)+j)->desc;
			cout<<endl; //printf("\n");
		}
		cout<<endl;
	}
}
void imprimeVen(Venta **dato){
	printf("Ventas\tidEmpleado\tidModelo\n");
	for(int i=0; i<f; i++){
		for(int j=0; j<tam3[i]; j++){
			printf("%d\t",(*(dato+i)+j)->idVenta);
			printf("%d\t",(*(dato+i)+j)->idEmpleado);
			printf("%d\n",(*(dato+i)+j)->idModelo);
		}
	}
}
//void inicializa()
void recibe(Personal **info, Catalogo **dato1){
	setlocale(LC_CTYPE, "Spanish");
	SetConsoleCP(1252);
	SetConsoleOutputCP(1252);
	
	for(int i=0; i<f; i++){
		c = validaEntero("Cu�ntos usuarios: ");
		*(info + i) =(Personal *)malloc(c*sizeof(Personal ));
		tam[i] = c;
		for(int j=0; j<c; j++){
			(*(info+i)+j)->idEmpleado = validaEntero("Id del empleado: ");
			validaCadena("Nombre: ", (*(info+i)+j)->nombre);
			validaCadena("Apellidos: ", (*(info+i)+j)->apellidos);
			validaCadena("Correo: ", (*(info+i)+j)->correo);
			validaTele("Telefono: ", (*(info+i)+j)->telefono);
			validaCadena("Direccion: ", (*(info+i)+j)->direccion);
			printf("\n");
		}
		system("cls");
		c=0;
		printf("\n");
		c = validaEntero("Cu�ntos cat�logos: ");
		*(dato1 + i) =(Catalogo *)malloc(c*sizeof(Catalogo ));
		tam2[i] = c;
		for(int j=0; j<c; j++){
			(*(dato1+i)+j)->idModelo = validaEntero("Id del Modelo: ");
			(*(dato1+i)+j)->precio = validaFlotante("Precio del producto: ");
			validaCadena("Descripci�n: ", (*(dato1+i)+j)->desc);
			printf("\n");
		}
		system("cls");
	}
	imprimeEmp(info);
	for(int i=0;i<f;i++){
		seleccionEmp((*(info+i)), tam[i]);
	}
	imprimeCat(dato1);
	for(int i=0;i<f;i++){
		burbujaCat((*(dato1+i)), tam2[i]);
	}
}
void ventas(Venta **dato, Personal **info, Catalogo **dato1){
	setlocale(LC_CTYPE, "Spanish");
	SetConsoleCP(1252);
	SetConsoleOutputCP(1252);
	
	for (int i=0; i<f; i++){
		c=0;
		c = validaEntero("Cu�ntas ventas: ");
		*(dato + i) =(Venta *)malloc(c*sizeof(Venta ));
		tam3[i] = c;
		for(int j=0; j<c; j++){
			//for (int j=0; j<tam[i];j++){
			(*(dato+i)+j)->idVenta = validaEntero("N�mero de venta: ");
			(*(dato+i)+j)->idEmpleado = validaEntero("Id del Empleado: ");
			printf("IdEmpleado\tNombre\t\tApellidos\t\tCorreo\t\tTelefono\tDirecci�n\n");
			for(int z=0; z<tam[0];z++){
				if((*(dato+i)+j)->idEmpleado == (*(info+i)+z)->idEmpleado){
					printf("%d\t\t",(*(info+i)+z)->idEmpleado);
					printf("%s\t\t",(*(info+i)+z)->nombre);
					printf("%s\t\t",(*(info+i)+z)->apellidos);
					printf("%s\t",(*(info+i)+z)->correo);
					printf("%s\t",(*(info+i)+z)->telefono);
					printf("%s\n",(*(info+i)+z)->direccion);
				}
			}
			cout<<endl;
			(*(dato+i)+j)->idModelo = validaEntero("Id del Modelo: ");
			printf("IdModelo\tPrecio\t\tDescripci�n\n");
			for(int z=0; z<tam2[0];z++){
				if((*(dato+i)+j)->idModelo == (*(dato1+i)+z)->idModelo){
					printf("%d\t\t",(*(dato1+i)+z)->idModelo);
					printf("%.2f\t\t",(*(dato1+i)+z)->precio);
					printf("%s\n",(*(dato1+i)+z)->desc);
				}
			}
			cout<<endl;
		}
	}
	cout<<endl;
	imprimeVen(dato);
	for(int i=0;i<f;i++){
		insercionVen((*(dato+i)), tam3[i]);
	}
}


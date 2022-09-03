void registro_cliente(registro *pCliente){
	setlocale(LC_CTYPE, "Spanish");
	SetConsoleCP(1252); //STDIN codificacion de windows 1252
	SetConsoleOutputCP(1252); //STDOUT
	
	printf("INGRESE LOS DATOS\n");
	pCliente->id_trabajador = validaEntero("Id Trabajador: ");
	validaCadena("Nombre: ", pCliente->nombre);
	pCliente->f_nac.dia = validaEntero("Dia de nacimiento: ");
	pCliente->f_nac.mes = validaEntero("Mes de nacimiento: ");
	pCliente->f_nac.anio = validaEntero("Año de nacimiento: ");
	
	printf("\nDATOS REGISTRADOS\n");
	printf("%d\t", pCliente->id_trabajador);
	printf("%s\t", pCliente->nombre);
	printf("%d\t", pCliente->f_nac.dia);
	printf("%d\t", pCliente->f_nac.mes);
	printf("%d\t", pCliente->f_nac.anio);
}

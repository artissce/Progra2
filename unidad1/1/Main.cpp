#include "libreria.h"
/*Ana Karen Cuenca Esquivel - 177932*/
int main(){
	FILE *arch = NULL;
	/*registro cliente, *pCliente;
	pCliente = &cliente; //los apuntadores guadra ubi de memoria
	*/
	
	registro *pCliente; //principio para las listas
	pCliente = (registro *)malloc(sizeof(registro));
	
	registro_cliente(pCliente);
	getchar();
	
	return 0;
}


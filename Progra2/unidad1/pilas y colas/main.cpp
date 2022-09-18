#include "libreria.h"

int main(){
	int arr[10], lim, op;
	do{
		system("cls");
		printf(BBLU"\tAPILADOR Y ENCOLADOR");
		printf(WHT"\n\to p c i o n e s");
		printf("\n1-.	Apilar");
		printf("\n2-.	Desapilar");
		printf("\n3-.	Encolar");
		printf("\n4-.	Desencolar");
		printf(RED"\n5-.	SALIR"WHT);
		op=validaEntero("\nescribe tu opcion: ");
		//scanf("%d",&op);
		switch(op){
			case 1:
				lim=apila(lim, arr);
				break;
			case 2:
				lim=desapila(lim, arr);
				break;
			case 3:
				lim=apila(lim, arr);
				break;
			case 4:
				lim=desencola(lim, arr);
				break;
			case 5:
				printf(BMAG"\n Gracias por usar mi programa, vuelva pronto"WHT);
				break;
			default:
				printf(BMAG"\n ERROR - elija una opcion"WHT);
		}
	}while(op!=5);
	return 0;
}

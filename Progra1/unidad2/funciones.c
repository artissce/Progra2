/*Programa con diversas funciones
Ana Karen Cuenca Esquivel - 177932
25/02/2022*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <curses.h>
#include <time.h>

float ac,B,b,h,PI=3.1416,p;
int n=0,num,max,min,r;

void circulo(void){//no manda valores, no regresa
	printf("\nDame el radio del circulo: ");
	scanf("%d",&r);
	ac=PI*(r*r);
	printf("El area del circulo es: %.2f\n",ac);
}

void trapecio(float B,float b,float h){//mandar valores pero no regresa
	printf("El area del trapecio es: %.2f\n",((B+b)*h)/2);
}

float promedio(){//mandar valores y regresar valores
	float c,m=0,p;
	for (int i=0;i<n;i++){
		printf("Escribe la calificacion:",i+1,":");
		scanf("%f",&c);
		fflush(stdin);
		m=m+c;
	}
	p=m/n;
	return p;
}

int aleatorio(int num, int max, int min){//mandar valores
	int a,ale;
	a=(max-min)+1;
	srand(time(NULL));
	for (int i=1;i<=num;i++){
		ale=min+rand()%a;
		printf("El numero aleatorio es: %i\n",ale);
	}
	return ale;
}

int main()
{
	int op;
	do{
		printf("\n\n\t• • • • • • • MENU • • • • • • •");
		printf("\n");
        printf("\n1. Calcular area de un circulo");
        printf("\n2. Calcular area de un trapecio");
        printf("\n3. Calcular un promedio");
        printf("\n4. Genera aleatorio");
        printf("\n5. Salir");
        printf("\n Selecciona tu opcion: ");
		scanf("%d",&op);
		switch (op)
		{
			case 1:
				printf("\nSeleccionaste area del circulo\n");
				circulo();
				getchar();
				break;			
			case 2: 
				printf("\nSeleccionaste area del trapecio\n");
				printf("\nDame la base mayor: ");
				scanf("%f",&B);
				printf("\nDame la base menor: ");
				scanf("%f",&b);
				printf("\nDame la altura: ");
				scanf("%f",&h);
				trapecio(B,b,h);
				getchar();
				break;
			case 3: 
				printf("\nSeleccionaste promedio\n");
				printf("\nEscribe numero de calificaciones: ");
				scanf("%i",&n);
				printf("El promedio es: %.2f\n",promedio());
				break;
			case 4: 
				printf("\nSeleccionaste numeros aleatorios\n");
				printf("Cuantos numero desea generar? \n");
				scanf("%d",&num);
				printf("Indica el valor minimo: ");
				scanf("%d",&max);
				printf("Indica el valor maximo: ");
				scanf("%d",&min);	
				printf("",aleatorio(num,max,min));
				getchar();
				break;
			case 5:
           		printf("\n Vuelva pronto!");
				   break;
			default:
				printf("ERROR");
				break;	
		}
		getchar();
	}while(op!=5);
}
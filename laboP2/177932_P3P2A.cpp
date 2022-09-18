#include <stdio.h>//librerias
#include <conio.h>
#include <stdlib.h>
#include <time.h>

//declaracion funciones
void encabezado();//funcion con info del estudiante
void llenado();//funcion con llenado
void operacion(char *p,char c);


int main(){	
	encabezado();//funcion con datos del alumno
	llenado();
	return 0;
}

void encabezado(){
	printf("\tMatricula: 177932");
	printf("\n\tNombre: Cuenca Esquivel Ana Karen");
	printf("\n\tProgramacion 2");
	printf("\n\tGrupo:A");
	printf("\n\t PRACTICA3");
	printf("\n\t30/08/2022\n");
	printf("\t________________________________\n\n");
}
void llenado(){
	char *p=NULL;//declaracion del puntero
	srand(time(NULL));
	//char c ='a'+rand()%26;//genera letra aleaotoria
	char c =6+rand()%20;//genera letra aleaotoria
	/*char c;int r;
	srand(time(NULL));// inicializa
    c ='a'+ r;// Convierte en a-z
    //cout << c;*/
	p=(char *)malloc(c*sizeof(char *));//reserva espacio de acuerdo a la letra generada de manera aleatotrioa
	//textcolor(GREEN);
	printf("Vector 1\tTamano: %d\n",c);//imprime titulo y tamano del vector generado de manera aleaotoria
	//textcolor(WHITE);
	for(int i=0; i<c;i++){//ciclo para generar c veces los aleaotorios e imprime
		*(p + i)=65+rand()%26;//puntero dinamico con valores aleaotorios de acuerdo al ascii
		printf("%c\t",*(p + i));//imprime puntero en posicion de c con su valor en ascii
	}
	printf("\n");
	for(int i=0; i<c;i++){//ciclo para generar c veces los aleaotorios e imprime
		printf("%d\t",*(p + i));//imprime puntero en posicion de c con su valor en decimal
	}
	operacion(p,c);//llama a funcion
	free(p);//libera la memoria del puntero
}
//esta funcion es la encargada de hacer la operacion %2, si es cero, significa que el valor del puntero en la posicion i es PAR
void operacion(char *p,char c){
	int aux[c];//cadena auxilioar para imprimir de manera inversa con tamano del aleaotorio generado
//	textcolor(GREEN);
	printf("\nVector 2\tTamano: %d\n",c);//titulo
	//textcolor(WHITE);
	for(int i=c; i>=0;i--){//ciclo con impresion inverso
		if(*(p + i)%2==0){//condicional para saber si es par o no
			aux[i]=*(p + i);//asigna al auxiciliar
			printf("%d\t",aux[i]);//imprime solo si es par
		}
	}
}

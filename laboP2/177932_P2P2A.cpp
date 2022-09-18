#include <stdio.h>//librerias
#include <conio.h>
#include <stdlib.h>
#include <time.h>

//declaracion funciones
void encabezado();//funcion con info del estudiante
void part1();//funcion con las indicaciones de la practica
int a=1, b=2, *ip;//declaracion de variables LISTO
int  c = 2, d = 5, e[] = {1,10,30,44}, i, *pa, *pb, *pc;//7 Declaracion de variables
/*
SEMANA 2	

& direccion			
ptm=pTR ->*ptm =&y
printf("%x",&y);//direccion
a* esclavo
int y=5, x=3, *ptr, *ptm
1003	1001	ptm
1002	1001	ptr	
1001	5	y
1000	3	x

ptr=&y
x=*ptr
x=5

p(*ptr)=5
p(ptr)=1001
p(&ptr)=1002

int *array

array=(int *)malloc(5*sizeof(int));
	cast->casteo, conversion

*/
int main(){
	
	encabezado();
	part1();
	
}


void part1(){
	printf("El valor de a: %d y el valor de b: %d\n",a,b);//imprime valores LISTO
	printf("La direccion de a: %X y la direccion de b: %X\n",&a,&b);//LISTO
	printf("La direccion de *ip: %X\n",&ip);//listo
	ip=&a;//5 asigna al puntero al valor de a LISTO
	printf("*ip apunta a 'a': %d, toma la direccion de la variable \n",ip);//impresion de datos AQUI HABIA PUESTO X
	b=*ip;//6 Asigna a la variable b, la direccio de ip LISTO
	printf("El valor de b con la asignacion de *ip: %d\n",b);//impresion de datos
	
	
	for(i=0;i<4;i++){//8? ciclo que avanza en la posicion del arreglo
		printf("valor del arreglo 'e' %d y direccion es: %X\n",e[i],&e[i]);
	}
	pa=&a;//asigna la direccion de a en puntero pa
	printf("valor %d y la direccion %X de pa\n",pa,&pa);//impresion de datos CAMBIO DE *PA A  &PA
	b = *pa+1;//asigna a b la direccion de pa mas 1
	printf("valor de b: %d\n",b);//impresion de datos
	pc = &c;//11 puntero a variable c
	printf("Cual es la direccion de pc: %X\n",&pc);//impresion de datos
	b = *(pc + 1);//12 varibale a puntero mas 1
	printf("valor de b: %d\n",b);//impresion de datos
	pb = &b;//13 puntero a variable b
	printf("direccion de pb %X,direccion de b %X y el valor de b%d\n",&pb,&b,b);//impresion de datos
	*pb = 0; //puntero aigualado a cero
	*pb +=2; //puntero sumado en dos unidades
	printf("valor de pb: %d y b %d\n",*pb,b);//impresion de datos
	(*pb)--;//puntero disminuido a una unidad
	printf("valor de *pb: %d y b %\n",*pb,b);//impresion de datos
}	

/*
void part2(){
	
}*/
void encabezado(){
	printf("\tMatricula: 177932");
	printf("\n\tNombre: Cuenca Esquivel Ana Karen");
	printf("\n\tProgramacion 2");
	printf("\n\tGrupo:A");
	printf("\n\t PRACTICA2");
	printf("\n\t23/08/2022\n");
	printf("\t________________________________\n\n");
}

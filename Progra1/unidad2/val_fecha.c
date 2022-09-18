/*
Programa que valida fecha
Ana Karen Cuenca Esquivel - 177932
25/02/2022*/

#include <curses.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  bool continuar;
  do{
    continuar = TRUE;
    char fecha[11] = "", dia[3] = "", mes[3] = "", ano[5] = "";

    printf("\nIngresa la fecha a evaluar (dd/mm/aaaa): ");
    fgets(fecha, 11, stdin);
    getchar();
    strncat(dia, &fecha[0], 2);
    strncat(mes, &fecha[3], 2);
    strcat(ano, &fecha[6]);

    int dia_n = atoi(dia);
    printf("Dia: %s | %i", dia, dia_n);
    int mes_n = atoi(mes);
    printf("\nMes: %s | %i", mes, mes_n);
    int ano_n = atoi(ano);
    printf("\nYear: %s | %i\n", ano, ano_n);

    if (ano_n != 2022) {
      printf("Año incorrecto\n");
      continuar = FALSE;
    }
    if (mes_n < 1 || mes_n > 12) {
      printf("Mes fuera de rango\n");
      continuar = FALSE;
    }

    if ((mes_n==1 || mes_n==3 || mes_n==5 || mes_n==7 || mes_n==8 || mes_n==10 || mes_n==12) && (dia_n<1 || dia_n>31)){
        printf("Dia fuera de rango\n");
        continuar = FALSE;
      }
    if ((mes_n=2) && (dia_n<1 || dia_n>28)){
        printf("Dia fuera de rango\n");
        continuar = FALSE;
      }
    if ((mes_n==4 || mes_n==6 || mes_n==9 || mes_n==11) && (dia_n<1 || dia_n>30)){
        printf("Dia fuera de rango\n");
        continuar = FALSE;
      }
    }while(continuar == FALSE);

  printf("La fecha que introduciste es correcta");
  return 0;
}
/*
#include <curses.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	
    bool validar;
	do{
        char fecha[11]="", d[3]="", m[3]="", a[5]="";
	    bool validar=true;

		printf("\nIngresa la fecha a evaluar (dd/mm/aaaa): \n");
		fgets(fecha,11,stdin);
        getchar();
		printf("\n");
		strncat(d,&fecha[0],2);
        strncat(m,&fecha[3],2);
        strcat(a,&fecha[6]);
		puts(d);
		puts(m);
		puts(a);
		
		int d1=atoi(d);
		printf("Dia: %i", d1);
		int m1=atoi(m);
		printf("Mes: %i", m1);
		int a1=atoi(a);
		printf("Year: %i", a1);

		if (a1!=2022){
		 printf("\nAño incorrecto");
         validar=false;
        }
		if (m1<1 || m1>12){
		 printf("\nMes fuera de rango");
         validar=false;
        }
		if ((m1==1 || m1==3 || m1==5 || m1==7 || m1==8 || m1==10 || m1==12) && (d1<1 || d1>31)){
		 printf("\nDia fuera de rango");
            validar=false;
        }
		if ((m1==4 || m1==6 || m1==9 || m1==11) && (d1<1 || d1>30)){
		 printf("\nDia fuera de rango");
          validar=false;
        }
		if ((m1=2) && (d1<1 || d1>28)){
		 printf("\nDia fuera de rango");
          validar=false;
        }
        getchar();
	}while(validar==false);
    printf("\nLa fecha que introduciste es correcta");

    return 0;		
}

#include <ncurses.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL, "Spanish");
    bool validar;
    do{
        char fecha[11]="", dia[2]="", mes[4]="", a[4]="";
        int dia1=0, mes1=0, a1=0;
        validar=true;
        
        printf("Dame la fecha: ");
        fflush(stdin);
        fgets(fecha,11,stdin);
        //separa la fecha
        strncat(dia,&fecha[6],2);
        strncat(mes,&fecha[3],2);
        strcat(a,&fecha[6]);
        //asignar variables enteras, los valores numericos de las cadenas
        dia1=atoi(dia);
        mes1=atoi(mes);
        a1=atoi(a);

        if(a1!=2022){
            printf("el año es incorrecto\n\n");
            validar=false;
        }
        if(mes1<1 || mes1>12){
            printf("el mes es incorrecto\n\n");
            validar=false;
        }
        if((mes1==1||mes1==3||mes1==5||mes1==7||mes1==8||mes1==10||mes1==12) && (dia1<1||dia1>31)){
                printf("El dia es incorrecto en este mes, tiene 31 dias\n\n");
                validar=false;
            }
        if((mes1==4||mes1==6||mes1==9||mes1==11) && (dia1<1||dia1>30)){
                printf("El dia es incorrecto en este mes, tiene 28 dias\n\n");
                validar=false;
            }
        if((mes1==2)&&(dia1<1||dia1>=28)){
                printf("El dia es incorrecto en este mes, tiene 28 dias\n\n");
                validar=false;
            }
    }while(validar==false);
    if (validar==true){
        printf("La fecha que introduciste es correcta");
    }
    return 0;
}
#include<conio.h>
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<locale.h>
int main()

{
    char fecha[10]="", dia[2]="", mes[2]="", ano[4]="";
	int dia1=0, mes1=0, a1=0;
	    bool validar;
    do
	{
		validar=true;
        printf("Dame la fecha, ejemplo 11/01/2002:");
        fflush(stdin);
        gets(fecha);
        strncat(ano,&fecha[6],4);
        strncat(dia,&fecha[3],2);
        strncat(mes,&fecha[3],2); 
        dia1=atoi(dia);
        mes1=atoi(mes);
        a1=atoi(ano);
        if(a1!=2022)
		{
            printf("el año es incorrecto");
            validar=false;
        }
        if(mes1<1 || mes1>12)
		{
            printf("el mes es incorrecto");
            validar=false;
        }
        if((mes1==1||mes1==3||mes1==5||mes1==7||mes1==8||mes1==10||mes1==12) && (dia1<1||dia1>31))
			{
                printf("El dia es incorrecto en este mes, tiene 31 dias");
                validar=false;
            }
        if((mes1==4||mes1==6||mes1==9||mes1==11) && (dia1<1||dia1>30))
			{
                printf("El dia es incorrecto en este mes, tiene 28 dias");
                validar=false;
        	}
        if((mes1==2)&&(dia1<1||dia1>28))
			{
                printf("El dia es incorrecto en este mes, tiene 28 dias");
                validar=false;
            }
    }
	while(validar=false);
		if(validar=true);
		{
			printf("La fecha es corecta");
		}
    return 0;
}*/
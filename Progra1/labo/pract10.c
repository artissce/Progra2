#include <stdio.h>
#include <stdlib.h> 
#include <locale.h>
#include <time.h>
// 177932- ana karen cuenca esquivel
int main(){
    int ar1[10]={0}, ar2[10]={0}, ar3[10]={0};//declaracion de arreglos

    //PRIMER ARREGLO
	printf("\tPRIMER ARREGLO\n");
	srand(time(NULL));//genera numeros aleatorios
	for(int i=0; i<10; i++){
		ar1[i]=19+rand()%(45-19);
		printf("%d\n", ar1[i]);
	}
	
	printf("\n");

    //SEGUNDO ARREGLO
    printf("\n\tSEGUNDO ARREGLO\n\n");//lectura del segundo arreglo
    int aux=0;//variable para detener el ciclo do while
    do{
        for(int i=0; i<10; i++){
            printf("\nIngrese un numero: ");
            scanf("%d", &ar2[i]);
                if ((ar2[i]%2)!=0){
                    printf("\nERROR- numero impar");
                    aux=1;}
                else
                    aux=0;
        }
    }while(aux==1); 
    
   ///TERCER ARREGLO
    printf("\n\tTERCER ARREGLO\n");
    for(int i=0; i<10; i++){//genera 10 numeros aleatorios entre 5 y 30
		ar3[i]=5+rand()%(30-5);
	}
    for(int i=0; i<10; i++){//verifica si es impar e imprime
        if((ar3[i]%2)!=0)
            printf("%i ",ar3[i]);
    }
    return 0;
}
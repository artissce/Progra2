#include <stdio.h>

int main(){
	int n; 
    do{
	printf("Ingresa el numero de caracteres de la figura o salga del programa con '0': ");
	scanf("%i",&n);
	printf("\n");
	for(int r=1; r<=n ; r++){
	  	for(int c=1; c<=n; c++){
		    if(r == 1 || r == n || c== 1 || c==n) 
				printf("*");  
	  		else 
	  			printf(" ");
		}
		printf("\n");
	}
    }
    while (n!=0);
	return 0;
}
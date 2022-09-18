/* Ana Karen Cuenca Esquivel - 177932
11/02/2022
Programa que da los multiplos del 3,4,5 por el ciclo for
*/
#include <stdio.h>

int main() {

   int n, i, m3 ,m4, m5;

   printf("\nLos multiplos de 3: \n");
    n=3;
   for (i=1;i<=10;i++){
           m3=i*n;
           printf("%d ", m3);
    }
    n=4;
    printf("\n\nLos multiplos de 4:\n");
	for (i=1;i<=10;i++){
			m4=i*n;
			printf("%d ", m4);
	}    
    n=5;
    printf("\n\nLos multiplos de 5:\n");
	for(i=1;i<=10;i++){
		m5=i*n;
		printf("%d ",m5);
	}
	
}
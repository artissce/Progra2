#include <stdio.h>
int main(){
int i, n=0,m,cont=0,div;
printf("Ingresa un numero de limite: ");
scanf("%d",&m);
for (n=2;n<=m;n++){
div=0;
    for (i=2;i<n;i++){
        if (n%i==0){
        div++;
        break;
        }
    }   
if (div==0){
    printf("\n%i",n);
    cont++;
    }
}
printf("\nHay %d numeros primos",cont);
}
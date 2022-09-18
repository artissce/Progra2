/*Programa con funciones que calcule seride fabonacci
Ana Karen CUenca ESquivel - 177932 01/02/2022*/
#include <stdio.h>
int fabonacci(int n){
    if (n<=1)
        return n;
    return fabonacci(n-1)+fabonacci(n-2);
}
int main(){
    int n;
    printf("Dame el numero: ");
    scanf("%i",&n);
    printf("La serie de fibonacci en el numero %d es:",n);
    for(int i=0;i<=n;i++){
        printf("%i \t",fabonacci(i));
    }
}
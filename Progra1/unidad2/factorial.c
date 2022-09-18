/*Programa con funciones que calcule el factorial de un numero
Ana Karen CUenca ESquivel - 177932 01/02/2022*/
#include <stdio.h>
double fact(double n){
  if (n==1)
    return 1;
  return n * fact(n - 1);}
int main(){
    int n;
    printf("Dame el numero que quieras calcular: ");
    scanf("%i",&n);
    printf("El numero es = %e", fact(n));
    return 0;
  }

/*
Programa que genera factorial de un numero
Ana Karen Cuenca Esquivel - 177932
25/02/2022
#include <stdio.h>
int factorial(int n){
    int fact=1;
    for (int i=1;i<=n;i++){
        fact=fact*i;
    }
    return fact;
}
int main(){
    int n;
    printf("Dame el numero que quieras calcular: ");
    scanf("%i",&n);
    printf("%i",factorial(n));
    return 0;
}*/

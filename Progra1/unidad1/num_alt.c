#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main (){
    int n,o=100;
    srand (time(NULL));
    //n=rand(); //genera un numero aleatorio
    n=(rand()%(9 - 21+1)+9); //genera un numero aleatorio de 0 al 10
    printf("\nEl numero es %d",n);
    n=(rand()%(99 - 201+1)+99); 
    printf("\nEl numero es %d",n);
    n=-10+rand()%21; 
    printf("\nEl numero es %d",n);

}
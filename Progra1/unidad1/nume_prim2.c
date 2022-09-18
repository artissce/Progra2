#include <stdio.h>
#include <math.h>
int main(){
    int n,d=0,i;

    printf("Ingresa el numero");
    scanf("%i",&n);
    for (i=2; i<n; i++) {
    if (n % i==0){
        d++;
        break;
        goto sal;
    }
    }
sal:
if (d==0)
    printf("\nEs primo");
else
    printf("\nNo es primo");
    
}
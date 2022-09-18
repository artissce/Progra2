#include <stdio.h>
#include <stdlib.h>

int main (){
    int i;
    for (i=0;i<=10;i++){
        printf("%i",i);
    }
    i=0;
    printf("\n");
    while (i<=10){
        printf("%i",i);
        i++;
    }
    printf("\n");
    i=0;
    do {
        printf("%i",i);
        i++;
    }
    while (i<=10);
}
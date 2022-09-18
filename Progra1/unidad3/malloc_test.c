#include <stdio.h>
#include <stdlib.h>

int main(){
    void *p;
    int i;
    long long m=0;
    for(i=1; ; i++){
        if(p==NULL) break;
        m += 500000;
    }
    printf("\nTotal de memoria asignada %lu\n",m);
    getchar();
    free(p);
    return 0;

}
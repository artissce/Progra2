#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL, "Spanish");
    char fecha[11],dia[3]="",mes[3]="",a[5]="";

    printf("Dame la fecha (formato dd/mm/aaaa): ");
    gets(fecha);
    strncat(dia,&fecha[0],2);
    strncat(mes,fecha+3,2);
    strncat(a,&fecha[6],4);
    printf("El dia es: %s\n",dia);
    printf("El mes es: %s\n",mes);
    printf("El año es: %s\n",a);
    return 0;
}
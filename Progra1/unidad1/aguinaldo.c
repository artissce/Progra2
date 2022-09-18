/*Programa que calcula sueldo y aguinaldo
Ana Karen Cuenca Esquivel - 177932
04/02/2022
*/
#include <stdio.h>

int main(void){
    int edad,dias;
    float salario, years,money,semanal,quincenal,mes,total;

    printf("\nDigite su edad: ");
    scanf("%d", &edad);
    printf("\nDigite su salario diario: ");
    scanf("%f", &salario);
    printf("\nDigite los años trabajos: ");
    scanf("%f", &years);

    if (years>=1 && years<=5)
        if (edad <25)
            dias=10;
        else if (edad>=25 && edad<=40)
            dias=12;
        else
            dias=15;
    else if (years>=6 && years<=15)
        if (edad>=25 && edad<=35)
            dias=18;
        else if (years>=36 && years <=50)
            dias=20;
        else
            dias=25;
    else
        dias=30;

    money=dias*salario;
    semanal=salario*5;
    quincenal=salario*10;
    mes=salario*20;
    total=money+mes;
    printf("\nTu salario semanal es: %.2f",semanal);
    printf("\nTu salario quincenal es: %.2f",quincenal);
    printf("\nTu salario mensual es: %.2f",mes);
    printf("\nTu aguinaldo es: %.2f",money);
    printf("\nTu salario mensual mas aguinaldo es: %.2f",total);

    return 0;
}
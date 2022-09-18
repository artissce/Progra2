#include <stdio.h> //libreria de entrada y salida
#include <string.h> //libreria para cadenas
/*Tabla de precedencia o jerarquia de operadores en C
(),[],{}
*, /, %
-, +
&&, ||
<,>,>=, ==
*/

int main()//declara funciones
{
    printf("\n177932 - Cuenca Esquivel Ana Karen");//mis datos
    printf("\nPROG 1, SEM P22");//mis datos
    printf("\nPRACT 2, 01/02/2022");//mis datos
//declaración de variables
float c1 = 7, c2 = 8, c3 = 4;
float prom = 9.5;
//float calif1 = 0, calif2 = 0, calif3 = 0;
char animal[5],vocal;
//Formato para las cadenas %s, en el scanf no lleva &
//a las cadenas no se les puede asignar un valor con el operador igual
prom = (c1+c2+c3)/3;
//printf("Promedio: %f\n",prom = (c1+c2+c3)/3);
printf("Promedio: %f",prom);
printf("\ncociente: %d, residuo: %d",11/2,10%2);
printf("\nIngresa un animal: ");
scanf("%s",animal); //gato
printf("El animal es: %s",animal); //gato
printf("\nCaracter en pos: 3 es %c",animal[3]);//3,o
animal[3] = 'R';
printf("\nCadena nueva: %s",animal);
strcpy(animal,"oso");//es similar a esto animal = "oso";
printf("\nCadena otra: %s",animal);
}
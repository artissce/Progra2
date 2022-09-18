#include <stdio.h>
#include <time.h>
#include <stdlib.h> //Librería para generar números aleatorios
int aleatorio[100]={0};
void random(){
	srand (time(NULL)); //Generar semilla en base al tiempo
	for(int i=0;i<100;i++) {
		aleatorio[i]=rand()%101;
		printf("%d\t",aleatorio[i]); }
int mayor(void){
	int may=0;
	may=aleatorio[0];
	for (int j=1; j<100; j++){
		if (aleatorio[j]>may)
			may=aleatorio[j]; }
	return may; }
int menor(void) {
	int men=0;
	men=aleatorio[0];
	for (int j=1; j<100; j++){
		if (aleatorio[j]<men)
			men=aleatorio[j]; }
	return men; }
int main(void){
	random();
	printf("\nEl elemento mayor es: %d",mayor());
	printf("\nEl elemento menor es: %d",menor());
	getchar();}
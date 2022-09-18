#include <stdio.h>
/*Definición de arreglos*/
int matrizA[2][2]={{1,2},
					{3,4}};
int matrizB[2][2]={{5,6},
					{7,8}};
int matrizC[2][2]={{0,0},
					{0,0}};;
void impresion(int matrizA[2][2]) {
	for (int i=0; i<2; i++) {
		for (int j=0; j<2; j++)
			printf("\t%d",matrizA[i][j]);
		printf("\n"); } }
void operacion_matriz(int matrizA[2][2], int matrizB[2][2]) {
	matrizC[0][0]=matrizA[0][0]+matrizB[0][0];
	matrizC[0][1]=matrizA[0][1]+matrizB[0][1];
	matrizC[1][0]=matrizA[1][0]+matrizB[1][0];
	matrizC[1][1]=matrizA[1][1]+matrizB[1][1]; }
int main() {
	printf("\tMatriz A:\n");
	impresion(matrizA);
	printf("\n");
	printf("\tMatriz B:\n");
	impresion(matrizB);
	operacion_matriz(matrizA, matrizB);
	printf("\n");
	printf("\tMatriz C:\n");
	impresion(matrizC); 
}
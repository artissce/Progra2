#include<stdio.h>
#include<stdlib.h>
/*Ana Karen Cuenca Esquivel - 177932
Programa que calcula promedio y mediana de n calificaciones
*/
//decalaracion de funciones
void lectura(float calif[],int n);
void despliegue(float calif[],int n);
float promedio(float calif[],int n);
void ordenar(float calif[], int n);
float mediana(float calif[],int n);
float moda(float calif[],int n);

int main(){
	int n;
	printf("Ingresa la cantidad de notas a evaluar: ");
	scanf("%d", &n);	
	float *calif = (float*)malloc( n * sizeof(float));//reserva memoria para futuro
	//float calif[n]={0.0};
	printf("\n");
	lectura(calif, n);
	printf("\n");
	despliegue(calif, n);
	printf("\n");
	printf("\nEl promedio es: %.2f",promedio(calif,n));
	printf("\n");
	ordenar(calif,n);
	printf("\n");
	printf("\nLas calificaciones ordenadas de menor a mayor: ");
	printf("\n");
	despliegue(calif, n);
	printf("\nLa mediana es: %.2f",mediana(calif,n));
	printf("\nLa moda es: %.2f",moda(calif,n));
	return 0;
}
//funciones
void lectura(float calif[],int n){
	for (int i=0;i<n;i++){
	printf("Ingresa la calificacion: ");
	scanf("%f", &calif[i]);
	}
}
void despliegue (float calif[],int n){
	for (int i=0;i<n;i++){
		printf("La calificacion %d es: %.2f\n",i,calif[i]);
	}
}
void ordenar(float calif[], int n){
	float aux;
	for(int i=0;i<n-1;i++){
		for(int j=0;j<n-1;j++){
			if(calif[j] > calif[j+1]){
				aux = calif[j];
				calif[j] = calif[j+1];
				calif[j+1] = aux;
			}
		}
	}
}
float mediana(float calif[],int n){
	float med=0;
	if (n%2==0)//par
		med = (calif[(n/2)-1] + calif[n/2])/ 2;
	else//impar
		med=calif[((n+1)/2)-1];
	return med;		
}
float promedio(float calif[],int n){
	float prom=0;
	for(int i=0;i<n;i++){
		prom=prom+calif[i];
	}
	prom=prom/n;
	return prom;
}
float moda(float nums[],int n){
    float mayor=0,mo=0;
    for(int i=0;i<n;i++){
        int cont;
        for(int j=i+1;j<n;j++){
            if(nums[i]==nums[j])
                cont++;
        }
        if (cont>mayor){
            mayor=cont;
            mo=nums[i];
        }
    }
    return mo;
}
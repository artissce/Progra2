#include <stdio.h>

void ordenar(float nums[], int n){
	float aux;
	for(int i=0;i<n-1;i++){
		for(int j=0;j<n-1;j++){
			if(nums[j] > nums[j+1]){
				aux = nums[j];
				nums[j] = nums[j+1];
				nums[j+1] = aux;
			}
		}
	}
}

float moda(float nums[],int n){
    int cont1,cont2;
    float mo=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(nums[i]==nums[j] && i!=j)cont1;
        }
        if (cont1>cont2){
            cont2=cont1;
            mo=nums[i];
        }
        cont1=0;
    }
}
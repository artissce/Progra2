#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>
int main(){
	int arr[20]={0};
	for(int i=0;i<20;i++){
		arr[i]=1%rand()+100;
		printf("%d\n",arr[i]);
	}

}

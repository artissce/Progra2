#include <stdio.h> //FILE
#include <stdlib.h>

/*
int main(){
	float y=0,x=0,a=0,b=0,c=0,d=0;
	scanf("%f",&x);
	a=x+(pow(x,2));
	b=(5*x)+3;
	c=a/b;
	d=(a/b)+(2*x);
	y=(c+x)*(c/d);
	printf("%f",y);
}
*/
/*
int main(){
	int x,y,xa,ya,xb,yb,dist;
	scanf("%i",&xa);
	scanf("%i",&ya);
	scanf("%i",&xb);
	scanf("%i",&yb);
	x=xa-xb;
	y=ya-yb;
	dist=sqrt((pow(x,2))+(pow(y,2)));
	if(dist>=150){
		printf("sana");
	}
	else{
		printf("insana");
	}	
}


int main(){
	double n=0;
	scanf("%lf",&n);
    printf("%lf", (n*(n+1))/2);	
    return 0;
}*/
/*
int main(){
	int i,f,time;
    scanf("%i",&i);
    scanf("%i",&f);
    if(f<i){
		f=f+24;
	}
	time=f-i;
	if(f==i){
		time=24;
	}
	if(time<=24){
		printf("%i",time);
	}
}*/
/*
int main(){
	int clave,numin;
	float total;
    scanf("%i",&clave);
    scanf("%i",&numin);
    if(clave==12){
    	total=2*numin;
    	printf("%i", numin);
	}
	else if(clave==15){
    	total=2.2*numin;
    	printf("%i", numin);
	}
	else if(clave==18){
    	total=4.5*numin;
    	printf("%i", numin);
	}
	else if(clave==19){
    	total=3.5*numin;
    	printf("%i", numin);
	}
	else if(clave==23){
    	total=6*numin;
    	printf("%i", numin);
	}
	else if(clave==25){
		total=6*numin;	
    	printf("%i", numin);
	}
	else if(clave==29){
		total=5*numin;
    	printf("%i", numin);
	}
	else{
		printf("ERROR");
	}
	
    return 0;
}

int main{
int clave,numin;
    scanf("%i",&clave);
    scanf("%i",&numin);
    if(clave==12){
    	numin*=2;
    	printf("%i", numin);
	}
	else if(clave==15){
    	numin*=2.2;
    	printf("%i", numin);
	}
	else if(clave==18){
    	numin*=4.5;
    	printf("%i", numin);
	}
	else if(clave==19){
    	numin*=3.5;
    	printf("%i", numin);
	}
	else if(clave==23){
    	numin*=6;
    	printf("%i", numin);
	}
	else if(clave==25){
    	numin*=6;
    	printf("%i", numin);
	}
	else if(clave==29){
    	numin*=5;
    	printf("%i", numin);
	}
	else{
		printf("ERROR");
	}
	
    return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main (void)
{
    int clave, costo_de_la_llamada, tiempo_en_minuto,costo_del_minuto=0;
    scanf ("%d\n", &clave);
    scanf ("%d\n", &tiempo_en_minuto);
    if(clave==12){
        costo_del_minuto=2;
    }
    if(clave==15){
        costo_del_minuto=2.2;
    }
    if(clave==18){
        costo_del_minuto=4.5;
    }
    if(clave==19){
        costo_del_minuto=3.5;
    }
    if(clave==23){
        costo_del_minuto=6;
    }
    if(clave==25){
        costo_del_minuto=6;
    }
    if(clave==29){
        costo_del_minuto=5;
    }
    printf ("%d", tiempo_en_minuto*costo_del_minuto);
    return 0;
}

#include <stdio.h>


int main(){
	int numin,clave;
	float costo;
scanf("%d",&clave);
scanf("%d",&numin);
switch(clave)
{
case 12: 
costo=numin*2;
break;
case 15:
costo=numin*2.2;
break;
case 18:
costo=numin*4.5;
break;
case 19:
costo=numin*3.5;
break;
case 23:
costo=numin*6;
break;
case 25:
costo=numin*6;
break;
case 29:
costo=numin*5;
break;
}
printf ("%.1f",costo);
}

#include <stdio.h>


int main(){
	int costo,minutos,clave;
scanf("%d",&clave);
scanf("%d",&minutos);
switch(clave)
{
case 12: 
printf ("%d",minutos*=2);
break;
case 15:
printf ("%d",minutos*=2.2);
break;
case 18:
printf ("%d",minutos*=4.5);
break;
case 19:
printf ("%d",minutos*=3.5);
break;
case 23:
printf ("%d",minutos*=6);
break;
case 25:
printf ("%d",minutos*=6);
break;
case 29:
printf ("%d",minutos*=5);
break;
}
}
#include <stdio.h>
int main(){
	float costo,minutos;int clave;
scanf("%d",&clave);
scanf("%f",&minutos);
switch(clave)
{
case 12: 
printf ("%.1f",minutos*=2);
break;
case 15:
printf ("%.1f",minutos*=2.2);
break;
case 18:
printf ("%.1f",minutos*=4.5);
break;
case 19:
printf ("%.1f",minutos*=3.5);
break;
case 23:
printf ("%.1f",minutos*=6);
break;
case 25:
printf ("%.1f",minutos*=6);
break;
case 29:
printf ("%.1f",minutos*=5);
break;
}
}*/
#include <stdio.h> //FILE
#include <stdlib.h>
int main(){
	double clave,numin;
	float total;
    scanf("%lf",&clave);
    scanf("%lf",&numin);
    if(clave==12){
    	total=numin*2;	
	}
	if(clave==15){
		total=numin*2.2;
	}
	if(clave==18){
    	total=numin*4.5;
	}
	if(clave==19){	
		total=numin*3.5;
	}
	if(clave==23){
   		total=numin*6;
	}
	if(clave==25){
   		total=numin*6;
	}
	if(clave==29){
    	total=numin*5;
	}
		printf("%.1f", total);
    return 0;
}

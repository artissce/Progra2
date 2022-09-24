#include <stdio.h>
#include <stdlib.h>//malloc, free
#include <ctype.h>
#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	int clave, numin;
	float costo;
	cin>>clave>>numin;
	switch(clave){
		case 12:
			costo=numin*2;
			cout<<costo;
			break;
		case 15:
			costo=numin*2.2;
			cout<<costo;
			break;
		case 18:
			costo=numin*4.5;
			cout<<costo;
			break;
		case 19:
			costo=numin*3.5;
			cout<<costo;
			break;
		case 23:
			costo=numin*6;
			cout<<costo;
			break;
		case 25:
			costo=numin*6;
			cout<<costo;
			break;
		case 29:
			costo=numin*5;
			cout<<costo;
			break;
	}
	return 0;
}

/*int main(){
	double n=0;
	scanf("%lf",&n);
    printf("%.0lf", (n*(n+1))/2);	
    return 0;
}*/



/*int main(){
    int in, fi, dur;
    scanf("%d\t%d",&in,&fi);
    if(fi<in){
        fi=fi+24;
    }
    dur=fi-in;
    if(fi==in){
        dur=24;
    }
    if(dur<=24){
        printf("%d",dur);
    }
    return 0;
}*/

/*int main(){
    int x,y,xa,ya,xb,yb;
	float dist;
    scanf("%d\t%d\t%d\t%d",&xa,&ya,&xb,&yb);
    x=(xb-xa)*(xb-xa);
    y=(yb-ya)*(yb-ya);
    dist=sqrt(x+y);
    if(dist<150){
        printf("insana");
    }
    else{
        printf("sana");
    }   
    return 0;
}*/

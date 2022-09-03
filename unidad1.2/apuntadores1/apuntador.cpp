#include "libreria.h"

int main(){
	int u=1, v=3;
	int *pu = &u, *pv = &v;
	
	printf("APUNTADORES\n\n");
	printf("1-. U=%d\tV=%d\n",u,v);
	func1(u,v);
	printf("3-. U=%d\tV=%d\n",u,v);
	func2(&u,&v);
	printf("5-. U=%d\tV=%d\n",u,v);
	func2(pu,pv);
	printf("6-. U=%d\tV=%d\n",u,v);
	func3(u,v);
	printf("8-. U=%d\tV=%d\n",u,v);
	
	return 0;
}

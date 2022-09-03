void func1(int u, int v){
	u=9;
	v=4;
	printf("2-. U=%d\tV=%d\n",u,v);
}

void func2(int *pu, int *pv){
	*pu += 12;
	*pv += 7;
	printf("4-. U=%d\tV=%d\n",*pu,*pv);
}
void func3(int &pu, int &pv){
	pu -= 10;
	pv -= 5;
	printf("7-. U=%d\tV=%d\n",pu,pv);
}

/*MODULO 6 NETACAD - PUNTEROS Y ESTRUCTURAS*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* COMPILACION FALLA
struct S{
    int S;
};

int f(struct S *s){
    return--s.S;//usar -> pq es puntero
}

int main(){
    int i;
    struct S S ={2};
    i = f(S);//parametro imcompatible
    printf("%i",i);
}*/

/* IMPRIME B
struct S{
    char *p;
};

int main(){
    char *p = "abcd";
    struct S S[2];
    int i;
    for(i=0;i<2;i++)
        S[i].p=p+i;
    printf("%c",S[1].p[0]);
}*/

/* OUTPUTS 4
struct S{
    int a;
    struct S *b;
};

int main(){
    struct S *x = malloc(sizeof (struct S));
    struct S *y = malloc(sizeof (struct S));
    x ->a = 2;
    x ->b = y;
    y ->a =4;
    y ->b = x;

    printf("%d",x->b->b->b->a);
    free(x);free(y);
}*/
/*
int i =0 ;
int *f(int *i){
    (*i)++;
    return i;
}

int main(){
    int i =1;
    i = *f(&i);

    printf("%d",i);

}
*/
/* 5-. ->sale 4
struct S{
    int a[2];
};

int main(){
    struct S S[2];
    int i;
    for(int i=0;i<2;i++){
        S[i].a{1-i}=4 * !1;
    }
    printf("%d",S[0].a[1]);

}*/

/* Sale 3
int i =2;
int *f(){
    return &i;
}

int main(){
    int *i;
    i=f();
    printf("%d",++(*i));
}*/

/* COMPILACION FALLA @
int f(int t[2][]){
    return t[0][0] + t[1][0];
}
int main(){
    int i,a[2][2] = {{-2,-1},{1,2}};
    i= f(a +2);
    printf("%d",i);
}*/

/* 9-. Saca 1
int i =1;
int *f(){
    return &i;
}

int main(){
    int i=0;
    i=*f();
    printf("%d",i);
}*/

/* 10-. Saca 1
struct S{
    int S;
};

int main(){
    struct S S;
    S.S = sizeof(struct S) / sizeof(S);

    printf("%d",S.S);

}*/

/* 11-. Saca 2
void f(char *s,int i){
    * (s+i) = '\0';
}

int main(){
    char a[]={'a','b','c','d'};
    f(a+1,1);

    printf("%d",strlen(a));
}*/

/* 12 -. Saca 3
struct Q{
    int a,b,c;
};
struct S{
    int a,b,c;
    struct Q Q;
};

int main(){
    struct Q Q = {3,2,1};
    struct S S = {4,5,6};
    S.Q = Q;

    printf("%d",S.b-S.Q.b);

}*/

/* 13-. ERROR
void f(char *s,int i){
    * (s+i) = '\0';
}

int main(){
    char a[]={'a','b','c','d'};
    f(a[1],1);

    printf("%d",strlen(a));
}*/

/* 14-. Saca 1
struct Q{
    char S[3];
};
struct S{
    struct Q Q;
};

int main(){
    struct S S = {'\0','\0','\0'};
    S.Q.S[0]='A';
    S.Q.S[2]='B';

    printf("%d",strlen(S.Q.S));
}*/

/* 15-. Saca 2
struct Q{
    char S[3];
};
struct S{
    struct Q Q;
};

int main(){
    struct S S = {'\0','\0','\0'};
    S.Q.S[0]='A';
    S.Q.S[1]='B';

    printf("%d",strlen(S.Q.S));

}*/

/*
struct S{@--no encontre la respuesta
    int S;
};
struct f(struct S *s){
    return --s.S;
};

int main(){
    int i;
    struct S S = {2};
    i=f(S);

    printf("%d",i);

}
*/
/* 17-. SAca 2
struct S{
    int a;
    struct S *b;
};
int main(){
    struct S *x =malloc(sizeof(struct S));
    struct S *y =malloc(sizeof(struct S));
    struct S *p;

    x->a=2; x->b=y;
    y->a=4; y->b=x;
    p=x;
    p=p ->b->b->b->b;
    printf("%d",p->a);

}*/

/* 18 -. ERROR
int f(int t[][]){
    return t[0][0] + t[1][0];
}

int main(){
    int i,a[2][2] = {{-2,-1},{1,2}};
    i=f(a+2);

    printf("%d",i);

}/*/
/* 19 -. Debe sacar 1
int f(char t[]){
    return t[0] + t[-1];
}

int main(){
    int i=2;
    i -= f("ABDGK" +1);

    printf("%d",i);

}*/
/* 20-. Saca 0
int f(char t[]){
    return t[1] - t[-0];
}

int main(){
    int i=2;
    i-= f("ABDGK"+1);

    printf("%d",i);

}*/
int f(int t[]){
    return t[0] + t[2];
}

int main(){
    int i,a[]={-2,-1,0,1,2};
    i = f(a+2);
    printf("%d",i);
}
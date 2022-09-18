//modulo 8 preprocessor and delcaration
#include <stdio.h>

/*1-. saca -1
#define ALPHA -1-2
int main(){
    int i =-1;
    i=i*ALPHA;
        printf("%d",i);
}*/
/*2-. saca 0
#define ALPHA(x,y) x##2-y
int main(){
    int i = -1;
    int i2=-2;
    printf("%d",ALPHA(i, i2));
}*/
/*3-. Saca -3, no me jalo a mi
#define B
#define C
int main(){
    int i=
    #ifdef A
    #ifdef C
        -1
    #else
    -2
    #endif
    #else -3
    #endif
    ;
    printf("%d",i);
}*/
/*4-. Saca -2 pero no me jalo a mi
#define A(x) ((x)?-1:0)
int main(){
    int i=2;
    int i2=A(i)*i;
    printf("%d",i2);
}*/
/*5-. Saca 0
#define A(x) ((x)?-1:0)
#define B(a) !(a)
int main(){
    int i=2;
    int i2=A(B(i));

    printf("%d",i2);
}*/
/*6-. Saca -3
#define ALPHA -2
int main(){
    int i=-1;
    i += ALPHA;

        printf("%d",i);
}*/
/*7-.Saca -3
#define ALPHA(x) 2*-x
int main(){
    int i=ALPHA(1-1);
    printf("%d",i);
}*/
/*8-. Saca -1
#define ALPHA(x,y) x+y
int main(){
    int i =-1;
    int i2= -2;
    printf("%d", -ALPHA(i, i2));
}*/
/*9-.  Saca -2
#define ALPHA -1
#define BETA - ALPHA
int main(){
    int i= ALPHA + BETA * ALPHA * BETA;
    printf("%d",i);
}*/
/*10-. Saca -1
#define X 1
#define Y 2
int main(){
    int i =
#if X<< Y >0
    -X
#else 
    -Y
#endif
    ;

    printf("%d",i);
}*/
/*11-. Saca -3
#define ALPHA(x) -x
int main(){
    int i = ALPHA(2-1);
    printf("%d",i);
}*/
/*12 Saca -2
#define X 1
#define Y 2
int main(){
    int i=
#if X>>Y > 0
    -X
#else
    -Y
#endif
    ;
    printf("%d",i);
}*/
/* 13-. Saca -3
#define ALPHA (-1-2)
int main(){
    int i=-1;
    i=-i*ALPHA;
    printf("%d",i);
}*/
/*14-. Saca -1, pero a mi me da -2
#define A
#define B
int main(){
    int i=
#ifdef A
#ifdef C
    -1
#else
    -2
#endif
#else
    -3
#endif
    ;
    printf("%d",i);
}*/
/*15-. Saca 0

int main(){
    int X =1;
#define X 1
    int Y = X-2;
#undef X
    printf("%d",Y+X);
}*/

/*16-. Saca 0
#define ALPHA -1+2
int main(){
    int i=-1;
    i += ALPHA;
    printf("%d",i);
}*/
/*17-. Saca -3
int main(){
#undef X
    int X=1;
    int Y=X-2;
#define X-2
    printf("%d",X+Y);
}*/
/*18-. Saca -1
#define A(x) #x
int main(){
    int i=-1;
    char *s =A(i);
    i=-(s[0]=='i');
    printf("%d",i);
}*/
/*19-. Saca -2
#define A
#define C
int main(){
    int i=
#ifdef A
#ifdef B
    -1
#else
    -2
#endif
#else
    -3
#endif
;
    printf("%d",i);
}*/
/*20-. Saca 0
#define ALPHA(x) 2*-x
int main(){
    int i=ALPHA((1-1));
    printf("%d",i);
}*/
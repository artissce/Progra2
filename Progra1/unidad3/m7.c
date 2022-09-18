/*MODULO 6 NETACAD - PUNTEROS Y ESTRUCTURAS*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*1-.
the following string:
HomeDir/HomeFIle is a valid file name in: UNix/Linux systems
*/
/*2-. SACA 1
int main(){
    FILE *f = fopen("file","w");
    int i = fputs("Hello!",f);

    printf("%d", i != EOF);
    fclose(f);
}
*/
/*3-. ERROR
int main(){
    FILE f;
    f= fopen("file","wb");//ERROR

    printf("%d", f != NULL);//ERROR
    fclose(f);
}
*/
/*4-. SACA 1
int main(){
    int i;
    i=fprintf(stdin,"Hello!");
    printf("%d",i==EOF);
}
*/
/*5-. ERROR - pero sale 1*/
int main(){
    FILE *f;

    f=fopen("file","wb");
    printf("%d",f!=NULL);
    fclose(f);
}

/*6-. SACA 2
int i=0;
int *f(int *i){
    (*i)++;
    return i;
}
int main(){
    int i=1;
    i = *f(&i);

    printf("%d",i);
}
*/
/*7-. compilacion y ejecucion falla
int main(){
    FILE *f = fopen("file","w");
    int i = fputs(f,"Hello!");//incompatible

    printf("%d",i!=EOF);
    fclose(f);
}*/
/*8-. SACA 3
int main(){
    FILE *f=fopen("file","w");
    int i;

    fputs("12A",f);
    fclose(f);

    f=fopen("file","r");
    fseek(f,0,SEEK_END);
    i=ftell(f);
    fclose(f);
    printf("%d",i);
}*/
/*9-.COMPILACION Y EJECUCION FALLA
int main(){
    FILE *f=fopen("file","w");
    int i;

    fputs("12A",f);
    fclose(f);
    f=open("file","r");
    fseek(f);
    i=ftell(f,0,SEEK_END);//error
    fclose(f);

    printf("%d",i);
}*/
/*10-. ERROR- pero sale 1
int main(){
    FILE *f;
    int i = fprintf(f,"Hello!");

    printf("%d",i==EOF);
}*/
/*11-. SACA 1
int main(){
    char s[20];
    FILE *f=fopen("file","w");
    int i=fputs("12A",f);
    fclose(f);

        f=fopen("file","r");
    fgets(s,2,f);
    puts(s);
    fclose(f);

}*/
/*12-.
the following string: JohnDoe is a valid file name in: 
Unix/LInux and MS Windows systems
*/
/*13-.
the following string: D:\USERDIR\johndoe.txt is a valid file name in:
MS Windows systems
*/
/*14-. SACA 1   
int main(){
    FILE *f = fopen("file","w");
    char c;

    fputs("12A",f);
    fclose(f);
    f=fopen("file","r");
    fscanf(f,"%c",&c);
    fclose(f);

    printf("%c",c);
}*/
/*15-. IMprime 12A
int main(){
    char s[20];
    FILE *f = fopen("file","w");
    int i = fputs("12A",f);
    fclose(f);

    f=fopen("file","r");
    fgets(s,20,f);
    puts(s);
    fclose(f);
}
*/
/*16-. imprime Hello!0, 0 to the stdout stream
int main(){
    int i;
    i=fprintf(stderr,"Hello!");
    printf("%d",i==EOF);
}*/
/*17-. compilacopn y ejecucion falla
int main(){
    FILE *f=fopen("file","w");
    float f;//error

    fputs("12A",f);
    fclose(f);
    fscanf(f,"%f","&f");
    fclose(f);

    printf("%f",f);

}*/
/*18-.
UNix/Linux systems treat the following file names: JohnDoe and johndoe as:
differenet file names
*/
/*19-. Saca 12 -> 1
int f(char t[]){
    return t[0] - t[-1];
}
int main(){
    int i =2;
    i -= f("ABDGK" + 1);
    printf("%d",i);
}*/
/*20-. saca 1
int main(){
    FILE *f;
    f=fopen("file","wb");

    printf("%d",f!=NULL);
    fclose(f);
}*/

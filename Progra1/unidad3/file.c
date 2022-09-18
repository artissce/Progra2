/*Genera en un archivo llamado telefonos.txt los 10 millones de 
teléfonos de la ciudad de San Luis Potosí, captura pantalla donde 
se vea el código y la última pantalla del bloc de notas (en el 
bloc de notas debe verse el número de línea).*/
#include <stdio.h>

int main(){
    FILE *puntero;
    puntero=fopen("telefonos.txt","w");//abre nuevo archivo (borra existente)
    /*fprintf(puntero,"1\n");
    fprintf(puntero,"2\n");
    fclose(puntero);
    puntero=fopen("prueba.txt","a");//abre archivo sin borrar el existente*/
    /*printf("Archivo creado");
    for(int i;i<=1000000;i++){
        fprintf(puntero,"%i\n",i);
    }*/
    for(int i=0;i<=9;i++){
        for(int j=0;j<=9;j++){
            for(int k=0;k<=9;k++){
                for(int l=0;l<=9;l++){
                    for(int m=0;m<=9;m++){
                        for(int n=0;n<=9;n++){
                           for(int o=0;o<=9;o++){ 
                                fprintf(puntero,"\n444%i%i%i%i%i%i%i",i,j,k,l,m,n,o);
                           }
                        }
                    }
                }
            }
        }
    }/*
     for(int i=85;i<=86;i++){
        for(int j=65;j<=90;j++){
            for(int k=65;k<=90;k++){
                for(int l=0;l<=9;l++){
                    for(int m=0;m<=9;m++){
                        for(int n=0;n<=9;n++){
                           for(int o=0;o<=9;o++){ 
                                fprintf(puntero,"%c%c%c%i%i%i%i\n",i,j,k,l,m,n,o);
                            }
                        }
                    }
                }
            }
        }
    }*/
    printf("Archivo creado");
    fclose(puntero);
}


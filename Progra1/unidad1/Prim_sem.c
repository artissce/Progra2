#include <stdio.h>
int main() {
    //declaracion de variables
    
    char nom[50], edad[3],tel[11], calle[30], ndirecc[15], curp[19],correo[30];
    int esc,estad, op; 
   //captura de datos
    loop:
    printf("\nIngrese su nombre completo: \n");
    fgets(nom,50,stdin);
    
    printf("Ingrese su edad: \n");
    fgets(edad,3,stdin);
    
    printf("Ingrese su telefono a 10 digitos: \n");
    fgets(tel,11,stdin);

    printf("Ingrese su curp: \n");
    fgets(curp,19,stdin);

    printf("Ingrese la calle de su direccion: \n");
    fgets(calle,30,stdin);

    printf("Ingrese su numero de direccion: \n");
    fgets(ndirecc,15,stdin);
    //captura de datos en ciclo
    do{
    printf("\n\nESTADO CIVIL");
    printf("\n");
    printf("\n1. Soltero");
    printf("\n2. Casado");
    printf("\n2. Divorciado");
    printf("\n4. Viudo");
    printf("\n5. Union libre");
    printf("\n Selecciona tu opcion: ");
    scanf("\n%i",&op);
    
        switch(op){
            case 1: 
            estad=1;
            printf("Soltero");
            break;

            case 2:
            estad=2;
            printf("Casado");
            break;
    
            case 3:
            estad=3;
            printf("Divorciado");
            break;

            case  4:
            estad=4;
            printf("Viudo");
            break;

            case  5:
            estad=5;
            printf("Union libre");
            break;

            default:
            printf("ERROR - Opcion incorrecta");
        }
    }
    while(op<1||op>5);
    do{
    printf("\n\nESCOLARIDAD");
    printf("\n");
    printf("\n1. Primaria");
    printf("\n2. Secundaria");
    printf("\n2. Bachillerato");
    printf("\n4. Licenciatura");
    printf("\n5. Maestria/Doctorado");
    printf("\n Selecciona tu opcion: ");
    scanf("\n%i",&op);
    
        switch(op){
            case 1: 
            esc=1;
            printf("Primaria");
            break;

            case 2:
            esc=2;
            printf("Secundaria");
            break;
    
            case 3:
            esc=3;
            printf("Bachillerato");
            break;

            case  4:
            esc=4;
            printf("Licenciatura");
            break;

            case  5:
            esc=5;
            printf("Maestria/Doctorado");
            break;

            default:
            printf("ERROR - Opcion incorrecta");
        }
    }
    while(op<1||op>5);


    printf("\n\nTus datos son correctos?");
    printf("\n\nNombre: %s", nom);
    printf("\nEdad: %s", edad);
    printf("\nTelefono: %s", tel);
    printf("\nDireccion: %s,%s", calle,ndirecc);
    printf("\nCurp: %s", curp);

    if (estad==1)
        printf("\nEstado civil: Soltero");
    else if (estad==2)
        printf("\nEstado civil: Casado");
    else if (estad==3)
        printf("\nEstado civil: Divorciado");
    else if (estad==4)
        printf("\nEstado civil: Viudo");
    else
        printf("\nEstado civil: Union libre");
	

    if (esc==1)
        printf("\nEscolaridad: Primaria");
    else if (esc==2)
        printf("\nEscolaridad: Secundaria");
    else if (esc==3)
        printf("\nEscolaridad: Bachillerato");
    else if (esc==4)
        printf("\nEscolaridad: Universidad");
    else
        printf("\nEscolaridad: Maestria/Doctorado");

    
    printf("\n\nConfirma con una '1' o niega con '0' ");
    scanf("%i",&op);
    if (op==1)
        printf("Gracias por contestar!");
    else 
        goto loop;
    return 0;
}

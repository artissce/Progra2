#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <windows.h>
#include <time.h>
#include <ctype.h>
//#include <conio.h>
//#define color SetConsoleTextAttribute //variable de color

void gotoxy(int x,int y){
    printf("\e[%i;%iH",x,y);
}


int ElCorreoEsCorreto(char* correo);//se definen las funciones que reciviran datos de tipo char y devolveran enteros
int esletra(char caracter);
int esnumero(char caracter);
int main(){
	setlocale(LC_ALL, "Spanish");
	char nom[50], edad[3], tel[11],calle[30], col[30], cd[20], curp[19], correo[30], estado[20], esco[15];
	int cp, op1, op2, sigue=2, folio,cicle=0,numtel,numcarac,space=0, ndirecc=0;
	bool p=true, j=true; //b=true, ;
	int ccompleto = 0;
	
	printf("\n177932 - Cuenca Esquivel Ana Karen");
	printf("\n178815 - Rodr�guez Castillo Ana Sof�a");//mis datos
    printf("\nPROG 1, SEM P22");//mis datos
    printf("\nPRACT 8, 14/03/2022\n");//mis datos
    printf("\n\tPRESIONE ENTER PARA CONTINUAR");
    getchar();
    system("clear");
	while (sigue==2){
		system("clear");
	    
		printf("\n\t---CAPTURA DE DATOS---\n");
		sigue==1;
			
			printf("\nIngrese su nombre completo: \n");
			scanf(" %[^\n]",nom);
			fflush(stdin);
				
			while(p){
			int old=0;
			printf("\nIngrese su edad: \n");
			scanf("%[^\n]", edad);
			fflush(stdin);
			if(strlen(edad)>3)
				continue;
			else{
				for(int i=0; i<strlen(edad); i++){//aqui se verifica que todos los caracteres de la cadena sean numero y esten dentro del rango
					if(isdigit(edad[i]))//se usa la variable i para ir avanzando por los caracteres en la cadena
						old = atoi(edad);// hace una "conversion" de la variable char a int
						if(old>2 && old<=89)
							p=false;
						else
							break;
					}
				}
			}
			
			do{
				space=0;
				fflush(stdin);
				printf("\nIngresa su telefono de 10 digitos: \n");
				scanf("%s", tel);
				numtel=strlen(tel);//se utiliza la cantidad de caracteres que tiene el numero proporcionado
				for(numcarac=0; numcarac<numtel; numcarac++){//el for pasa caracter por caracter validadndo que ninguno sea espacio de lo contrario regresa al usuario a ingresal el numero de nuevo
					if(tel[numcarac]==' '){
						space++;//esto significa que si hay espacios y manda un mensaje de error
						break;
					}
				} 
						if((numtel==10)&&(space==0)){//confirmando que el numero de caracteres es 10 y los espacios 0, se verifica que en cada posicion de la cadena solo se encuentren numeros del 0 al 9
							if((tel[0]>='0' && tel[0]<='9')&&(tel[1]>='0' && tel[1]<='9')&&(tel[2]>='0' && tel[2]<='9')&&(tel[3]>='0' && tel[3]<='9')&&(tel[4]>='0' && tel[4]<='9')&&(tel[5]>='0' && tel[5]<='9')&&(tel[6]>='0' && tel[6]<='9')&&(tel[7]>='0' && tel[7]<='9')&&(tel[8]>='0' && tel[8]<='9')&&(tel[9]>='0' && tel[9]<='9')){
								cicle=0;
							}
							else{//si la condicion anteror es falsa se manda un mensaje de erro y se repite el ciclo
								printf("\nERROR - Introduzca solo numeros\n");
								cicle=1;
							}
						}
				else{//este es el mensaje de error que se manda si no se cumple con la cantidad de caracteres o contiene espacios
					printf("\nERROR - Cantidad de caracteres incorrectos o incluye espacios\n");
					cicle=1;
				}
			}while (cicle==1);
			
	
			printf("\nIngrese la calle de su direccion: \n");
			scanf(" %[^\n]",calle);
	
			printf("\nIngrese su numero de direccion: \n");
			scanf("%d",&ndirecc);
					
			printf("\nIngrese la colonia de su direccion: \n");
			scanf(" %[^\n]",col);
	
			printf("\nIngrese su codigo postal: \n");
			scanf("%d",&cp);
	
			printf("\nIngrese su ciudad: \n");
			scanf(" %[^\n]",cd);
	
			printf("\nIngrese su CURP: \n");
			scanf(" %[^\n]",curp);

			do{
				printf("\nIngrese su correo electronico: \n");
			        scanf("%s", correo);
		 	}while (ElCorreoEsCorreto(correo)==-1);//como ya vimos funciones decidimos empezarlas a usar, tal vez despues convirtamos muchas otras cosas a funcion
			
	do{//se pide una opcion dentro del rango, de lo contrario se repite
			printf("\n\nESCOLARIDAD");
		    printf("\n");
		    printf("\n1. Primaria");
		    printf("\n2. Secundaria");
		    printf("\n3. Bachillerato");
		    printf("\n4. Licenciatura");
		    printf("\n5. Maestria/Doctorado");
		    printf("\n Selecciona tu opcion: ");
		    scanf("\n%i",&op1);
		    	switch(op1){
		    		case 1:
						strcpy(esco,"Kinder");
					break;
					case 2:
						strcpy(esco,"Primaria");
					break;
					case 3:
						strcpy(esco,"Secundaria");
					break;
					case 4:
						strcpy(esco,"Bachillerato");
					break;
					case 5:
						strcpy(esco,"Universidad");
					break;
					default:
					printf("Has elegido una opcion fuera del rango");
					break;	
				}
				fflush(stdin);
	}while(op1<1||op1>5);
	do{//se pide una opcion dentro del rango, de lo contrario se repite
			printf("\n\nESTADO CIVIL");
		    printf("\n");
		    printf("\n1. Casado");
		    printf("\n2. Soltero");
		    printf("\n3. Divorciado");
		    printf("\n4. Viudo");
		    printf("\n5. Union Libre");
		    printf("\n Selecciona tu opcion: ");
		    scanf("\n%i",&op2);
		    	switch(op2){
		    		case 1:
						strcpy(estado,"Casado");
					break;
					case 2:
						strcpy(estado,"Soltero");
					break;
					case 3:
						strcpy(estado,"Divorciado");
					break;
					case 4:
						strcpy(estado,"Viudo");
					break;
					case 5:
						strcpy(estado,"Union Libre");
					break;
					default:
					printf("Has elegido una opcion fuera del rango");	
				}
		}while (op2<1||op2>5);
		
		//se pide la validacion de los datos proporcionados
			printf("\n�Los datos ingresados son correctos?\n");
			printf("\nNOMBRE: %s\n",nom);
			printf("EDAD: %s\n",edad);
			printf("TEL�FONO: %s\n",tel);
			printf("DIRECCI�N: %s %d, %s, %d, %s\n",calle, ndirecc, col, cp, cd);
			printf("CURP: %s\n",nom);
			printf("CORREO ELECTR�NICO: %s\n",correo);
			printf("ESCOLARIDAD: %s\n",esco);
			printf("ESTADO CIVIL: %s\n",estado);
			printf("Ingrese 1 para continuar o 2 para reingresar los datos:");
			scanf("%d",&sigue);
	}
	
			system("clear");//se limpia la pantalla y se general el numero de folio
			srand(time(NULL));
			folio=1000+rand()%(2500-1000);
	
	//HANDLE hd = GetStdHandle(STD_OUTPUT_HANDLE);
	//color(hd,1);
	gotoxy (20,1); 
		printf("REGISTRO EXITOSO!");//se empieza con la colocacion de los datos para el diagrama de la tabla de datos
		
	//color(hd,1); //para que no se viera mucho texto le dimos a color el significado de SetConsoleTextAttribute, asi le fuimos dando color a las frases
	gotoxy (8,4);
		printf("FOLIO: ");
	//color(hd,7);
	gotoxy (15,4);
		printf("%d",folio);
		
	//color(hd,1);
	gotoxy (45,4); 
		printf("EDAD: ");
	//color(hd,7);
	gotoxy (50,4);
		printf("%s",edad);
		
	//color(hd,1);
	gotoxy (15,6);
		printf("NOMBRE:");
	//color(hd,7);
	gotoxy (22,6);
		printf("%s",nom);
		
	//color(hd,1);
	gotoxy (2,8);
		printf("DIRECCI�N:");
	//color(hd,7);
	gotoxy (2,12);
		printf("%s %d, %s,",calle, ndirecc, col);
	//color(hd,7);
	gotoxy (2,13);
		printf("%d, %s", cp, cd);
		
	//color(hd,1);
	gotoxy (35,8);
		printf("TEL�FONO:");
	//color(hd,7);
	gotoxy (35,10);
		printf("%s",tel);
	
	//color(hd,1);	
	gotoxy (35,12);
		printf("CORREO:");
	//color(hd,7);	
	gotoxy (35,14);
		printf("%s",correo);
	
	//color(hd,1);	
	gotoxy (2,16);
		printf("ESCOLARIDAD:");
	//color(hd,7); 	
	gotoxy (2,18);
		printf("%s",esco);
		
	//color(hd,1);
	gotoxy (35,16);
		printf("ESTADO CIVIL:");
	//color(hd,7);
	gotoxy (35,18);
		printf("%s",estado);
		
	//color(hd,1);
	gotoxy (17,20);
	printf("CURP:");
	//color(hd,7);
	gotoxy (22,20);
	printf("%s",curp);
	
	//MARGEN
	int x,y;
	 x=0;
	 y=0;
	 //color(hd,4);
	 gotoxy(0,0);
	 printf("%c",46);
//Lineas verticales
	  do{
	 	//color(hd,4);//m derecha
	 	y++;
		gotoxy(60,y);
		printf("%c",46);
	 }while(y<22);
	 
	 y=0;
	 do{
	 	//color(hd,4);//m izq
	 	y++;
		gotoxy(x,y);
		printf("%c",46);
	 }while(y<22);
	 
	 x=29;
	 y=2;
	 do{
	 	//color(hd,4);//2 linea media 
	 	y++;
		gotoxy(x,y);
		printf("%c",46);
	 }while(y<5);
	 
	 x=29;
	 y=7;
	 do{
	 	//color(hd,4);//2 linea media 
	 	y++;
		gotoxy(x,y);
		printf("%c",46);
	 }while(y<19);
//lineas horizontales
	 y=0;
	 x=0;
	 do{
	 	//color(hd,4);//m arriba
	 	x++;
		gotoxy(x,y);
		printf("%c",46);
	 }while(x<60);
	 
	y=0;
	x=0;
	 do{
	 	//color(hd,4);//2da linea ABregistro exitoso
	 	x++;
		gotoxy(x,2);
		printf("%c",46);
	 }while(x<60);
	 
	y=0;
	x=0;
	 do{
	 	//color(hd,4);//3 linea Aedad y folio
	 	x++;
		gotoxy(x,5);
		printf("%c",46);
	 }while(x<60);
	 
	 y=0;
	 x=0;
	 do{
	 	//color(hd,4);//4 ABnombre
	 	x++;
		gotoxy(x,7);
		printf("%c",46);
	 }while(x<60);
	 
	y=0;
	x=29;
	 do{
	 	//color(hd,4);//5 Atelefono
	 	x++;
		gotoxy(x,11);
		printf("%c",46);
	 }while(x<60);
	 
	y=0;
	x=0;
	 do{
	 	//color(hd,4);//6 linea Acorreo y direccion
	 	x++;
		gotoxy(x,15);
		printf("%c",46);
	 }while(x<60);
	
	y=0;
	x=0;
	 do{
	 	//color(hd,4);//7 linea Aescolaridad y estado civil
	 	x++;
		gotoxy(x,19);
		printf("%c",46);
	 }while(x<60);
	 
	x=0;	
	do{
	 	//color(hd,4);//m abajo
	 	x++;
		gotoxy(x,22);
		printf("%c",46);
	 }while(x<60);

}
//aqui empieza nuestra funcion
int esletra(char caracter){
    return( (caracter>='A' && caracter<='Z') || (caracter>='a' && caracter<='z') );
}
int esnumero(char caracter){
	return(caracter>='0' && caracter<='9');
}
int ElCorreoEsCorreto(char* correo){
    /*
        El solo 1 arroba queda explicito en las demas reglas,
        si se lee un arroba donde no deberia de haber, regresa -1
    */

    //Primer caracter letra y diff al @
    if(!esletra(correo[0]) || correo[0] == '@' ) 
	return -1;
	
    //5 Caracteres [0 -> 4] antes del @ y diff al @
    for(int i = 0; i < 5; i++){//se evaluan los caracteres en la posicion de 0 a 4 
        if((esletra(correo[i])=0 || esnumero(correo[i])=0) || correo[i]='@')
		return -1;
    }

    //El caracter 5 debe de ser @
    if( correo[5]!= '@' ) 
	return -1;

    //5 Caracteres despues del @ [6 -> 10] y diff al @
    for(int i = 6; i < 11; i++){
        if( !esletra(correo[i]) || correo[i] == '@') 
		return -1;
    }

    //1 punto desues de las 5 letras
    if( correo[11] != '.' ) 
	return -1;

    // "COM" despues del punto
    if( correo[12] != 'c' || correo[13] != 'o' || correo[14] != 'm' ) 
	return -1;

    return 1;
}

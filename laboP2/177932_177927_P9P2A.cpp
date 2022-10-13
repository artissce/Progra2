#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <windows.h>
#include <conio.h>
#include <time.h>
#include <ctype.h>
#define color SetConsoleTextAttribute //variable de color para facilitar la programacion

//estructura Nodo
struct Node{
	int data;//lo tomare como su id
	char user[10];//nombre
	struct Node *next;//puntero para saber su siguiente
	struct Node *prev;//puntero para saber su anterior
}*head = NULL;//lo interpretamos como el apuntador primero

HANDLE hCon = GetStdHandle(STD_OUTPUT_HANDLE);//ayuda al color

char sp_car[12]={"#$%&/?!._"};//cadena con los digitos especiales 9

//DECLARACION DE FUNCIONES
void encabezado();
void GenCad(char *user);
Node* GeneraNodo();
void insertaNodo();
void eliminaNodo();
void imprimir();
/*---------------------------------DESARROLLO DE FUNCIONES ---------------------------------------*/

/*Genera una cadena compuesta por caracteres aleatorios
1 mayuscula + 3 minusculas + 3 numeros + 1 caracter especial
(solo del arreglo sp_car) + una mayuscula, en ese orden*/

/*--------------------------------------------------------------------------------------------------------*/
/*en todo momento se estra mostrando la lista y un menu, en el primer caso pues head hacia null con su flecha
y asi, opciones de 1 inserta, 2 elimina en el cual pide el data a eliminar*/
main(){
	encabezado();
	head = NULL;//declara primer nodo como vacio
	int op_user = 0;//variable para la opcion del usuario
	srand(time(0));
	
	do{
		fflush(stdin);//no toma el enter
		color(hCon, 8);//da color gris
		printf("1.Inserta, 2.Elimina, 0.Salir: "); 
		scanf("%d",&op_user);
		switch(op_user){//menu para lo que quiera elegir el usurio
			case 1: insertaNodo(); imprimir(); break; //inserta nodo al final
			case 2: eliminaNodo(); imprimir(); break;//checar el eliminar nodo
		}
	}while(op_user!=0);//cero para terminar
}

//funcion con los datos de los alumnos
void encabezado(){
	printf("\tMatricula: 177932");
	printf("\n\tNombre: Cuenca Esquivel Ana Karen");
	printf("\n\tMatricula: 177927");
	printf("\n\tNombre: Cervantes Candia Saul");
	printf("\n\tProgramacion 2");
	printf("\n\tGrupo:A");
	printf("\n\t16/08/2022\n");
	printf("\t________________________________\n\n");
}

//CHECAR funcion que genera nombre con las validaciones de acuerdo a la posicion de la cadena 
void GenCad(char *user){
	//RANGO PARA LETRAS ALEAOTORIAS EN MAYUSUCULA 65+rand()%26;
	//RANGO PARA LETRAS ALEAOTORIAS EN MINUSCULAS 97+rand()%26;
	//rango para numeros aleaotorios 0+rand()%9;
	//rango de la posicion del arreglo sp_car 0*rand()%8 PORQUE SON 9 NUMEROS
	char may,min,num,special;
	may=65+rand()%26;
	min=97+rand()%26;
	num=0+rand()%9;
	//printf("%c\t",*(p + i));
	/*strcpy(user[0], may);
	strcpy(user[1], min);
	strcpy(user[2], min);
	strcpy(user[3], num);
	strcpy(user[4], num);
	strcpy(user[5], num);
	strcpy(user[6], may);*/
	strcpy(user, "hello");
}
/*Funcion para generar cada nodo*/
Node* GeneraNodo(){
	Node *newNode = new Node; //Crea puntero del tipo de la estructura y lo iguala anew node para reservar memoria
	newNode->data = 100 + rand()%501; //puntero en dato se realiza de manera aleaotoria en un rango de 100 al 600
	GenCad(newNode->user);//llama a la funcion para generar el nombre del user
	newNode->next = NULL;//el siguiente del nuevo es nulo
	newNode->prev = NULL;//el anterior del nuevo es nulo
	return newNode;//regresa el valor del nodo generado
}
/*Funcion para insertar el nodo*/
void insertaNodo(){
	Node *newNode = new Node;//Crea puntero del tipo de la estructura y lo iguala anew node para reservar memoria
	Node *temp = NULL;//auxiliar es nulo
	newNode = GeneraNodo();//nuevo nodo se le asigna el valor del nodo generado en la otra funcion
	temp = head;//auxiliar es primero
	
	if(head == NULL){//si esta vacia la lista
		head = newNode;//el primero es el nuevo nodo
	}
	else{ /*sino esta vacia*/
		while(temp->next!=NULL)//mientras el siguiente del auxiliar (primero) no es nulo
			temp = temp->next;//el auxiliar (primero) es igual al siguiente del auxiliar
			
		temp->next = newNode;	//el siguiente del auxiliar (primero) es el nuevo nodo
		newNode->prev = temp;	//el anterior del nuevo es el auxiliar (primero)
	}		
}
/*Funcion para eliminar el nodo*/
void eliminaNodo(){
    int del_data = 0;//id a eliminar
    color(hCon, 14);//da color
    printf("\n\tDato: "); 
    scanf("%d",&del_data);
    
    if(head!=NULL){//si no es nulo el primero
        if(head->data == del_data){//si el dato del primero es igual al id por eliminar
            head = head->next;//el primero es igual al siguiente del primerop
            if(head != NULL) head->prev = NULL;}//si el primero no es nulo, su anterior es nulo
        else{//si NO es el dato del primero es igual al id por eliminar
            for(Node* i = head; i!=NULL; i=i->next){//para iterador en primero, hasta que sea nulo, avanza al siguiente
                if(i->data == del_data){    //el dato del iterador es igual al id por el eliminar
                    if(i->next == NULL) //si el siguiente del nodo es nulo
                        i->prev->next = NULL;//el previo en su siguiente es nulo
                    else{//si NO es el siguiente del nodo en nulo
                        i->prev->next = i->next;//el previo en su siguiente es el siguiente del iterador
                        i->next->prev = i->prev;} //el siguiente en su previo es el previo del iterador
                    free(i);//ligbreamos ese nodo/iterador
                    break;
                }
            }
        }    
    }
}
/*realiza todo el proceso de simulacion de nodos, puede crear mas funciones auxiliares a esta pero siempre partiendo de aqui*/
void imprimir(){
	//este codigo solo es de prueba, desarrolle lo solicitado:c
	int j = 0;
	
	color(hCon, 11);printf("\n");
	for(Node* i = head; i!=NULL; i=i->next){
		printf("[%d, %s]->",i->data,i->user);
		j++;
		if(j == 9){printf("\n");j = 0;}
	}
	printf("\n\n");
}

//funcion para las cajas de los nodos
void cajas(){
      int x=0;
      int y=0;
      //primera fila
      gotoxy(0,0);
      color(hCon, 2);
      printf("%c", 218);
      do{
            x++;
            //gotoxy(20,20);
            //color(hCon, 2);
            printf("%c", 196);
      }while(x<4);
      x=4, y=0;
      //color(hCon, 2);
      printf("%c", 194);
      do{
            x++;
            //gotoxy(20,20);
            color(hCon, 2);
            printf("%c", 196);
      }while(x<13);
      x=13, y=0;
      //color(hCon, 2);
      printf("%c", 191);
      //segunda fila
      gotoxy(0,1);
      //color(hCon, 2);
      printf("%c", 179);
      gotoxy(5,1);
      //color(hCon, 2);
      printf("%c", 179);
      gotoxy(15,1);
      //color(hCon, 2);
      printf("%c", 179);
      //tercera fila
      x=0, y=2;
      gotoxy(0,2);
      //color(hCon, 2);
      printf("%c", 195);
      do{
            x++;
            //gotoxy(20,20);
            //color(hCon, 2);
            printf("%c", 196);
      }while(x<4);
      x=4, y=2;
      printf("%c", 193);
      x=5, y=2;
      do{
            x++;
            //gotoxy(20,20);
            //color(hCon, 2);
            printf("%c", 196);
      }while(x<14);
      x=14, y=2;
      printf("%c", 180);
      //cuarta fila
      gotoxy(0,3);
      printf("%c", 179);
      gotoxy(15,3);
      printf("%c", 179);
      //quinta fila
      x=0, y=4;
      gotoxy(0,4);
      printf("%c", 195);
      x=1, y=4;
      do{
            x++;
            printf("%c", 196);
      }while(x<15);
      x=15, y=4;
      gotoxy(15,4);
      printf("%c", 180);
      //sexta fila
      gotoxy(0,5);
      printf("%c", 179);
      gotoxy(15,5);
      printf("%c", 179);
      //ultima fila
      x=0, y=6;
      gotoxy(0,6);
      printf("%c", 192);
      x=1, y=6;
      do{
            x++;
            printf("%c", 196);
      }while(x<15);
      x=15, y=6;
      gotoxy(15,6);
      printf("%c", 217);
}


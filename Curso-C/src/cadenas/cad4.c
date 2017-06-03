#include <stdio.h>
#define TAM 40
char cad[TAM];
void ingresar();
void mostrar();
void operar();

void main(){
	ingresar();
	mostrar(cad);
	operar();
	mostrar(cad);


}

void ingresar(){
	printf("ingrese una cadena:\t");
	int i=0;
	char c='n';
	while(c!='\n'){
		c=getchar();
		cad[i++]=c;
	}
	cad[i]='\0';

}

void mostrar(char* p){
	printf("mostrando la cadena ingresada:\t");
	int i=0;
	while(*p!='\0'){
	  printf("%c",*p);
	  p++;	
	}
	printf("\n");
}

void operar(){
	char *p=cad;
	int cont=0;
	while(*p!='\0'){
		if(*p==' '||*p=='\n'){
		  *p=cont+48; 
		  cont=0;
		}
		else 
		  cont++;
		p++;
	}
	*(++p)='\0';

}

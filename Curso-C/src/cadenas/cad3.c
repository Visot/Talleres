#include <stdio.h>
#define TAM 40
char cad[TAM];
void ingresar();
void mostrar();
void main(){
	ingresar();
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
}

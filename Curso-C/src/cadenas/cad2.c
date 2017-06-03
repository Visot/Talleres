#include <stdio.h>
#include <string.h>
#define TAM 40
char cad[TAM];
void ingresar();
void mostrar();
void mintomay();
void main(){
	ingresar();
	mostrar(cad);
	mintomay(cad);
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

void mintomay(char *p){
	int n=strlen(cad);
	int i;
	printf("la longitud de la cadena es= %d\n",n);
	for(i=0;p[i]!='\0';i++){
	   if(p[i]>=97&&p[i]<=122){
		p[i]=p[i]-32;	
	   }
	}
}

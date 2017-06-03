#include <stdio.h>
void mostrar(char *p){
	while(*p!='\0'){
	  printf("%c",*p);
	  p++;
	}
	printf("\n");

}
void main(){
	char cad1[] = " "; // Inicializamos la cadena
  	gets(cad1); // Le pedimos al usuario que ingrese los caracteres de la cadena 
 	 //(pueden contener números como elementos en la cadena los cuales se almacenarán como caracteres
	//puts(cad1); // Esta función imprime el contenido de la cadena en la consola
	mostrar(cad1);
}

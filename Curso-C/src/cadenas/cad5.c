	#include <stdio.h>
#include <string.h>

char destino[] = "";
char fuente[] = "soy un texto a ser compiado";
char remplazo[]="SOY";
void copiar();
void remplazar();
int main(){
	copiar();
	remplazar(3);
	return 0;
}

void copiar(){
	printf("destino antes de strcpy '%s'\n",destino);
	strcpy(destino,fuente);
	printf("destino despues de strcpy '%s'\n",destino);
}
void remplazar(size_t n){
	printf("destino antes de strcpy '%s'\n",destino);
	strncpy(destino,remplazo,n);
	printf("destino despues de strcpy '%s'\n",destino);	
}
